
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int FUNC_0 (unsigned long,unsigned long long,int *) ;
 int * FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;
 unsigned long FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct mm_struct *VAR_0,
    unsigned long VAR_1,
                                unsigned long long VAR_2,
    unsigned long VAR_3)
{
 pgd_t *VAR_4;
 pud_t *VAR_5;
 pmd_t *VAR_6;
 static pte_t *VAR_7;
 pte_t VAR_8;

 VAR_4 = FUNC_1(VAR_3);

 VAR_5 = FUNC_9(VAR_4, VAR_3);
 if (FUNC_8(VAR_5))
  return 0;

 VAR_6 = FUNC_3(VAR_5, VAR_3);
 if (FUNC_2(VAR_6))
  return 0;

 VAR_7 = FUNC_5(VAR_6, VAR_3);
 VAR_8 = *VAR_7;

 if (FUNC_4(VAR_8) || !FUNC_6(VAR_8))
  return 0;
 if ((FUNC_7(VAR_8) & VAR_1) != VAR_1)
  return 0;

        FUNC_0(VAR_3, VAR_2, VAR_7);

 return 1;
}
