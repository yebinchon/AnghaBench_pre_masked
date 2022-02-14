
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int subdev_flags; int maxdata; int insn_config; int insn_bits; int * range_table; int n_chan; int type; } ;
struct comedi_device {struct comedi_subdevice* subdevices; int board_name; int minor; } ;
struct comedi_devconfig {int dummy; } ;
struct Private {int dummy; } ;
struct TYPE_2__ {int ndevs; int nchans; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,...) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct comedi_device*,int) ;
 scalar_t__ FUNC_2 (struct comedi_device*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_3 (struct comedi_device*,struct comedi_devconfig*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_9,
     struct comedi_devconfig *VAR_10)
{
 struct comedi_subdevice *VAR_11;

 FUNC_0("comedi%d\n", VAR_9->minor);





 if (FUNC_1(VAR_9, sizeof(struct Private)) < 0)
  return -VAR_2;




 if (!FUNC_3(VAR_9, VAR_10))
  return -VAR_1;





 VAR_9->board_name = VAR_7->name;





 if (FUNC_2(VAR_9, 1) < 0)
  return -VAR_2;

 VAR_11 = VAR_9->subdevices + 0;
 VAR_11->type = VAR_0;
 VAR_11->subdev_flags = VAR_3 | VAR_4;
 VAR_11->n_chan = VAR_7->nchans;
 VAR_11->maxdata = 1;
 VAR_11->range_table = &VAR_8;
 VAR_11->insn_bits = VAR_5;
 VAR_11->insn_config = VAR_6;

 FUNC_0("attached with %u DIO channels coming from %u different "
  "subdevices all bonded together.  "
  "John Lennon would be proud!\n",
  VAR_7->nchans, VAR_7->ndevs);

 return 1;
}
