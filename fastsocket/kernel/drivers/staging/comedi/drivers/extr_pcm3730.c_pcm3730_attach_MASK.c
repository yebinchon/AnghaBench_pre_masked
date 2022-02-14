
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int maxdata; int n_chan; void* private; int * range_table; void* insn_bits; void* subdev_flags; void* type; } ;
struct comedi_device {unsigned long iobase; char* board_name; struct comedi_subdevice* subdevices; scalar_t__ irq; int minor; } ;
struct comedi_devconfig {unsigned long* options; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 scalar_t__ FUNC_0 (struct comedi_device*,int) ;
 void* VAR_13 ;
 void* VAR_14 ;
 int FUNC_1 (char*,...) ;
 int VAR_15 ;
 int FUNC_2 (unsigned long,int ,char*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_16,
     struct comedi_devconfig *VAR_17)
{
 struct comedi_subdevice *VAR_18;
 unsigned long VAR_19;

 VAR_19 = VAR_17->options[0];
 FUNC_1("comedi%d: pcm3730: 0x%04lx ", VAR_16->minor, VAR_19);
 if (!FUNC_2(VAR_19, VAR_10, "pcm3730")) {
  FUNC_1("I/O port conflict\n");
  return -VAR_2;
 }
 VAR_16->iobase = VAR_19;
 VAR_16->board_name = "pcm3730";
 VAR_16->iobase = VAR_16->iobase;
 VAR_16->irq = 0;

 if (FUNC_0(VAR_16, 6) < 0)
  return -VAR_3;

 VAR_18 = VAR_16->subdevices + 0;
 VAR_18->type = VAR_1;
 VAR_18->subdev_flags = VAR_12;
 VAR_18->maxdata = 1;
 VAR_18->n_chan = 8;
 VAR_18->insn_bits = VAR_14;
 VAR_18->range_table = &VAR_15;
 VAR_18->private = (void *)VAR_7;

 VAR_18 = VAR_16->subdevices + 1;
 VAR_18->type = VAR_1;
 VAR_18->subdev_flags = VAR_12;
 VAR_18->maxdata = 1;
 VAR_18->n_chan = 8;
 VAR_18->insn_bits = VAR_14;
 VAR_18->range_table = &VAR_15;
 VAR_18->private = (void *)VAR_8;

 VAR_18 = VAR_16->subdevices + 2;
 VAR_18->type = VAR_1;
 VAR_18->subdev_flags = VAR_12;
 VAR_18->maxdata = 1;
 VAR_18->n_chan = 8;
 VAR_18->insn_bits = VAR_14;
 VAR_18->range_table = &VAR_15;
 VAR_18->private = (void *)VAR_9;

 VAR_18 = VAR_16->subdevices + 3;
 VAR_18->type = VAR_0;
 VAR_18->subdev_flags = VAR_11;
 VAR_18->maxdata = 1;
 VAR_18->n_chan = 8;
 VAR_18->insn_bits = VAR_13;
 VAR_18->range_table = &VAR_15;
 VAR_18->private = (void *)VAR_4;

 VAR_18 = VAR_16->subdevices + 4;
 VAR_18->type = VAR_0;
 VAR_18->subdev_flags = VAR_11;
 VAR_18->maxdata = 1;
 VAR_18->n_chan = 8;
 VAR_18->insn_bits = VAR_13;
 VAR_18->range_table = &VAR_15;
 VAR_18->private = (void *)VAR_5;

 VAR_18 = VAR_16->subdevices + 5;
 VAR_18->type = VAR_0;
 VAR_18->subdev_flags = VAR_11;
 VAR_18->maxdata = 1;
 VAR_18->n_chan = 8;
 VAR_18->insn_bits = VAR_13;
 VAR_18->range_table = &VAR_15;
 VAR_18->private = (void *)VAR_6;

 FUNC_1("\n");

 return 0;
}
