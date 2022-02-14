
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pgd_t ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (struct mm_struct*,unsigned long) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct mm_struct *VAR_2, unsigned long *VAR_3, pte_t *VAR_4)
{
 pgd_t *VAR_5 = FUNC_3(VAR_2, *VAR_3);
 pud_t *VAR_6 = FUNC_5(VAR_5, *VAR_3);

 FUNC_1(FUNC_2(FUNC_7(VAR_4)) == 0);
 if (FUNC_2(FUNC_7(VAR_4)) == 1)
  return 0;

 FUNC_4(VAR_6);
 FUNC_6(FUNC_7(VAR_4));
 *VAR_3 = FUNC_0(*VAR_3, VAR_0 * VAR_1) - VAR_0;
 return 1;
}
