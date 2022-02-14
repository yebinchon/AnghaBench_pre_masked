
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3,
         struct comedi_subdevice *VAR_4,
         struct comedi_insn *VAR_5,
         unsigned int *VAR_6)
{




 if (VAR_5->n != 2)
  return -VAR_0;
 if (VAR_6[0]) {
  VAR_4->state &= ~VAR_6[0];
  VAR_4->state |= (VAR_6[0] & VAR_6[1]);
  FUNC_1(VAR_4->state, VAR_2);
 }
 VAR_6[1] = FUNC_0(VAR_1);

 return 2;
}
