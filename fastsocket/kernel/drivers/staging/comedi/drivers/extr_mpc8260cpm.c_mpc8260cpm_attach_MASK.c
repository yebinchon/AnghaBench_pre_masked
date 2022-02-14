
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpc8260cpm_private {int dummy; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int insn_bits; int insn_config; int * range_table; int type; } ;
struct comedi_device {struct comedi_subdevice* subdevices; int board_name; scalar_t__ board; scalar_t__ board_ptr; int minor; } ;
struct comedi_devconfig {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct comedi_device*,int) ;
 scalar_t__ FUNC_1 (struct comedi_device*,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,int ) ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_9,
        struct comedi_devconfig *VAR_10)
{
 struct comedi_subdevice *VAR_11;
 int VAR_12;

 FUNC_2("comedi%d: mpc8260cpm: ", VAR_9->minor);

 VAR_9->board_ptr = VAR_4 + VAR_9->board;

 VAR_9->board_name = VAR_8->name;

 if (FUNC_0(VAR_9, sizeof(struct mpc8260cpm_private)) < 0)
  return -VAR_1;

 if (FUNC_1(VAR_9, 4) < 0)
  return -VAR_1;

 for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
  VAR_11 = VAR_9->subdevices + VAR_12;
  VAR_11->type = VAR_0;
  VAR_11->subdev_flags = VAR_2 | VAR_3;
  VAR_11->n_chan = 32;
  VAR_11->maxdata = 1;
  VAR_11->range_table = &VAR_7;
  VAR_11->insn_config = VAR_6;
  VAR_11->insn_bits = VAR_5;
 }

 return 1;
}
