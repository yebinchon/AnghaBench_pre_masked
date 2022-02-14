
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {int subdev_flags; int n_chan; int len_chanlist; int maxdata; int cancel; int insn_read; int do_cmdtest; int do_cmd; int * range_table; int type; } ;
struct comedi_device {unsigned long iobase; unsigned int irq; struct comedi_subdevice* read_subdev; struct comedi_subdevice* subdevices; int board_name; scalar_t__ board_ptr; int minor; } ;
struct comedi_devconfig {unsigned long* options; } ;
struct a2150_private {int dummy; } ;
struct TYPE_6__ {int irq_dma_bits; unsigned int dma; int config_bits; int * dma_buffer; } ;
struct TYPE_5__ {int driver_name; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (unsigned int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_2 (struct comedi_device*) ;
 scalar_t__ FUNC_3 (struct comedi_device*,int) ;
 scalar_t__ FUNC_4 (struct comedi_device*,int) ;
 TYPE_3__* VAR_30 ;
 int FUNC_5 (unsigned int) ;
 TYPE_2__ VAR_31 ;
 int FUNC_6 (scalar_t__) ;
 int * FUNC_7 (int ,int) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (int,scalar_t__) ;
 int FUNC_10 (char*,...) ;
 int VAR_32 ;
 scalar_t__ FUNC_11 (unsigned int,int ) ;
 scalar_t__ FUNC_12 (unsigned int,int ,int ,int ,struct comedi_device*) ;
 int FUNC_13 (unsigned long,int ,int ) ;
 int FUNC_14 (unsigned int,int ) ;
 TYPE_1__* VAR_33 ;
 int FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct comedi_device *VAR_34, struct comedi_devconfig *VAR_35)
{
 struct comedi_subdevice *VAR_36;
 unsigned long VAR_37 = VAR_35->options[0];
 unsigned int VAR_38 = VAR_35->options[1];
 unsigned int VAR_39 = VAR_35->options[2];
 static const int VAR_40 = 2000;
 int VAR_41;

 FUNC_10("comedi%d: %s: io 0x%lx", VAR_34->minor, VAR_31,
        VAR_37);
 if (VAR_38) {
  FUNC_10(", irq %u", VAR_38);
 } else {
  FUNC_10(", no irq");
 }
 if (VAR_39) {
  FUNC_10(", dma %u", VAR_39);
 } else {
  FUNC_10(", no dma");
 }
 FUNC_10("\n");


 if (FUNC_3(VAR_34, sizeof(struct a2150_private)) < 0)
  return -VAR_12;

 if (VAR_37 == 0) {
  FUNC_10(" io base address required\n");
  return -VAR_8;
 }


 if (!FUNC_13(VAR_37, VAR_1, VAR_31)) {
  FUNC_10(" I/O port conflict\n");
  return -VAR_9;
 }
 VAR_34->iobase = VAR_37;


 if (VAR_38) {

  if (VAR_38 < 3 || VAR_38 == 8 || VAR_38 == 13 || VAR_38 > 15) {
   FUNC_10(" invalid irq line %u\n", VAR_38);
   return -VAR_8;
  }
  if (FUNC_12(VAR_38, VAR_29, 0,
    VAR_31, VAR_34)) {
   FUNC_10("unable to allocate irq %u\n", VAR_38);
   return -VAR_8;
  }
  VAR_30->irq_dma_bits |= FUNC_1(VAR_38);
  VAR_34->irq = VAR_38;
 }

 if (VAR_39) {
  if (VAR_39 == 4 || VAR_39 > 7) {
   FUNC_10(" invalid dma channel %u\n", VAR_39);
   return -VAR_8;
  }
  if (FUNC_11(VAR_39, VAR_31)) {
   FUNC_10(" failed to allocate dma channel %u\n", VAR_39);
   return -VAR_8;
  }
  VAR_30->dma = VAR_39;
  VAR_30->dma_buffer =
      FUNC_7(VAR_0, VAR_15 | VAR_14);
  if (VAR_30->dma_buffer == ((void*)0))
   return -VAR_12;

  FUNC_5(VAR_39);
  FUNC_14(VAR_39, VAR_6);

  VAR_30->irq_dma_bits |= FUNC_0(VAR_39);
 }

 VAR_34->board_ptr = VAR_27 + FUNC_2(VAR_34);
 VAR_34->board_name = VAR_33->name;

 if (FUNC_4(VAR_34, 1) < 0)
  return -VAR_12;


 VAR_36 = VAR_34->subdevices + 0;
 VAR_34->read_subdev = VAR_36;
 VAR_36->type = VAR_3;
 VAR_36->subdev_flags = VAR_22 | VAR_20 | VAR_21 | VAR_19;
 VAR_36->n_chan = 4;
 VAR_36->len_chanlist = 4;
 VAR_36->maxdata = 0xffff;
 VAR_36->range_table = &VAR_32;
 VAR_36->do_cmd = VAR_24;
 VAR_36->do_cmdtest = VAR_25;
 VAR_36->insn_read = VAR_26;
 VAR_36->cancel = VAR_28;



 FUNC_8(VAR_16, VAR_34->iobase + VAR_17);


 FUNC_8(VAR_30->irq_dma_bits, VAR_34->iobase + VAR_18);


 FUNC_9(VAR_7 | VAR_2, VAR_34->iobase + VAR_4);
 FUNC_9(VAR_7, VAR_34->iobase + VAR_4);

 VAR_30->config_bits = 0;
 FUNC_8(VAR_30->config_bits, VAR_34->iobase + VAR_4);

 for (VAR_41 = 0; VAR_41 < VAR_40; VAR_41++) {
  if ((VAR_5 & FUNC_6(VAR_34->iobase + VAR_23)) == 0)
   break;
  FUNC_15(1000);
 }
 if (VAR_41 == VAR_40) {
  FUNC_10
      (" timed out waiting for offset calibration to complete\n");
  return -VAR_13;
 }
 VAR_30->config_bits |= VAR_10 | VAR_11;
 FUNC_8(VAR_30->config_bits, VAR_34->iobase + VAR_4);

 return 0;
}
