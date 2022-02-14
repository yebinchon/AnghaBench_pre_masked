
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (struct mm_struct*,int *,int *) ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_4(struct mm_struct *VAR_5, pgd_t *VAR_6, pmd_t *VAR_7[])
{
 pud_t *VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 if (VAR_1 == 0)
  return;

 VAR_8 = FUNC_2(VAR_6, 0);

  for (VAR_9 = VAR_10 = 0; VAR_10 < VAR_1;
      VAR_10++, VAR_8++, VAR_9 += VAR_3) {
  pmd_t *VAR_11 = VAR_7[VAR_10];

  if (VAR_10 >= VAR_0)
   FUNC_0(VAR_11, (pmd_t *)FUNC_1(VAR_4[VAR_10]),
          sizeof(pmd_t) * VAR_2);

  FUNC_3(VAR_5, VAR_8, VAR_11);
 }
}
