
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,unsigned int*) ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*,int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3,
    struct comedi_subdevice *VAR_4,
    struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 int VAR_7 = 0;

 if (VAR_4 == VAR_3->subdevices + 4)
  VAR_7 = 1;

 if (VAR_5->n != 2)
  return -VAR_2;
 if (VAR_6[0]) {
  VAR_4->state &= ~VAR_6[0];
  VAR_4->state |= (VAR_6[0] & VAR_6[1]);
  FUNC_1(VAR_3, VAR_1);
  FUNC_2(VAR_3, VAR_7);
  FUNC_2(VAR_3, VAR_4->state);
 }
 FUNC_1(VAR_3, VAR_0);
 FUNC_2(VAR_3, VAR_7);
 FUNC_0(VAR_3, VAR_6 + 1);

 return 2;
}
