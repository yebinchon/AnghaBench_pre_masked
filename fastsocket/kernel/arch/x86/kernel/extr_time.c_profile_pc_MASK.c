
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {scalar_t__ bp; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (struct pt_regs*) ;
 scalar_t__ FUNC_2 (struct pt_regs*) ;
 int FUNC_3 (struct pt_regs*) ;

unsigned long FUNC_4(struct pt_regs *VAR_0)
{
 unsigned long VAR_1 = FUNC_1(VAR_0);

 if (!FUNC_3(VAR_0) && FUNC_0(VAR_1)) {



  unsigned long *VAR_2 =
   (unsigned long *)FUNC_2(VAR_0);





  if (VAR_2[0] >> 22)
   return VAR_2[0];
  if (VAR_2[1] >> 22)
   return VAR_2[1];

 }
 return VAR_1;
}
