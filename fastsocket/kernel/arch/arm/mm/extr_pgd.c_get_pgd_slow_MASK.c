
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (unsigned long,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 int * FUNC_5 (int ) ;
 int * FUNC_6 (struct mm_struct*,int *,int ) ;
 int FUNC_7 (struct mm_struct*,int *) ;
 int * FUNC_8 (int *,int ) ;
 int * FUNC_9 (struct mm_struct*,int *,int ) ;
 int * FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,int ) ;
 int FUNC_14 () ;

pgd_t *FUNC_15(struct mm_struct *VAR_3)
{
 pgd_t *VAR_4, *VAR_5;
 pmd_t *VAR_6, *VAR_7;
 pte_t *VAR_8, *VAR_9;

 VAR_4 = (pgd_t *)FUNC_0(VAR_1, 2);
 if (!VAR_4)
  goto no_pgd;

 FUNC_4(VAR_4, 0, VAR_0 * sizeof(pgd_t));




 VAR_5 = FUNC_5(0);
 FUNC_3(VAR_4 + VAR_0, VAR_5 + VAR_0,
         (VAR_2 - VAR_0) * sizeof(pgd_t));

 FUNC_1(VAR_4, VAR_2 * sizeof(pgd_t));

 if (!FUNC_14()) {




  VAR_6 = FUNC_6(VAR_3, VAR_4, 0);
  if (!VAR_6)
   goto no_pmd;

  VAR_8 = FUNC_9(VAR_3, VAR_6, 0);
  if (!VAR_8)
   goto no_pte;

  VAR_7 = FUNC_8(VAR_5, 0);
  VAR_9 = FUNC_10(VAR_7, 0);
  FUNC_13(VAR_8, *VAR_9, 0);
  FUNC_12(VAR_9);
  FUNC_11(VAR_8);
 }

 return VAR_4;

no_pte:
 FUNC_7(VAR_3, VAR_6);
no_pmd:
 FUNC_2((unsigned long)VAR_4, 2);
no_pgd:
 return ((void*)0);
}
