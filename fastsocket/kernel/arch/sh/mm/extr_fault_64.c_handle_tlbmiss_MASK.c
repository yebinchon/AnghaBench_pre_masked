
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long long,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (struct mm_struct*,unsigned long) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ) ;
 unsigned long long FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int * FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct mm_struct *VAR_1,
     unsigned long long VAR_2,
     unsigned long long VAR_3,
     unsigned long VAR_4)
{
 pgd_t *VAR_5;
 pud_t *VAR_6;
 pmd_t *VAR_7;
 pte_t *VAR_8;
 pte_t VAR_9;
 if (VAR_4 >= (unsigned long) VAR_0)

  return 0;

 VAR_5 = FUNC_2(VAR_1, VAR_4);
 if (FUNC_1(*VAR_5) || !FUNC_3(*VAR_5))
  return 0;
 if (!FUNC_3(*VAR_5))
  return 0;

 VAR_6 = FUNC_12(VAR_5, VAR_4);
 if (FUNC_11(*VAR_6) || !FUNC_13(*VAR_6))
  return 0;

 VAR_7 = FUNC_5(VAR_6, VAR_4);
 if (FUNC_4(*VAR_7) || !FUNC_6(*VAR_7))
  return 0;

 VAR_8 = FUNC_8(VAR_7, VAR_4);
 VAR_9 = *VAR_8;

 if (FUNC_7(VAR_9) || !FUNC_9(VAR_9))
  return 0;







 if ((FUNC_10(VAR_9) & VAR_2) != VAR_2)
  return 0;

        FUNC_0(VAR_4, VAR_3, VAR_8);

 return 1;
}
