
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {scalar_t__* regs; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct pt_regs* const,unsigned long*,int *,unsigned int*) ;
 unsigned long* FUNC_1 (unsigned long*,struct pt_regs* const) ;
 int FUNC_2 (struct pt_regs* const) ;

void FUNC_3(struct pt_regs * const VAR_2, unsigned int VAR_3)
{
 unsigned long *VAR_4;




 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;

 VAR_4 = (unsigned long *)VAR_2->regs[15];
 if (!FUNC_2(VAR_2)) {
  if (VAR_3)
   FUNC_0(((void*)0), VAR_2, VAR_4,
         &VAR_1, &VAR_3);
  return;
 }

 while (VAR_3-- && (VAR_4 != ((void*)0)))
  VAR_4 = FUNC_1(VAR_4, VAR_2);
}
