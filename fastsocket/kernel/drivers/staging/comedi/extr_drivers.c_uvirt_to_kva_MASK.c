
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,unsigned long) ;
 int * FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static inline unsigned long FUNC_8(pgd_t * VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3 = 0UL;
 pmd_t *VAR_4;
 pte_t *VAR_5, VAR_6;
 pud_t *VAR_7;

 if (!FUNC_1(*VAR_1)) {
  VAR_7 = FUNC_7(VAR_1, VAR_2);
  VAR_4 = FUNC_3(VAR_7, VAR_2);
  if (!FUNC_2(*VAR_4)) {
   VAR_5 = FUNC_4(VAR_4, VAR_2);
   VAR_6 = *VAR_5;
   if (FUNC_6(VAR_6)) {
    VAR_3 = (unsigned long)
        FUNC_0(FUNC_5(VAR_6));
    VAR_3 |= (VAR_2 & (VAR_0 - 1));
   }
  }
 }
 return VAR_3;
}
