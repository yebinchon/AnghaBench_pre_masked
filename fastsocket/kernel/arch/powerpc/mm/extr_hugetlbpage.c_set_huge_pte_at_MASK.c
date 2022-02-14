
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct hstate {unsigned long mask; } ;
typedef int pte_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct mm_struct*,unsigned long) ;
 unsigned int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct mm_struct*,unsigned long,int *,unsigned long,int) ;
 int FUNC_5 (int ) ;
 struct hstate* FUNC_6 (unsigned long) ;

void FUNC_7(struct mm_struct *VAR_1, unsigned long VAR_2,
       pte_t *VAR_3, pte_t VAR_4)
{
 if (FUNC_3(*VAR_3)) {





  unsigned int VAR_5 = FUNC_1(VAR_1, VAR_2);
  unsigned int VAR_6 = FUNC_2(VAR_5);
  unsigned long VAR_7 = ((1UL) << VAR_6);
  struct hstate *VAR_8 = FUNC_6(VAR_7);
  FUNC_4(VAR_1, VAR_2 & VAR_8->mask, VAR_3, ~0UL, 1);
 }
 *VAR_3 = FUNC_0(FUNC_5(VAR_4) & ~VAR_0);
}
