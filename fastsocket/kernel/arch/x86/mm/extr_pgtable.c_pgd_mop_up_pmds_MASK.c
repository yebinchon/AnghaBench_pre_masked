
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mm_struct*,int *) ;

__attribute__((used)) static void FUNC_5(struct mm_struct *VAR_2, pgd_t *VAR_3)
{
 int VAR_4;

 for(VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  pgd_t VAR_5 = VAR_3[VAR_4];

  if (FUNC_3(VAR_5) != 0) {
   pmd_t *VAR_6 = (pmd_t *)FUNC_2(VAR_5);

   VAR_3[VAR_4] = FUNC_0(0);

   FUNC_1(FUNC_3(VAR_5) >> VAR_0);
   FUNC_4(VAR_2, VAR_6);
  }
 }
}
