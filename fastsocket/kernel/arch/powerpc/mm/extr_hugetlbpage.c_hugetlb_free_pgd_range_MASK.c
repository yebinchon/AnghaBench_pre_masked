
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_gather {int mm; } ;
typedef int pgd_t ;
typedef int hugepd_t ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct mmu_gather*,int *,unsigned int) ;
 unsigned int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (struct mmu_gather*,int *,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int * VAR_1 ;
 scalar_t__ FUNC_6 (unsigned int) ;
 unsigned long FUNC_7 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (int ,unsigned long) ;

void FUNC_11(struct mmu_gather *VAR_2,
       unsigned long VAR_3, unsigned long VAR_4,
       unsigned long VAR_5, unsigned long VAR_6)
{
 pgd_t *VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;
 unsigned int VAR_10 = FUNC_4(VAR_2->mm, VAR_3);

 VAR_3 &= FUNC_1(VAR_10);
 if (VAR_3 < VAR_5) {
  VAR_3 += FUNC_2(VAR_10);
  if (!VAR_3)
   return;
 }
 if (VAR_6) {
  VAR_6 &= FUNC_1(VAR_10);
  if (!VAR_6)
   return;
 }
 if (VAR_4 - 1 > VAR_6 - 1)
  VAR_4 -= FUNC_2(VAR_10);
 if (VAR_3 > VAR_4 - 1)
  return;

 VAR_9 = VAR_3;
 VAR_7 = FUNC_10(VAR_2->mm, VAR_3);
 do {
  VAR_10 = FUNC_4(VAR_2->mm, VAR_3);
  FUNC_0(!VAR_1[VAR_10]);
  VAR_8 = FUNC_7(VAR_3, VAR_4);
  if (FUNC_6(VAR_10) < VAR_0) {
   if (FUNC_9(VAR_7))
    continue;
   FUNC_5(VAR_2, VAR_7, VAR_3, VAR_8, VAR_5, VAR_6);
  } else {
   if (FUNC_8(*VAR_7))
    continue;
   FUNC_3(VAR_2, (hugepd_t *)VAR_7, VAR_10);
  }
 } while (VAR_7++, VAR_3 = VAR_8, VAR_3 != VAR_4);
}
