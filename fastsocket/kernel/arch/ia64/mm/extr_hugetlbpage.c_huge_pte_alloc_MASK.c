
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 unsigned long FUNC_0 (unsigned long) ;
 int * FUNC_1 (struct mm_struct*,unsigned long) ;
 int * FUNC_2 (struct mm_struct*,int *,unsigned long) ;
 int * FUNC_3 (struct mm_struct*,int *,unsigned long) ;
 int * FUNC_4 (struct mm_struct*,int *,unsigned long) ;

pte_t *
FUNC_5(struct mm_struct *VAR_0, unsigned long VAR_1, unsigned long VAR_2,
        bool *VAR_3)
{
 unsigned long VAR_4 = FUNC_0(VAR_1);
 pgd_t *VAR_5;
 pud_t *VAR_6;
 pmd_t *VAR_7;
 pte_t *VAR_8 = ((void*)0);

 VAR_5 = FUNC_1(VAR_0, VAR_4);
 VAR_6 = FUNC_4(VAR_0, VAR_5, VAR_4);
 if (VAR_6) {
  VAR_7 = FUNC_2(VAR_0, VAR_6, VAR_4);
  if (VAR_7)
   VAR_8 = FUNC_3(VAR_0, VAR_7, VAR_4);
 }
 return VAR_8;
}
