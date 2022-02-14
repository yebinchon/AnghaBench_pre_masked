
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int maxdata; int n_chan; void* private; int * range_table; void* insn_bits; void* subdev_flags; void* type; } ;
struct comedi_device {unsigned long iobase; struct comedi_subdevice* subdevices; scalar_t__ irq; int board_name; int minor; } ;
struct comedi_devconfig {unsigned long* options; } ;
struct TYPE_2__ {unsigned int io_range; int name; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ FUNC_0 (struct comedi_device*,int) ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_1 (char*,...) ;
 int VAR_10 ;
 int FUNC_2 (unsigned long,unsigned int,char*) ;
 TYPE_1__* VAR_11 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_12, struct comedi_devconfig *VAR_13)
{
 struct comedi_subdevice *VAR_14;
 unsigned long VAR_15;
 unsigned int VAR_16;

 VAR_15 = VAR_13->options[0];
 VAR_16 = VAR_11->io_range;
 FUNC_1("comedi%d: pcl730: board=%s 0x%04lx ", VAR_12->minor,
        VAR_11->name, VAR_15);
 if (!FUNC_2(VAR_15, VAR_16, "pcl730")) {
  FUNC_1("I/O port conflict\n");
  return -VAR_2;
 }
 VAR_12->board_name = VAR_11->name;
 VAR_12->iobase = VAR_15;
 VAR_12->irq = 0;

 if (FUNC_0(VAR_12, 4) < 0)
  return -VAR_3;

 VAR_14 = VAR_12->subdevices + 0;

 VAR_14->type = VAR_1;
 VAR_14->subdev_flags = VAR_7;
 VAR_14->maxdata = 1;
 VAR_14->n_chan = 16;
 VAR_14->insn_bits = VAR_9;
 VAR_14->range_table = &VAR_10;
 VAR_14->private = (void *)VAR_5;

 VAR_14 = VAR_12->subdevices + 1;

 VAR_14->type = VAR_0;
 VAR_14->subdev_flags = VAR_6;
 VAR_14->maxdata = 1;
 VAR_14->n_chan = 16;
 VAR_14->insn_bits = VAR_8;
 VAR_14->range_table = &VAR_10;
 VAR_14->private = (void *)VAR_5;

 VAR_14 = VAR_12->subdevices + 2;

 VAR_14->type = VAR_1;
 VAR_14->subdev_flags = VAR_7;
 VAR_14->maxdata = 1;
 VAR_14->n_chan = 16;
 VAR_14->insn_bits = VAR_9;
 VAR_14->range_table = &VAR_10;
 VAR_14->private = (void *)VAR_4;

 VAR_14 = VAR_12->subdevices + 3;

 VAR_14->type = VAR_0;
 VAR_14->subdev_flags = VAR_6;
 VAR_14->maxdata = 1;
 VAR_14->n_chan = 16;
 VAR_14->insn_bits = VAR_8;
 VAR_14->range_table = &VAR_10;
 VAR_14->private = (void *)VAR_4;

 FUNC_1("\n");

 return 0;
}
