
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_gather {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;
typedef int hugepd_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct mmu_gather*,int *,unsigned int) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (struct mmu_gather*,int *,unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mmu_gather *VAR_1, pud_t *VAR_2,
       unsigned long VAR_3, unsigned long VAR_4,
       unsigned long VAR_5, unsigned long VAR_6,
       unsigned int VAR_7)
{
 pmd_t *VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;

 VAR_10 = VAR_3;
 VAR_8 = FUNC_4(VAR_2, VAR_3);
 do {
  VAR_9 = FUNC_1(VAR_3, VAR_4);
  if (FUNC_3(*VAR_8))
   continue;
  FUNC_0(VAR_1, (hugepd_t *)VAR_8, VAR_7);
 } while (VAR_8++, VAR_3 = VAR_9, VAR_3 != VAR_4);

 VAR_10 &= VAR_0;
 if (VAR_10 < VAR_5)
  return;
 if (VAR_6) {
  VAR_6 &= VAR_0;
  if (!VAR_6)
   return;
 }
 if (VAR_4 - 1 > VAR_6 - 1)
  return;

 VAR_8 = FUNC_4(VAR_2, VAR_10);
 FUNC_5(VAR_2);
 FUNC_2(VAR_1, VAR_8, VAR_10);
}
