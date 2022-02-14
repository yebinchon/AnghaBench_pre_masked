
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (struct comedi_device*,int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
      struct comedi_subdevice *VAR_3,
      struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_3 == VAR_2->subdevices + 4)
  VAR_6 = 1;


 if (VAR_5[0]) {
  VAR_3->io_bits = 0xff;
  FUNC_0(VAR_2, VAR_1);
 } else {
  VAR_3->io_bits = 0;
  FUNC_0(VAR_2, VAR_0);
 }
 FUNC_1(VAR_2, VAR_6);

 return 1;
}
