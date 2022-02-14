
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spinaphore {unsigned long serve; int ticket; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (int,int *,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static inline void FUNC_4(struct spinaphore *VAR_1)
{
 unsigned long VAR_2 = FUNC_1(1, &VAR_1->ticket, VAR_0), VAR_3;

 if (FUNC_3(VAR_2, VAR_1->serve))
  return;

 FUNC_2();

 for (;;) {
  asm volatile ("ld4.c.nc %0=[%1]" : "=r"(VAR_3) : "r"(&VAR_1->serve) : "memory");
  if (FUNC_3(VAR_2, VAR_3))
   return;
  FUNC_0();
 }
}
