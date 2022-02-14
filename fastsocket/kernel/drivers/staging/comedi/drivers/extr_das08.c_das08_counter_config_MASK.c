
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int i8254; } ;


 int VAR_0 ;


 TYPE_1__* VAR_1 ;
 unsigned int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
    struct comedi_subdevice *VAR_3,
    struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 int VAR_6 = VAR_4->chanspec;

 if (VAR_4->n != 2)
  return -VAR_0;

 switch (VAR_5[0]) {
 case 128:
  FUNC_1(&VAR_1->i8254, VAR_6, VAR_5[1]);
  break;
 case 129:
  VAR_5[1] = FUNC_0(&VAR_1->i8254, VAR_6);
  break;
 default:
  return -VAR_0;
  break;
 }
 return 2;
}
