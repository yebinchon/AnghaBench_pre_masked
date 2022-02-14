
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static pte_t *FUNC_9(struct mm_struct *VAR_0, unsigned long VAR_1)
{
 pgd_t *VAR_2;
 pud_t *VAR_3;
 pmd_t *VAR_4;
 pte_t *VAR_5;
 pte_t VAR_6;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (FUNC_0(*VAR_2))
  return ((void*)0);

 VAR_3 = FUNC_8(VAR_2, VAR_1);
 if (FUNC_7(*VAR_3))
  return ((void*)0);

 VAR_4 = FUNC_3(VAR_3, VAR_1);
 if (FUNC_2(*VAR_4))
  return ((void*)0);

 VAR_5 = FUNC_5(VAR_4, VAR_1);
 VAR_6 = *VAR_5;
 if (FUNC_4(VAR_6) || !FUNC_6(VAR_6))
  return ((void*)0);

 return VAR_5;
}
