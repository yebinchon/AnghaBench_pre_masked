
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_gather {int mm; } ;
typedef int pud_t ;
typedef int pgd_t ;
typedef int hugepd_t ;


 unsigned long VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct mmu_gather*,int *,unsigned int) ;
 unsigned int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct mmu_gather*,int *,unsigned long,unsigned long,unsigned long,unsigned long,unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (struct mmu_gather*,int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct mmu_gather *VAR_2, pgd_t *VAR_3,
       unsigned long VAR_4, unsigned long VAR_5,
       unsigned long VAR_6, unsigned long VAR_7)
{
 pud_t *VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12 = FUNC_1(VAR_2->mm, VAR_4);
 VAR_11 = FUNC_3(VAR_12);

 VAR_10 = VAR_4;
 VAR_8 = FUNC_9(VAR_3, VAR_4);
 do {
  VAR_9 = FUNC_5(VAR_4, VAR_5);
  if (VAR_11 < VAR_1) {
   if (FUNC_8(VAR_8))
    continue;
   FUNC_2(VAR_2, VAR_8, VAR_4, VAR_9, VAR_6,
            VAR_7, VAR_12);
  } else {
   if (FUNC_7(*VAR_8))
    continue;
   FUNC_0(VAR_2, (hugepd_t *)VAR_8, VAR_12);
  }
 } while (VAR_8++, VAR_4 = VAR_9, VAR_4 != VAR_5);

 VAR_10 &= VAR_0;
 if (VAR_10 < VAR_6)
  return;
 if (VAR_7) {
  VAR_7 &= VAR_0;
  if (!VAR_7)
   return;
 }
 if (VAR_5 - 1 > VAR_7 - 1)
  return;

 VAR_8 = FUNC_9(VAR_3, VAR_10);
 FUNC_4(VAR_3);
 FUNC_6(VAR_2, VAR_8, VAR_10);
}
