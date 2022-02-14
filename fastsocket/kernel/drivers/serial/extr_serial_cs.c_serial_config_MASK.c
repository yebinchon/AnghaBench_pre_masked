
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_16__ {int TupleDataMax; int Attributes; int DesiredTuple; scalar_t__ TupleOffset; int * TupleData; } ;
typedef TYPE_5__ tuple_t ;
struct serial_info {int multi; scalar_t__ ndev; int * node; TYPE_8__* quirk; int prodid; int manfid; } ;
struct TYPE_13__ {int * rmask; int base; } ;
struct TYPE_15__ {int nwin; TYPE_3__* win; } ;
struct TYPE_17__ {TYPE_4__ io; } ;
struct TYPE_18__ {TYPE_2__ config; TYPE_6__ cftable_entry; } ;
struct serial_cfg_mem {int * buf; TYPE_7__ parse; TYPE_5__ tuple; } ;
struct TYPE_12__ {int Present; int ConfigBase; } ;
struct pcmcia_device {scalar_t__ func_id; int * dev_node; scalar_t__ has_func_id; int card_id; int manf_id; TYPE_1__ conf; struct serial_info* priv; } ;
typedef TYPE_6__ cistpl_cftable_entry_t ;
typedef TYPE_7__ cisparse_t ;
typedef int cisdata_t ;
struct TYPE_19__ {int multi; scalar_t__ (* post ) (struct pcmcia_device*) ;int prodid; int manfid; } ;
struct TYPE_14__ {int len; } ;


 int FUNC_0 (TYPE_8__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,struct pcmcia_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct pcmcia_device*,int,int) ;
 int FUNC_3 (struct pcmcia_device*,TYPE_5__*,TYPE_7__*) ;
 int FUNC_4 (struct serial_cfg_mem*) ;
 struct serial_cfg_mem* FUNC_5 (int,int ) ;
 int FUNC_6 (struct pcmcia_device*) ;
 TYPE_8__* VAR_12 ;
 int FUNC_7 (struct pcmcia_device*) ;
 int FUNC_8 (struct pcmcia_device*) ;
 scalar_t__ FUNC_9 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_10(struct pcmcia_device * VAR_13)
{
 struct serial_info *VAR_14 = VAR_13->priv;
 struct serial_cfg_mem *VAR_15;
 tuple_t *VAR_16;
 u_char *VAR_17;
 cisparse_t *VAR_18;
 cistpl_cftable_entry_t *VAR_19;
 int VAR_20, VAR_21, VAR_22;

 FUNC_1(0, "serial_config(0x%p)\n", VAR_13);

 VAR_15 = FUNC_5(sizeof(struct serial_cfg_mem), VAR_8);
 if (!VAR_15)
  goto failed;

 VAR_16 = &VAR_15->tuple;
 VAR_18 = &VAR_15->parse;
 VAR_19 = &VAR_18->cftable_entry;
 VAR_17 = VAR_15->buf;

 VAR_16->TupleData = (cisdata_t *) VAR_17;
 VAR_16->TupleOffset = 0;
 VAR_16->TupleDataMax = 255;
 VAR_16->Attributes = 0;


 VAR_16->DesiredTuple = VAR_1;
 VAR_21 = FUNC_3(VAR_13, VAR_16, VAR_18);
 if (VAR_21 != 0) {
  VAR_22 = VAR_9;
  goto cs_failed;
 }
 VAR_13->conf.ConfigBase = VAR_18->config.base;
 VAR_13->conf.Present = VAR_18->config.rmask[0];


 VAR_16->DesiredTuple = VAR_5;
 VAR_16->Attributes = VAR_10 | VAR_11;
 VAR_14->multi = (FUNC_3(VAR_13, VAR_16, VAR_18) == 0);


 VAR_16->DesiredTuple = VAR_6;
 VAR_14->manfid = VAR_13->manf_id;
 VAR_14->prodid = VAR_13->card_id;

 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_12); VAR_20++)
  if ((VAR_12[VAR_20].manfid == ~0 ||
       VAR_12[VAR_20].manfid == VAR_14->manfid) &&
      (VAR_12[VAR_20].prodid == ~0 ||
       VAR_12[VAR_20].prodid == VAR_14->prodid)) {
   VAR_14->quirk = &VAR_12[VAR_20];
   break;
  }



 VAR_16->DesiredTuple = VAR_2;
 if ((VAR_14->multi == 0) &&
     (VAR_13->has_func_id) &&
     ((VAR_13->func_id == VAR_3) ||
      (VAR_13->func_id == VAR_4))) {
  VAR_16->DesiredTuple = VAR_0;
  if (FUNC_3(VAR_13, VAR_16, VAR_18) == 0) {
   if ((VAR_19->io.nwin == 1) && (VAR_19->io.win[0].len % 8 == 0))
    VAR_14->multi = VAR_19->io.win[0].len >> 3;
   if ((VAR_19->io.nwin == 2) && (VAR_19->io.win[0].len == 8) &&
       (VAR_19->io.win[1].len == 8))
    VAR_14->multi = 2;
  }
 }




 if (VAR_14->quirk && VAR_14->quirk->multi != -1)
  VAR_14->multi = VAR_14->quirk->multi;

 if (VAR_14->multi > 1)
  FUNC_6(VAR_13);
 else
  FUNC_8(VAR_13);

 if (VAR_14->ndev == 0)
  goto failed;





 if (VAR_14->quirk && VAR_14->quirk->post)
  if (VAR_14->quirk->post(VAR_13))
   goto failed;

 VAR_13->dev_node = &VAR_14->node[0];
 FUNC_4(VAR_15);
 return 0;

cs_failed:
 FUNC_2(VAR_13, VAR_22, VAR_21);
failed:
 FUNC_7(VAR_13);
 FUNC_4(VAR_15);
 return -VAR_7;
}
