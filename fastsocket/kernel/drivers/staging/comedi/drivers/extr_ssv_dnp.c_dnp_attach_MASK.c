
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dnp_private_data {int dummy; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int insn_config; int insn_bits; int * range_table; int type; } ;
struct comedi_device {struct comedi_subdevice* subdevices; int board_name; int minor; } ;
struct comedi_devconfig {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct comedi_device*,int) ;
 scalar_t__ FUNC_1 (struct comedi_device*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*,...) ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_13, struct comedi_devconfig *VAR_14)
{

 struct comedi_subdevice *VAR_15;

 FUNC_4("comedi%d: dnp: ", VAR_13->minor);






 VAR_13->board_name = VAR_12->name;



 if (FUNC_0(VAR_13, sizeof(struct dnp_private_data)) < 0)
  return -VAR_3;




 if (FUNC_1(VAR_13, 1) < 0)
  return -VAR_3;

 VAR_15 = VAR_13->subdevices + 0;

 VAR_15->type = VAR_0;
 VAR_15->subdev_flags = VAR_7 | VAR_8;
 VAR_15->n_chan = 20;
 VAR_15->maxdata = 1;
 VAR_15->range_table = &VAR_11;
 VAR_15->insn_bits = VAR_9;
 VAR_15->insn_config = VAR_10;

 FUNC_4("attached\n");






 FUNC_3(VAR_4, VAR_2);
 FUNC_3(0x00, VAR_1);
 FUNC_3(VAR_5, VAR_2);
 FUNC_3(0x00, VAR_1);
 FUNC_3(VAR_6, VAR_2);
 FUNC_3((FUNC_2(VAR_1) & 0xAA), VAR_1);

 return 1;

}
