
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {scalar_t__ type; int n_chan; int maxdata; int subdev_flags; int insn_bits; int insn_read; int insn_write; int range_table; } ;
struct comedi_device {unsigned long iobase; struct comedi_subdevice* subdevices; int board_name; int minor; } ;
struct comedi_devconfig {unsigned long* options; } ;
struct TYPE_2__ {unsigned int iosize; int n_chan; scalar_t__ type; int n_bits; int insnbits; int rinsn; int winsn; int range; int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct comedi_device*,int) ;
 scalar_t__ FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (unsigned long,unsigned int,char*) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_7, struct comedi_devconfig *VAR_8)
{
 struct comedi_subdevice *VAR_9;
 unsigned long VAR_10;
 unsigned int VAR_11;

 VAR_10 = VAR_8->options[0];
 FUNC_2("comedi%d: poc: using %s iobase 0x%lx\n", VAR_7->minor,
        VAR_6->name, VAR_10);

 VAR_7->board_name = VAR_6->name;

 if (VAR_10 == 0) {
  FUNC_2("io base address required\n");
  return -VAR_2;
 }

 VAR_11 = VAR_6->iosize;

 if (!FUNC_3(VAR_10, VAR_11, "dac02")) {
  FUNC_2
      ("I/O port conflict: failed to allocate ports 0x%lx to 0x%lx\n",
       VAR_10, VAR_10 + VAR_11 - 1);
  return -VAR_3;
 }
 VAR_7->iobase = VAR_10;

 if (FUNC_1(VAR_7, 1) < 0)
  return -VAR_4;
 if (FUNC_0(VAR_7, sizeof(unsigned int) * VAR_6->n_chan) < 0)
  return -VAR_4;


 VAR_9 = VAR_7->subdevices + 0;
 VAR_9->type = VAR_6->type;
 VAR_9->n_chan = VAR_6->n_chan;
 VAR_9->maxdata = (1 << VAR_6->n_bits) - 1;
 VAR_9->range_table = VAR_6->range;
 VAR_9->insn_write = VAR_6->winsn;
 VAR_9->insn_read = VAR_6->rinsn;
 VAR_9->insn_bits = VAR_6->insnbits;
 if (VAR_9->type == VAR_0 || VAR_9->type == VAR_1) {
  VAR_9->subdev_flags = VAR_5;
 }

 return 0;
}
