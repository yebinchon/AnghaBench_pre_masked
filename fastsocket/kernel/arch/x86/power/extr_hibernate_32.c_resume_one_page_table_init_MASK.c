
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int pmd_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static pte_t *FUNC_7(pmd_t *VAR_2)
{
 if (FUNC_4(*VAR_2)) {
  pte_t *VAR_3 = (pte_t *)FUNC_3(VAR_0);
  if (!VAR_3)
   return ((void*)0);

  FUNC_6(VAR_2, FUNC_2(FUNC_1(VAR_3) | VAR_1));

  FUNC_0(VAR_3 != FUNC_5(VAR_2, 0));

  return VAR_3;
 }

 return FUNC_5(VAR_2, 0);
}
