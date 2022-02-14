
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_16__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int u_short ;
struct TYPE_28__ {int TupleDataMax; void* Attributes; int DesiredTuple; scalar_t__ TupleOffset; int * TupleData; } ;
typedef TYPE_7__ tuple_t ;
struct TYPE_20__ {int ConfigIndex; int Present; int ConfigBase; } ;
struct TYPE_30__ {int IRQInfo1; int IRQInfo2; } ;
struct TYPE_19__ {int NumPorts1; int IOAddrLines; int BasePort1; scalar_t__ NumPorts2; int Attributes1; } ;
struct pcmcia_device {int * dev_node; TYPE_11__ conf; TYPE_9__ irq; TYPE_10__ io; } ;
struct TYPE_26__ {int IRQInfo1; int IRQInfo2; } ;
struct TYPE_25__ {int flags; int nwin; TYPE_3__* win; } ;
struct TYPE_23__ {int flags; int nwin; } ;
struct TYPE_27__ {int index; int flags; int subtuples; TYPE_5__ irq; TYPE_4__ io; TYPE_2__ mem; } ;
struct TYPE_22__ {int * rmask; int base; } ;
struct TYPE_29__ {TYPE_6__ cftable_entry; TYPE_1__ config; } ;
typedef TYPE_8__ cisparse_t ;
typedef int cisdata_t ;
struct TYPE_24__ {int base; int len; } ;
struct TYPE_21__ {int (* multi ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,struct pcmcia_device*) ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct pcmcia_device*,TYPE_7__*,TYPE_8__*) ;
 TYPE_16__* VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pcmcia_device*,TYPE_7__*) ;
 int FUNC_4 (struct pcmcia_device*,TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*,TYPE_8__*) ;
 int FUNC_6 (struct pcmcia_device*,TYPE_11__*) ;
 int FUNC_7 (struct pcmcia_device*,TYPE_10__*) ;
 int FUNC_8 (struct pcmcia_device*,TYPE_9__*) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct pcmcia_device *VAR_10)
{
 tuple_t VAR_11;
 u_short VAR_12[128];
 cisparse_t VAR_13;
 int VAR_14 = 0, VAR_15 = 0;
 int VAR_16;

 FUNC_0("mio_cs_config(link=%p)\n", VAR_10);

 VAR_11.TupleData = (cisdata_t *) VAR_12;
 VAR_11.TupleOffset = 0;
 VAR_11.TupleDataMax = 255;
 VAR_11.Attributes = 0;

 VAR_11.DesiredTuple = VAR_1;
 VAR_16 = FUNC_3(VAR_10, &VAR_11);
 VAR_16 = FUNC_4(VAR_10, &VAR_11);
 VAR_16 = FUNC_5(&VAR_11, &VAR_13);
 VAR_10->conf.ConfigBase = VAR_13.config.base;
 VAR_10->conf.Present = VAR_13.config.rmask[0];







 VAR_11.DesiredTuple = VAR_4;
 VAR_11.Attributes = VAR_6;
 if ((FUNC_3(VAR_10, &VAR_11) == 0) &&
     (FUNC_4(VAR_10, &VAR_11) == 0)) {
  VAR_14 = FUNC_2(VAR_12[0]);
  VAR_15 = FUNC_2(VAR_12[1]);
 }


 VAR_11.DesiredTuple = VAR_0;
 VAR_11.Attributes = 0;
 VAR_16 = FUNC_3(VAR_10, &VAR_11);
 VAR_16 = FUNC_4(VAR_10, &VAR_11);
 VAR_16 = FUNC_5(&VAR_11, &VAR_13);
 VAR_10->io.NumPorts1 = VAR_13.cftable_entry.io.win[0].len;
 VAR_10->io.IOAddrLines =
     VAR_13.cftable_entry.io.flags & VAR_2;
 VAR_10->io.NumPorts2 = 0;

 {
  int VAR_17;
  for (VAR_17 = 0x000; VAR_17 < 0x400; VAR_17 += 0x20) {
   VAR_10->io.BasePort1 = VAR_17;
   VAR_16 = FUNC_7(VAR_10, &VAR_10->io);

   if (!VAR_16)
    break;
  }
 }

 VAR_10->irq.IRQInfo1 = VAR_13.cftable_entry.irq.IRQInfo1;
 VAR_10->irq.IRQInfo2 = VAR_13.cftable_entry.irq.IRQInfo2;
 VAR_16 = FUNC_8(VAR_10, &VAR_10->irq);
 if (VAR_16) {
  FUNC_9("pcmcia_request_irq() returned error: %i\n", VAR_16);
 }


 VAR_10->conf.ConfigIndex = 1;

 VAR_16 = FUNC_6(VAR_10, &VAR_10->conf);


 VAR_10->dev_node = &VAR_8;
}
