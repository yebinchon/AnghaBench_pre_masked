
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
struct TYPE_2__ {int mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (unsigned long) ;
 unsigned long long FUNC_1 (unsigned long) ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long FUNC_2 (unsigned long) ;
 TYPE_1__* VAR_9 ;
 struct vm_area_struct* FUNC_3 (int ,unsigned long) ;
 struct page* FUNC_4 (struct vm_area_struct*,unsigned long,int) ;
 int FUNC_5 (unsigned long) ;
 unsigned long VAR_10 ;
 unsigned long FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (unsigned long) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int * FUNC_12 (int *,unsigned long) ;
 int * FUNC_13 (int *,unsigned long) ;
 unsigned long FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int * FUNC_17 (int *,unsigned long) ;

unsigned long
FUNC_18(unsigned long VAR_11)
{
 struct page *VAR_12;
 struct vm_area_struct *VAR_13;

 if (VAR_11 == 0)
  return 0UL;

 if (FUNC_0(VAR_11) == 5) {
  pgd_t *VAR_14;
  pud_t *VAR_15;
  pmd_t *VAR_16;
  pte_t *VAR_17;





  if (VAR_11 >= VAR_3
      && VAR_11 < (VAR_3 + VAR_4))
   return VAR_11 - VAR_10;


  VAR_14 = FUNC_9(VAR_11);
  if (FUNC_8(*VAR_14) || FUNC_7(*VAR_14))
   return ~0UL;

  VAR_15 = FUNC_17(VAR_14, VAR_11);
  if (FUNC_16(*VAR_15) || FUNC_15(*VAR_15))
   return ~0UL;

  VAR_16 = FUNC_12(VAR_15, VAR_11);
  if (FUNC_11(*VAR_16) || FUNC_10(*VAR_16))
   return ~0UL;

  VAR_17 = FUNC_13(VAR_16, VAR_11);
  if (!VAR_17)
   return ~0UL;

  return (FUNC_14(*VAR_17) & VAR_8) | (VAR_11 & ~VAR_5);
 }

 if (VAR_11 > VAR_7) {

  if (FUNC_0(VAR_11) == 7 &&
      FUNC_1(VAR_11) >= (1ULL << VAR_2))
   FUNC_5(VAR_11);


  return FUNC_2(VAR_11);
 }


 VAR_13 = FUNC_3(VAR_9->mm, VAR_11);
 if (!VAR_13)
  return ~0UL;


 VAR_12 = FUNC_4(VAR_13, VAR_11, VAR_1 | VAR_0);
 if (!VAR_12)
  return ~0UL;

 return (FUNC_6(VAR_12) << VAR_6) | (VAR_11 & ~VAR_5);
}
