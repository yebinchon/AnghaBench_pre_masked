
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int VAR_0 ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long,int *) ;
 int * FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int * FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long,int *,int ) ;
 int * VAR_1 ;

void FUNC_12(unsigned long VAR_2, pte_t VAR_3)
{
 pgd_t *VAR_4;
 pud_t *VAR_5;
 pmd_t *VAR_6;
 pte_t *VAR_7;

 VAR_4 = VAR_1 + FUNC_2(VAR_2);
 if (FUNC_3(*VAR_4)) {
  FUNC_0();
  return;
 }
 VAR_5 = FUNC_10(VAR_4, VAR_2);
 if (FUNC_9(*VAR_5)) {
  FUNC_0();
  return;
 }
 VAR_6 = FUNC_5(VAR_5, VAR_2);
 if (FUNC_4(*VAR_6)) {
  FUNC_0();
  return;
 }
 VAR_7 = FUNC_7(VAR_6, VAR_2);
 if (FUNC_8(VAR_3))
  FUNC_11(&VAR_0, VAR_2, VAR_7, VAR_3);
 else
  FUNC_6(&VAR_0, VAR_2, VAR_7);





 FUNC_1(VAR_2);
}
