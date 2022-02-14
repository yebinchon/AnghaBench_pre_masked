
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int mm; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int * FUNC_0 (int ,unsigned long) ;
 int * FUNC_1 (int *,unsigned long) ;
 int * FUNC_2 (int *,unsigned long) ;
 int * FUNC_3 (int *,unsigned long) ;

pte_t *FUNC_4(struct task_struct *VAR_0, unsigned long VAR_1)
{
 pgd_t *VAR_2 = FUNC_0(VAR_0->mm, VAR_1);
 pud_t *VAR_3 = FUNC_3(VAR_2, VAR_1);
 pmd_t *VAR_4 = FUNC_1(VAR_3, VAR_1);

 return FUNC_2(VAR_4, VAR_1);
}
