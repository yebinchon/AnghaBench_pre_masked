
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (struct mm_struct*,unsigned long) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,unsigned long) ;
 int * FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int *,unsigned long) ;

pte_t *FUNC_7(struct mm_struct *VAR_1, unsigned long VAR_2)
{
 pgd_t *VAR_3;
 pud_t *VAR_4;
 pmd_t *VAR_5;
 pte_t *VAR_6 = ((void*)0);

 VAR_2 &= VAR_0;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!FUNC_0(*VAR_3)) {
  VAR_4 = FUNC_6(VAR_3, VAR_2);
  if (!FUNC_5(*VAR_4)) {
   VAR_5 = FUNC_3(VAR_4, VAR_2);
   if (!FUNC_2(*VAR_5))
    VAR_6 = FUNC_4(VAR_5, VAR_2);
  }
 }
 return VAR_6;
}
