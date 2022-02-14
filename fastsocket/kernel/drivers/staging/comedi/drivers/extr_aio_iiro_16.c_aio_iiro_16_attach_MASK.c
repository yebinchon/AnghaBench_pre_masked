
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int n_chan; int maxdata; int insn_bits; int * range_table; int subdev_flags; void* type; } ;
struct comedi_device {int iobase; struct comedi_subdevice* subdevices; int board_name; int minor; } ;
struct comedi_devconfig {int* options; } ;
struct aio_iiro_16_private {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct comedi_device*,int) ;
 scalar_t__ FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (char*,...) ;
 int VAR_8 ;
 int FUNC_3 (int,int ,int ) ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_10,
         struct comedi_devconfig *VAR_11)
{
 int VAR_12;
 struct comedi_subdevice *VAR_13;

 FUNC_2("comedi%d: aio_iiro_16: ", VAR_10->minor);

 VAR_10->board_name = VAR_9->name;

 VAR_12 = VAR_11->options[0];

 if (!FUNC_3(VAR_12, VAR_0, VAR_10->board_name)) {
  FUNC_2("I/O port conflict");
  return -VAR_2;
 }

 VAR_10->iobase = VAR_12;

 if (FUNC_0(VAR_10, sizeof(struct aio_iiro_16_private)) < 0)
  return -VAR_3;

 if (FUNC_1(VAR_10, 2) < 0)
  return -VAR_3;

 VAR_13 = VAR_10->subdevices + 0;
 VAR_13->type = VAR_1;
 VAR_13->subdev_flags = VAR_5;
 VAR_13->n_chan = 16;
 VAR_13->maxdata = 1;
 VAR_13->range_table = &VAR_8;
 VAR_13->insn_bits = VAR_7;

 VAR_13 = VAR_10->subdevices + 1;
 VAR_13->type = VAR_1;
 VAR_13->subdev_flags = VAR_4;
 VAR_13->n_chan = 16;
 VAR_13->maxdata = 1;
 VAR_13->range_table = &VAR_8;
 VAR_13->insn_bits = VAR_6;

 FUNC_2("attached\n");

 return 1;
}
