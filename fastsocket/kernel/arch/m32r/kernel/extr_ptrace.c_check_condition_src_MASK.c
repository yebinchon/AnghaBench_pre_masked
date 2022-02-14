
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 unsigned long FUNC_0 (struct task_struct*,int ) ;
 int * VAR_0 ;

__attribute__((used)) static int
FUNC_1(unsigned long VAR_1, unsigned long VAR_2,
      unsigned long VAR_3, struct task_struct *VAR_4)
{
 unsigned long VAR_5, VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_0[VAR_3]);

 switch (VAR_1) {
 case 0x0:
  VAR_5 = FUNC_0(VAR_4, VAR_0[VAR_2]);
  return VAR_5 == VAR_6;
 case 0x1:
  VAR_5 = FUNC_0(VAR_4, VAR_0[VAR_2]);
  return VAR_5 != VAR_6;
 case 0x8:
  return VAR_6 == 0;
 case 0x9:
  return VAR_6 != 0;
 case 0xa:
  return (int)VAR_6 < 0;
 case 0xb:
  return (int)VAR_6 >= 0;
 case 0xc:
  return (int)VAR_6 <= 0;
 case 0xd:
  return (int)VAR_6 > 0;
 default:

  return 0;
 }
}
