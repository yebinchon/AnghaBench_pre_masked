
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct hstate {unsigned long mask; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int hugepd_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mm_struct*,int *,unsigned long,unsigned int) ;
 unsigned int FUNC_2 (struct mm_struct*,unsigned long) ;
 int * FUNC_3 (struct mm_struct*,int *,unsigned long,struct hstate*) ;
 int * FUNC_4 (struct mm_struct*,int *,unsigned long,struct hstate*) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int *,unsigned long,struct hstate*) ;
 int * VAR_0 ;
 int * FUNC_7 (struct mm_struct*,unsigned long) ;
 struct hstate* FUNC_8 (unsigned long) ;

pte_t *FUNC_9(struct mm_struct *VAR_1,
   unsigned long VAR_2, unsigned long VAR_3, bool *VAR_4)
{
 pgd_t *VAR_5;
 pud_t *VAR_6;
 pmd_t *VAR_7;
 hugepd_t *VAR_8 = ((void*)0);
 struct hstate *VAR_9;
 unsigned int VAR_10;
 VAR_9 = FUNC_8(VAR_3);

 VAR_10 = FUNC_2(VAR_1, VAR_2);
 FUNC_0(!VAR_0[VAR_10]);

 VAR_2 &= VAR_9->mask;

 VAR_5 = FUNC_7(VAR_1, VAR_2);
 VAR_6 = FUNC_4(VAR_1, VAR_5, VAR_2, VAR_9);

 if (VAR_6) {
  VAR_7 = FUNC_3(VAR_1, VAR_6, VAR_2, VAR_9);
  if (VAR_7)
   VAR_8 = (hugepd_t *)VAR_7;
 }

 if (! VAR_8)
  return ((void*)0);

 if (FUNC_5(*VAR_8) && FUNC_1(VAR_1, VAR_8, VAR_2, VAR_10))
  return ((void*)0);

 return FUNC_6(VAR_8, VAR_2, VAR_9);
}
