
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct nidio96_private {int dummy; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int len_chanlist; int async_dma_dir; int * buf_change; int * cancel; int * do_cmdtest; int * do_cmd; int * insn_bits; int * insn_config; int * range_table; int type; } ;
struct comedi_device {unsigned int irq; struct comedi_subdevice* read_subdev; struct comedi_subdevice* subdevices; int board_name; int minor; } ;
struct comedi_devconfig {int * options; } ;
struct TYPE_10__ {TYPE_3__* mite; int * di_mite_ring; int mite_channel_lock; } ;
struct TYPE_9__ {scalar_t__ daq_io_addr; TYPE_1__* pcidev; } ;
struct TYPE_8__ {int n_8255; int is_diodaq; scalar_t__ uses_firmware; int name; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct comedi_device*,int) ;
 int FUNC_5 (struct comedi_device*,int) ;
 int FUNC_6 (struct comedi_device*,int *) ;
 TYPE_6__* VAR_11 ;
 int * FUNC_7 (TYPE_3__*) ;
 unsigned int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_10 (struct comedi_device*,int ,int ) ;
 int VAR_19 ;
 int FUNC_11 (struct comedi_device*,int *) ;
 int FUNC_12 (char*,...) ;
 int VAR_20 ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (unsigned int,int ,int ,char*,struct comedi_device*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct comedi_device*,struct comedi_subdevice*,int ,unsigned long) ;
 TYPE_2__* VAR_21 ;
 int FUNC_17 (int,scalar_t__) ;
 int FUNC_18 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_19(struct comedi_device *VAR_22, struct comedi_devconfig *VAR_23)
{
 struct comedi_subdevice *VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 unsigned int VAR_28;

 FUNC_12("comedi%d: nidio:", VAR_22->minor);

 if ((VAR_26 = FUNC_4(VAR_22, sizeof(struct nidio96_private))) < 0)
  return VAR_26;
 FUNC_15(&VAR_11->mite_channel_lock);

 VAR_26 = FUNC_10(VAR_22, VAR_23->options[0], VAR_23->options[1]);
 if (VAR_26 < 0)
  return VAR_26;

 VAR_26 = FUNC_9(VAR_11->mite);
 if (VAR_26 < 0) {
  FUNC_12("error setting up mite\n");
  return VAR_26;
 }
 FUNC_6(VAR_22, &VAR_11->mite->pcidev->dev);
 VAR_11->di_mite_ring = FUNC_7(VAR_11->mite);
 if (VAR_11->di_mite_ring == ((void*)0))
  return -VAR_3;

 VAR_22->board_name = VAR_21->name;
 VAR_28 = FUNC_8(VAR_11->mite);
 FUNC_12(" %s", VAR_22->board_name);
 if (VAR_21->uses_firmware) {
  VAR_26 = FUNC_11(VAR_22, VAR_23->options);
  if (VAR_26 < 0)
   return VAR_26;
 }
 if (!VAR_21->is_diodaq) {
  VAR_27 = VAR_21->n_8255;
 } else {
  VAR_27 = 1;
 }
 if ((VAR_26 = FUNC_5(VAR_22, VAR_27)) < 0)
  return VAR_26;

 if (!VAR_21->is_diodaq) {
  for (VAR_25 = 0; VAR_25 < VAR_21->n_8255; VAR_25++) {
   FUNC_16(VAR_22, VAR_22->subdevices + VAR_25,
      VAR_18,
      (unsigned long)(VAR_11->mite->
        daq_io_addr +
        FUNC_0(VAR_25)));
  }
 } else {

  FUNC_12(" rev=%d",
         FUNC_13(VAR_11->mite->daq_io_addr + VAR_1));

  VAR_24 = VAR_22->subdevices + 0;

  VAR_22->read_subdev = VAR_24;
  VAR_24->type = VAR_0;
  VAR_24->subdev_flags =
      VAR_9 | VAR_10 | VAR_7 | VAR_8 |
      VAR_6;
  VAR_24->n_chan = 32;
  VAR_24->range_table = &VAR_20;
  VAR_24->maxdata = 1;
  VAR_24->insn_config = &VAR_17;
  VAR_24->insn_bits = &VAR_16;
  VAR_24->do_cmd = &VAR_14;
  VAR_24->do_cmdtest = &VAR_15;
  VAR_24->cancel = &VAR_12;
  VAR_24->len_chanlist = 32;
  VAR_24->buf_change = &VAR_13;
  VAR_24->async_dma_dir = VAR_2;

  FUNC_18(0, VAR_11->mite->daq_io_addr + FUNC_1(0));
  FUNC_18(0, VAR_11->mite->daq_io_addr + FUNC_2(0));
  FUNC_18(0, VAR_11->mite->daq_io_addr + FUNC_3(0));


  FUNC_17(0x00,
         VAR_11->mite->daq_io_addr +
         VAR_5);

  VAR_26 = FUNC_14(VAR_28, VAR_19, VAR_4,
      "ni_pcidio", VAR_22);
  if (VAR_26 < 0) {
   FUNC_12(" irq not available");
  }
  VAR_22->irq = VAR_28;
 }

 FUNC_12("\n");

 return 0;
}
