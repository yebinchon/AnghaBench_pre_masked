
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 unsigned long FUNC_0 (struct task_struct*,unsigned long) ;

__attribute__((used)) static unsigned long
FUNC_1(struct task_struct *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;
 int VAR_4;

 VAR_2 = FUNC_0(VAR_0, VAR_1 & 15);
 VAR_3 = (VAR_1 >> 7) & 31;
 VAR_4 = (VAR_1 >> 5) & 3;

 switch (VAR_4) {
 case 0: VAR_2 <<= VAR_3; break;
 case 1: VAR_2 >>= VAR_3; break;
 case 2:
  VAR_2 = (((signed long)VAR_2) >> VAR_3);
  break;
 case 3:
   VAR_2 = (VAR_2 >> VAR_3) | (VAR_2 << (32 - VAR_3));
  break;
 }
 return VAR_2;
}
