
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct comedi_device*,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct comedi_device*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
       struct comedi_subdevice *VAR_2,
       struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 switch (VAR_4[0]) {
 case 128:
  return FUNC_1(VAR_1, VAR_4[1]);
  break;
 case 129:
  FUNC_0(VAR_1, &VAR_4[1], &VAR_4[2]);
  return 3;
 default:
  break;
 }
 return -VAR_0;
}
