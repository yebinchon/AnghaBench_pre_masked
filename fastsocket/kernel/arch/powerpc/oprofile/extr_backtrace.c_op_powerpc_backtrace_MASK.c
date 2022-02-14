
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long* gpr; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long,int) ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (unsigned long,int) ;
 unsigned long FUNC_3 (unsigned long,int) ;
 int FUNC_4 (struct pt_regs* const) ;

void FUNC_5(struct pt_regs * const VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3 = VAR_1->gpr[1];
 int VAR_4 = 1;


 VAR_2 += 1;

 if (!FUNC_4(VAR_1)) {
  while (VAR_2--) {
   VAR_3 = FUNC_0(VAR_3, VAR_4);
   if (!VAR_3)
    break;
   VAR_4 = 0;
  }
 } else {
  while (VAR_2--) {
   VAR_3 = FUNC_2(VAR_3, VAR_4);
   if (!VAR_3)
    break;
   VAR_4 = 0;
  }
 }
}
