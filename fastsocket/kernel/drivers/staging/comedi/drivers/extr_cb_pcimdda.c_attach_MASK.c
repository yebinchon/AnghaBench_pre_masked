
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int subdev_flags; int type; int * insn_read; int * insn_write; int * range_table; int maxdata; int n_chan; } ;
struct comedi_device {struct comedi_subdevice* subdevices; int board_name; int minor; } ;
struct comedi_devconfig {scalar_t__* options; } ;
struct board_private_struct {int dummy; } ;
struct TYPE_4__ {int attached_to_8255; int attached_successfully; int dio_registers; } ;
struct TYPE_3__ {int dio_method; scalar_t__ dio_chans; int ao_bits; int ao_chans; int name; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct comedi_device*,int) ;
 scalar_t__ FUNC_1 (struct comedi_device*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct comedi_device*,struct comedi_devconfig*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*,int *,int ) ;
 TYPE_1__* VAR_11 ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_12, struct comedi_devconfig *VAR_13)
{
 struct comedi_subdevice *VAR_14;
 int VAR_15;







 if (FUNC_0(VAR_12, sizeof(struct board_private_struct)) < 0)
  return -VAR_2;






 VAR_15 = FUNC_4(VAR_12, VAR_13);
 if (VAR_15)
  return VAR_15;


 FUNC_3("comedi%d: %s: ", VAR_12->minor, VAR_11->name);





 VAR_12->board_name = VAR_11->name;





 if (FUNC_1(VAR_12, 2) < 0)
  return -VAR_2;

 VAR_14 = VAR_12->subdevices + 0;


 VAR_14->type = VAR_0;
 VAR_14->subdev_flags = VAR_5 | VAR_4;
 VAR_14->n_chan = VAR_11->ao_chans;
 VAR_14->maxdata = FUNC_2(VAR_11->ao_bits);

 if (VAR_13->options[2]) {
  VAR_14->range_table = &VAR_9;
 } else {
  VAR_14->range_table = &VAR_10;
 }
 VAR_14->insn_write = &VAR_7;
 VAR_14->insn_read = &VAR_6;

 VAR_14 = VAR_12->subdevices + 1;

 if (VAR_11->dio_chans) {
  switch (VAR_11->dio_method) {
  case 129:

   FUNC_5(VAR_12, VAR_14, ((void*)0), VAR_8->dio_registers);
   VAR_8->attached_to_8255 = 1;
   break;
  case 128:
  default:
   FUNC_3("DIO_INTERNAL not implemented yet!\n");
   return -VAR_3;
   break;
  }
 } else {
  VAR_14->type = VAR_1;
 }

 VAR_8->attached_successfully = 1;

 FUNC_3("attached\n");

 return 1;
}
