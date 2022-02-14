
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmad_priv_struct {int dummy; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int len_chanlist; int maxdata; int * range_table; int insn_read; int type; } ;
struct comedi_device {unsigned long iobase; struct comedi_subdevice* subdevices; int board_name; int minor; } ;
struct comedi_devconfig {unsigned long* options; } ;
struct TYPE_2__ {int n_ai_bits; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int VAR_5 ;
 int FUNC_2 (char*,...) ;
 int VAR_6 ;
 int FUNC_3 (unsigned long,int ,char*) ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_8, struct comedi_devconfig *VAR_9)
{
 int VAR_10;
 struct comedi_subdevice *VAR_11;
 unsigned long VAR_12;

 VAR_12 = VAR_9->options[0];
 FUNC_2("comedi%d: pcmad: 0x%04lx ", VAR_8->minor, VAR_12);
 if (!FUNC_3(VAR_12, VAR_3, "pcmad")) {
  FUNC_2("I/O port conflict\n");
  return -VAR_2;
 }
 VAR_8->iobase = VAR_12;

 VAR_10 = FUNC_1(VAR_8, 1);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_8, sizeof(struct pcmad_priv_struct));
 if (VAR_10 < 0)
  return VAR_10;

 VAR_8->board_name = VAR_7->name;

 VAR_11 = VAR_8->subdevices + 0;
 VAR_11->type = VAR_1;
 VAR_11->subdev_flags = VAR_4 | VAR_0;
 VAR_11->n_chan = 16;
 VAR_11->len_chanlist = 1;
 VAR_11->insn_read = VAR_5;
 VAR_11->maxdata = (1 << VAR_7->n_ai_bits) - 1;
 VAR_11->range_table = &VAR_6;

 return 0;
}
