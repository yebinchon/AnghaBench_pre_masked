
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


 unsigned int FUNC_0 (struct mm_struct*,unsigned long) ;
 int * FUNC_1 (int *,unsigned long,struct hstate*) ;
 int * FUNC_2 (int *,unsigned long,struct hstate*) ;
 int * FUNC_3 (int *,unsigned long,struct hstate*) ;
 unsigned int FUNC_4 (unsigned int) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (struct mm_struct*,unsigned long) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct hstate* FUNC_9 (unsigned long) ;

pte_t *FUNC_10(struct mm_struct *VAR_0, unsigned long VAR_1)
{
 pgd_t *VAR_2;
 pud_t *VAR_3;
 pmd_t *VAR_4;

 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned long VAR_7;
 struct hstate *VAR_8;
 VAR_5 = FUNC_0(VAR_0, VAR_1);
 VAR_6 = FUNC_4(VAR_5);
 VAR_7 = ((1UL) << VAR_6);
 VAR_8 = FUNC_9(VAR_7);

 VAR_1 &= VAR_8->mask;

 VAR_2 = FUNC_6(VAR_0, VAR_1);
 if (!FUNC_5(*VAR_2)) {
  VAR_3 = FUNC_2(VAR_2, VAR_1, VAR_8);
  if (!FUNC_8(*VAR_3)) {
   VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_8);
   if (!FUNC_7(*VAR_4))
    return FUNC_3((hugepd_t *)VAR_4, VAR_1,
            VAR_8);
  }
 }

 return ((void*)0);
}
