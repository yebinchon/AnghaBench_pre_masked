
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pmd_t ;
typedef int pgtable_t ;
typedef int pgd_t ;


 int FUNC_0 (unsigned long,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mm_struct*,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mm_struct*,int ) ;

void FUNC_9(struct mm_struct *VAR_0, pgd_t *VAR_1)
{
 pmd_t *VAR_2;
 pgtable_t VAR_3;

 if (!VAR_1)
  return;


 VAR_2 = FUNC_6(VAR_1, 0);
 if (FUNC_5(*VAR_2))
  goto free;
 if (FUNC_2(*VAR_2)) {
  FUNC_1(*VAR_2);
  FUNC_3(VAR_2);
  goto free;
 }

 VAR_3 = FUNC_7(*VAR_2);
 FUNC_3(VAR_2);
 FUNC_8(VAR_0, VAR_3);
 FUNC_4(VAR_0, VAR_2);
free:
 FUNC_0((unsigned long) VAR_1, 2);
}
