
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pgd_t ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (struct mm_struct*,unsigned long,int *,int*) ;
 int * FUNC_2 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_3 (struct mm_struct*,int *,unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (struct mm_struct*,int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;

pte_t *FUNC_8(struct mm_struct *VAR_2,
   unsigned long VAR_3, unsigned long VAR_4,
   bool *VAR_5)
{
 pgd_t *VAR_6;
 pud_t *VAR_7;
 pte_t *VAR_8 = ((void*)0);

 VAR_6 = FUNC_2(VAR_2, VAR_3);
 VAR_7 = FUNC_6(VAR_2, VAR_6, VAR_3);
 if (VAR_7) {
  if (VAR_4 == VAR_1) {
   VAR_8 = (pte_t *)VAR_7;
  } else {
   FUNC_0(VAR_4 != VAR_0);
   if (FUNC_7(*VAR_7))
    FUNC_1(VAR_2, VAR_3, VAR_7, VAR_5);
   VAR_8 = (pte_t *) FUNC_3(VAR_2, VAR_7, VAR_3);
  }
 }
 FUNC_0(VAR_8 && !FUNC_5(*VAR_8) && !FUNC_4(*VAR_8));

 return VAR_8;
}
