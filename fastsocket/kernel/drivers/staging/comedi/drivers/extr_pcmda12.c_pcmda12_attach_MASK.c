
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcmda12_private {int dummy; } ;
struct comedi_subdevice {int maxdata; int subdev_flags; int * insn_read; int * insn_write; int n_chan; int type; int * range_table; int * private; } ;
struct comedi_device {unsigned long iobase; struct comedi_subdevice* subdevices; int board_name; int minor; } ;
struct comedi_devconfig {unsigned long* options; } ;
struct TYPE_6__ {long simultaneous_xfer_mode; } ;
struct TYPE_5__ {int driver_name; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct comedi_device*,int) ;
 scalar_t__ FUNC_1 (struct comedi_device*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__* VAR_10 ;
 TYPE_2__ VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (unsigned long,int ,int ) ;
 TYPE_1__* VAR_13 ;
 int FUNC_4 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_14,
     struct comedi_devconfig *VAR_15)
{
 struct comedi_subdevice *VAR_16;
 unsigned long VAR_17;

 VAR_17 = VAR_15->options[0];
 FUNC_2("comedi%d: %s: io: %lx %s ", VAR_14->minor, VAR_11.driver_name,
        VAR_17, VAR_15->options[1] ? "simultaneous xfer mode enabled" : "");

 if (!FUNC_3(VAR_17, VAR_5, VAR_11.driver_name)) {
  FUNC_2("I/O port conflict\n");
  return -VAR_3;
 }
 VAR_14->iobase = VAR_17;





 VAR_14->board_name = VAR_13->name;





 if (FUNC_0(VAR_14, sizeof(struct pcmda12_private)) < 0) {
  FUNC_2("cannot allocate private data structure\n");
  return -VAR_4;
 }

 VAR_10->simultaneous_xfer_mode = VAR_15->options[1];
 if (FUNC_1(VAR_14, 1) < 0) {
  FUNC_2("cannot allocate subdevice data structures\n");
  return -VAR_4;
 }

 VAR_16 = VAR_14->subdevices;
 VAR_16->private = ((void*)0);
 VAR_16->maxdata = (0x1 << VAR_0) - 1;
 VAR_16->range_table = &VAR_12;
 VAR_16->type = VAR_2;
 VAR_16->subdev_flags = VAR_6 | VAR_7;
 VAR_16->n_chan = VAR_1;
 VAR_16->insn_write = &VAR_9;
 VAR_16->insn_read = &VAR_8;

 FUNC_4(VAR_14);

 FUNC_2("attached\n");

 return 1;
}
