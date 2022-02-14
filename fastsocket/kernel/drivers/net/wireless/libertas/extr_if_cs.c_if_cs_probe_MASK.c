
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_16__ {int TupleDataMax; int DesiredTuple; scalar_t__ TupleOffset; int * TupleData; scalar_t__ Attributes; } ;
typedef TYPE_3__ tuple_t ;
struct TYPE_20__ {int IRQInfo1; int AssignedIRQ; int * Handler; int Attributes; } ;
struct TYPE_21__ {scalar_t__ NumPorts1; scalar_t__ BasePort1; int Attributes1; } ;
struct TYPE_22__ {int Attributes; int ConfigIndex; int IntType; } ;
struct pcmcia_device {TYPE_7__ irq; int dev; TYPE_8__ io; TYPE_9__ conf; struct if_cs_card* priv; } ;
struct lbs_private {int fw_ready; int hw_host_to_card; struct if_cs_card* card; } ;
struct if_cs_card {int align_regs; int iobase; struct lbs_private* priv; struct pcmcia_device* p_dev; } ;
struct TYPE_17__ {int nwin; TYPE_2__* win; } ;
typedef TYPE_4__ cistpl_io_t ;
struct TYPE_14__ {scalar_t__ IRQInfo1; } ;
struct TYPE_18__ {TYPE_4__ io; TYPE_1__ irq; int index; } ;
typedef TYPE_5__ cistpl_cftable_entry_t ;
struct TYPE_19__ {TYPE_5__ cftable_entry; } ;
typedef TYPE_6__ cisparse_t ;
typedef int buf ;
struct TYPE_15__ {scalar_t__ len; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct if_cs_card*) ;
 int VAR_20 ;
 scalar_t__ FUNC_1 (struct pcmcia_device*) ;
 scalar_t__ FUNC_2 (struct pcmcia_device*) ;
 scalar_t__ FUNC_3 (struct pcmcia_device*) ;
 int VAR_21 ;
 int FUNC_4 (struct if_cs_card*) ;
 int FUNC_5 (struct if_cs_card*) ;
 unsigned int FUNC_6 (struct if_cs_card*,int ) ;
 int FUNC_7 (struct if_cs_card*,int ,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (int ) ;
 struct if_cs_card* FUNC_10 (int,int ) ;
 struct lbs_private* FUNC_11 (struct if_cs_card*,int *) ;
 int FUNC_12 (char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (struct lbs_private*) ;
 scalar_t__ FUNC_17 (struct lbs_private*) ;
 int FUNC_18 (struct pcmcia_device*) ;
 int FUNC_19 (struct pcmcia_device*,TYPE_3__*) ;
 int FUNC_20 (struct pcmcia_device*,TYPE_3__*) ;
 int FUNC_21 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_22 (struct pcmcia_device*,TYPE_9__*) ;
 int FUNC_23 (struct pcmcia_device*,TYPE_8__*) ;
 int FUNC_24 (struct pcmcia_device*,TYPE_7__*) ;
 int FUNC_25 (int ,int ,int ,int ,struct if_cs_card*) ;

__attribute__((used)) static int FUNC_26(struct pcmcia_device *VAR_22)
{
 int VAR_23 = -VAR_5;
 unsigned int VAR_24;
 struct lbs_private *VAR_25;
 struct if_cs_card *VAR_26;

 tuple_t VAR_27;
 cisparse_t VAR_28;
 cistpl_cftable_entry_t *VAR_29 = &VAR_28.cftable_entry;
 cistpl_io_t *VAR_30 = &VAR_29->io;
 u_char VAR_31[64];

 FUNC_13(VAR_19);

 VAR_26 = FUNC_10(sizeof(struct if_cs_card), VAR_6);
 if (!VAR_26) {
  FUNC_15("error in kzalloc\n");
  goto out;
 }
 VAR_26->p_dev = VAR_22;
 VAR_22->priv = VAR_26;

 VAR_22->irq.Attributes = VAR_18;
 VAR_22->irq.Handler = ((void*)0);
 VAR_22->irq.IRQInfo1 = VAR_16 | VAR_17;

 VAR_22->conf.Attributes = 0;
 VAR_22->conf.IntType = VAR_13;

 VAR_27.Attributes = 0;
 VAR_27.TupleData = VAR_31;
 VAR_27.TupleDataMax = sizeof(VAR_31);
 VAR_27.TupleOffset = 0;

 VAR_27.DesiredTuple = VAR_0;
 if ((VAR_23 = FUNC_19(VAR_22, &VAR_27)) != 0 ||
     (VAR_23 = FUNC_20(VAR_22, &VAR_27)) != 0 ||
     (VAR_23 = FUNC_21(&VAR_27, &VAR_28)) != 0)
 {
  FUNC_15("error in pcmcia_get_first_tuple etc\n");
  goto out1;
 }

 VAR_22->conf.ConfigIndex = VAR_29->index;


 if (VAR_29->irq.IRQInfo1) {
  VAR_22->conf.Attributes |= VAR_1;
 }


 if (VAR_29->io.nwin != 1) {
  FUNC_15("wrong CIS (check number of IO windows)\n");
  VAR_23 = -VAR_4;
  goto out1;
 }
 VAR_22->io.Attributes1 = VAR_14;
 VAR_22->io.BasePort1 = VAR_30->win[0].base;
 VAR_22->io.NumPorts1 = VAR_30->win[0].len;


 VAR_23 = FUNC_23(VAR_22, &VAR_22->io);
 if (VAR_23) {
  FUNC_15("error in pcmcia_request_io\n");
  goto out1;
 }






 if (VAR_22->conf.Attributes & VAR_1) {
  VAR_23 = FUNC_24(VAR_22, &VAR_22->irq);
  if (VAR_23) {
   FUNC_15("error in pcmcia_request_irq\n");
   goto out1;
  }
 }


 VAR_26->iobase = FUNC_8(VAR_22->io.BasePort1, VAR_22->io.NumPorts1);
 if (!VAR_26->iobase) {
  FUNC_15("error in ioport_map\n");
  VAR_23 = -VAR_3;
  goto out1;
 }






 VAR_23 = FUNC_22(VAR_22, &VAR_22->conf);
 if (VAR_23) {
  FUNC_15("error in pcmcia_request_configuration\n");
  goto out2;
 }


 FUNC_12("irq %d, io 0x%04x-0x%04x\n",
        VAR_22->irq.AssignedIRQ, VAR_22->io.BasePort1,
        VAR_22->io.BasePort1 + VAR_22->io.NumPorts1 - 1);





 VAR_26->align_regs = 0;


 VAR_24 = FUNC_6(VAR_26, VAR_12);
 if (FUNC_1(VAR_22)) {
  VAR_26->align_regs = 1;
  if (VAR_24 < VAR_9) {
   FUNC_15("old chips like 8305 rev B3 "
    "aren't supported\n");
   VAR_23 = -VAR_4;
   goto out2;
  }
 }

 if (FUNC_2(VAR_22) && VAR_24 < VAR_10) {
  FUNC_15("old chips like 8381 rev B3 aren't supported\n");
  VAR_23 = -VAR_4;
  goto out2;
 }

 if (FUNC_3(VAR_22) && VAR_24 < VAR_11) {
  FUNC_15("old chips like 8385 rev B1 aren't supported\n");
  VAR_23 = -VAR_4;
  goto out2;
 }


 VAR_23 = FUNC_4(VAR_26);
 if (VAR_23 == 0 && !FUNC_1(VAR_22))
  VAR_23 = FUNC_5(VAR_26);
 if (VAR_23)
  goto out2;


 VAR_25 = FUNC_11(VAR_26, &VAR_22->dev);
 if (!VAR_25) {
  VAR_23 = -VAR_5;
  goto out2;
 }


 VAR_26->priv = VAR_25;
 VAR_25->card = VAR_26;
 VAR_25->hw_host_to_card = VAR_20;
 VAR_25->fw_ready = 1;


 VAR_23 = FUNC_25(VAR_22->irq.AssignedIRQ, VAR_21,
  VAR_15, VAR_2, VAR_26);
 if (VAR_23) {
  FUNC_15("error in request_irq\n");
  goto out3;
 }



 FUNC_7(VAR_26, VAR_8, VAR_7);
 FUNC_0(VAR_26);


 if (FUNC_17(VAR_25) != 0) {
  FUNC_15("could not activate card\n");
  goto out3;
 }

 VAR_23 = 0;
 goto out;

out3:
 FUNC_16(VAR_25);
out2:
 FUNC_9(VAR_26->iobase);
out1:
 FUNC_18(VAR_22);
out:
 FUNC_14(VAR_19, "ret %d", VAR_23);
 return VAR_23;
}
