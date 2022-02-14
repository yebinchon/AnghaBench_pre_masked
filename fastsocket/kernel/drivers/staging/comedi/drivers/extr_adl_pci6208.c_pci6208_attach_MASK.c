
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci6208_private {int dummy; } ;
struct comedi_subdevice {int maxdata; int insn_read; int insn_write; int * range_table; int n_chan; int subdev_flags; int type; } ;
struct comedi_device {unsigned long iobase; struct comedi_subdevice* subdevices; int board_name; int minor; } ;
struct comedi_devconfig {int * options; } ;
struct TYPE_4__ {int pci_dev; } ;
struct TYPE_3__ {int ao_chans; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,int) ;
 scalar_t__ FUNC_1 (struct comedi_device*,int) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct comedi_device*,int ,int ) ;
 int FUNC_3 (int ,unsigned long*,int ) ;
 int FUNC_4 (char*,...) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_8,
     struct comedi_devconfig *VAR_9)
{
 struct comedi_subdevice *VAR_10;
 int VAR_11;
 unsigned long VAR_12;

 FUNC_4("comedi%d: pci6208: ", VAR_8->minor);

 VAR_11 = FUNC_0(VAR_8, sizeof(struct pci6208_private));
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_2(VAR_8, VAR_9->options[0], VAR_9->options[1]);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_3(VAR_3->pci_dev, &VAR_12, VAR_8->minor);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_8->iobase = VAR_12;
 VAR_8->board_name = VAR_7->name;





 if (FUNC_1(VAR_8, 2) < 0)
  return -VAR_1;

 VAR_10 = VAR_8->subdevices + 0;

 VAR_10->type = VAR_0;
 VAR_10->subdev_flags = VAR_2;
 VAR_10->n_chan = VAR_7->ao_chans;
 VAR_10->maxdata = 0xffff;
 VAR_10->range_table = &VAR_6;
 VAR_10->insn_write = VAR_5;
 VAR_10->insn_read = VAR_4;
 FUNC_4("attached\n");

 return 1;
}
