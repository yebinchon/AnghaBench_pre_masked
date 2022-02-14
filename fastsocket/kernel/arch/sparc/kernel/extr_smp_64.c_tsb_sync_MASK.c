
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trap_per_cpu {scalar_t__ pgd_paddr; } ;
struct mm_struct {int pgd; } ;


 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 () ;
 struct trap_per_cpu* VAR_0 ;
 int FUNC_2 (struct mm_struct*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
 struct trap_per_cpu *VAR_2 = &VAR_0[FUNC_1()];
 struct mm_struct *VAR_3 = VAR_1;







 if (VAR_2->pgd_paddr == FUNC_0(VAR_3->pgd))
  FUNC_2(VAR_3);
}
