
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 unsigned long VAR_0 ;
 int * FUNC_0 (struct mm_struct*,unsigned long) ;
 int * FUNC_1 (int ,unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct mm_struct *VAR_1, unsigned long VAR_2)
{
 pgd_t *VAR_3;
 pmd_t *VAR_4;
 pte_t *VAR_5;
 int VAR_6 = 0;

 VAR_3 = FUNC_0(VAR_1, VAR_2 & VAR_0);
 if (VAR_3) {
  VAR_4 = FUNC_1(FUNC_5(VAR_3, VAR_2 & VAR_0),
                   VAR_2 & VAR_0);
  if (VAR_4 && FUNC_2(*VAR_4)) {
   VAR_5 = FUNC_3(VAR_4, VAR_2 & VAR_0);
   if (VAR_5) {
    VAR_6 = (int)FUNC_4(*VAR_5);
   }
  }
 }
 return VAR_6;
}
