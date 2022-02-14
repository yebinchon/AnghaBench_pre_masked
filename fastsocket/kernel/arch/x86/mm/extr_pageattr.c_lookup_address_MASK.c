
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int ) ;

pte_t *FUNC_11(unsigned long VAR_4, unsigned int *VAR_5)
{
 pgd_t *VAR_6 = FUNC_1(VAR_4);
 pud_t *VAR_7;
 pmd_t *VAR_8;

 *VAR_5 = VAR_3;

 if (FUNC_0(*VAR_6))
  return ((void*)0);

 VAR_7 = FUNC_9(VAR_6, VAR_4);
 if (FUNC_8(*VAR_7))
  return ((void*)0);

 *VAR_5 = VAR_0;
 if (FUNC_7(*VAR_7) || !FUNC_10(*VAR_7))
  return (pte_t *)VAR_7;

 VAR_8 = FUNC_4(VAR_7, VAR_4);
 if (FUNC_3(*VAR_8))
  return ((void*)0);

 *VAR_5 = VAR_1;
 if (FUNC_2(*VAR_8) || !FUNC_5(*VAR_8))
  return (pte_t *)VAR_8;

 *VAR_5 = VAR_2;

 return FUNC_6(VAR_8, VAR_4);
}
