
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int *,unsigned long) ;
 int * FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static void FUNC_13(
 pgd_t *VAR_4, pmd_t *VAR_5, pte_t *VAR_6,
 unsigned long VAR_7, unsigned long VAR_8)
{
 pud_t *VAR_9;

 VAR_4 += FUNC_4(VAR_7);




 VAR_9 = FUNC_9(VAR_4, VAR_7);
 VAR_5 = FUNC_6(VAR_9, VAR_7);
 if (!(FUNC_7(*VAR_5) & VAR_2))
  FUNC_11(VAR_5, FUNC_2(FUNC_0(VAR_6) | VAR_3));
 VAR_6 = FUNC_8(VAR_5, VAR_7);
 FUNC_12(VAR_6, FUNC_3(VAR_8 >> VAR_1, VAR_0));
}
