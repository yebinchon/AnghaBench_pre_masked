
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int *,unsigned long) ;
 int * FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int * FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_11 (unsigned long VAR_0)
{
 pgd_t *VAR_1;
 pud_t *VAR_2;
 pmd_t *VAR_3;
 pte_t *VAR_4, VAR_5;

 VAR_1 = FUNC_2(VAR_0);
 if (FUNC_1(*VAR_1) || FUNC_0(*VAR_1))
  return 0;

 VAR_2 = FUNC_10(VAR_1, VAR_0);
 if (FUNC_9(*VAR_2) || FUNC_8(*VAR_2))
  return 0;

 VAR_3 = FUNC_5(VAR_2, VAR_0);
 if (FUNC_4(*VAR_3) || FUNC_3(*VAR_3))
  return 0;

 VAR_4 = FUNC_6(VAR_3, VAR_0);
 if (!VAR_4)
  return 0;

 VAR_5 = *VAR_4;
 return FUNC_7(VAR_5);
}
