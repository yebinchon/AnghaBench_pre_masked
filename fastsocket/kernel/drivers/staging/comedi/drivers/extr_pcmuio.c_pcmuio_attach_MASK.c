
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pcmuio_subdev_private {int dummy; } ;
struct pcmuio_private {int dummy; } ;
struct comedi_subdevice {int maxdata; int subdev_flags; int n_chan; int len_chanlist; int do_cmdtest; int do_cmd; int cancel; int insn_config; int insn_bits; int type; int * range_table; scalar_t__ private; } ;
struct comedi_device {unsigned long iobase; unsigned int irq; struct comedi_subdevice* read_subdev; struct comedi_subdevice* subdevices; scalar_t__ n_subdevices; int board_name; int minor; } ;
struct comedi_devconfig {unsigned long* options; } ;
struct TYPE_12__ {TYPE_2__* asics; scalar_t__ sprivs; } ;
struct TYPE_11__ {int driver_name; } ;
struct TYPE_7__ {int asic; int first_chan; int asic_chan; int num_asic_chans; int spinlock; scalar_t__ stop_count; scalar_t__ active; } ;
struct TYPE_10__ {int* iobases; TYPE_1__ intr; } ;
struct TYPE_9__ {int num_asics; int name; } ;
struct TYPE_8__ {int num; int iobase; unsigned int irq; int spinlock; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 scalar_t__ FUNC_1 (struct comedi_device*,int) ;
 scalar_t__ FUNC_2 (struct comedi_device*,int) ;
 TYPE_6__* VAR_16 ;
 TYPE_5__ VAR_17 ;
 int FUNC_3 (unsigned int,struct comedi_device*) ;
 int FUNC_4 (struct comedi_device*) ;
 int VAR_18 ;
 scalar_t__ FUNC_5 (int,int,int ) ;
 int FUNC_6 (int,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_7 (char*,...) ;
 int VAR_24 ;
 scalar_t__ FUNC_8 (unsigned int,int ,int ,int ,struct comedi_device*) ;
 int FUNC_9 (unsigned long,int,int ) ;
 int FUNC_10 (int *) ;
 TYPE_4__* VAR_25 ;
 TYPE_3__* VAR_26 ;

__attribute__((used)) static int FUNC_11(struct comedi_device *VAR_27, struct comedi_devconfig *VAR_28)
{
 struct comedi_subdevice *VAR_29;
 int VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35 = 0;
 unsigned long VAR_36;
 unsigned int VAR_37[VAR_9];

 VAR_36 = VAR_28->options[0];
 VAR_37[0] = VAR_28->options[1];
 VAR_37[1] = VAR_28->options[2];

 FUNC_7("comedi%d: %s: io: %lx ", VAR_27->minor, VAR_17.driver_name,
        VAR_36);

 VAR_27->iobase = VAR_36;

 if (!VAR_36 || !FUNC_9(VAR_36,
           VAR_26->num_asics * VAR_0,
           VAR_17.driver_name)) {
  FUNC_7("I/O port conflict\n");
  return -VAR_4;
 }





 VAR_27->board_name = VAR_26->name;





 if (FUNC_1(VAR_27, sizeof(struct pcmuio_private)) < 0) {
  FUNC_7("cannot allocate private data structure\n");
  return -VAR_5;
 }

 for (VAR_34 = 0; VAR_34 < VAR_9; ++VAR_34) {
  VAR_16->asics[VAR_34].num = VAR_34;
  VAR_16->asics[VAR_34].iobase = VAR_27->iobase + VAR_34 * VAR_0;
  VAR_16->asics[VAR_34].irq = 0;


  FUNC_10(&VAR_16->asics[VAR_34].spinlock);
 }

 VAR_31 = VAR_1 * VAR_26->num_asics;
 VAR_32 = FUNC_0(VAR_31);
 VAR_16->sprivs =
     FUNC_5(VAR_32, sizeof(struct pcmuio_subdev_private),
      VAR_6);
 if (!VAR_16->sprivs) {
  FUNC_7("cannot allocate subdevice private data structures\n");
  return -VAR_5;
 }







 if (FUNC_2(VAR_27, VAR_32) < 0) {
  FUNC_7("cannot allocate subdevice data structures\n");
  return -VAR_5;
 }

 VAR_33 = 0;
 VAR_34 = 0;
 for (VAR_30 = 0; VAR_30 < (int)VAR_27->n_subdevices; ++VAR_30) {
  int VAR_38;

  VAR_29 = VAR_27->subdevices + VAR_30;
  VAR_29->private = VAR_16->sprivs + VAR_30;
  VAR_29->maxdata = 1;
  VAR_29->range_table = &VAR_24;
  VAR_29->subdev_flags = VAR_14 | VAR_15;
  VAR_29->type = VAR_3;
  VAR_29->insn_bits = VAR_22;
  VAR_29->insn_config = VAR_23;
  VAR_29->n_chan = FUNC_6(VAR_31, VAR_10);
  VAR_25->intr.asic = -1;
  VAR_25->intr.first_chan = -1;
  VAR_25->intr.asic_chan = -1;
  VAR_25->intr.num_asic_chans = -1;
  VAR_25->intr.active = 0;
  VAR_29->len_chanlist = 1;



  for (VAR_38 = 0; VAR_38 < VAR_12; ++VAR_38, ++VAR_33) {
   if (VAR_33 >= VAR_11) {
    VAR_33 = 0;
    ++VAR_34;
    VAR_35 = 0;
   }
   VAR_25->iobases[VAR_38] =
       VAR_16->asics[VAR_34].iobase + VAR_33;

   if (VAR_35 <
       VAR_2 * VAR_7
       && VAR_25->intr.asic < 0) {

    VAR_25->intr.asic = VAR_34;
    VAR_25->intr.active = 0;
    VAR_25->intr.stop_count = 0;
    VAR_25->intr.first_chan = VAR_38 * 8;
    VAR_25->intr.asic_chan = VAR_35;
    VAR_25->intr.num_asic_chans =
        VAR_29->n_chan - VAR_25->intr.first_chan;
    VAR_27->read_subdev = VAR_29;
    VAR_29->subdev_flags |= VAR_13;
    VAR_29->cancel = VAR_19;
    VAR_29->do_cmd = VAR_20;
    VAR_29->do_cmdtest = VAR_21;
    VAR_29->len_chanlist = VAR_25->intr.num_asic_chans;
   }
   VAR_35 += VAR_2;
  }
  FUNC_10(&VAR_25->intr.spinlock);

  VAR_31 -= VAR_29->n_chan;

  if (!VAR_31) {
   VAR_34 = 0;
   VAR_33 = 0;
  }

 }

 FUNC_4(VAR_27);

 for (VAR_34 = 0; VAR_37[0] && VAR_34 < VAR_9; ++VAR_34) {
  if (VAR_37[VAR_34]
      && FUNC_8(VAR_37[VAR_34], VAR_18,
       VAR_8, VAR_26->name, VAR_27)) {
   int VAR_39;

   for (VAR_39 = VAR_34 - 1; VAR_39 >= 0; --VAR_39) {
    FUNC_3(VAR_37[VAR_39], VAR_27);
    VAR_16->asics[VAR_39].irq = VAR_37[VAR_39] = 0;
   }
   VAR_37[VAR_34] = 0;
  }
  VAR_16->asics[VAR_34].irq = VAR_37[VAR_34];
 }

 VAR_27->irq = VAR_37[0];


 if (VAR_37[0]) {
  FUNC_7("irq: %u ", VAR_37[0]);
  if (VAR_37[1] && VAR_26->num_asics == 2)
   FUNC_7("second ASIC irq: %u ", VAR_37[1]);
 } else {
  FUNC_7("(IRQ mode disabled) ");
 }

 FUNC_7("attached\n");

 return 1;
}
