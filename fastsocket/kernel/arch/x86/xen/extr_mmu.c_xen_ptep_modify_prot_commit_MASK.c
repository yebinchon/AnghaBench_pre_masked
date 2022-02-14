
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmu_update {int ptr; int val; } ;
struct mm_struct {int dummy; } ;
typedef int pte_t ;
struct TYPE_2__ {int maddr; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mmu_update*) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7(struct mm_struct *VAR_4, unsigned long VAR_5,
     pte_t *VAR_6, pte_t VAR_7)
{
 struct mmu_update VAR_8;

 FUNC_5();

 VAR_8.ptr = FUNC_1(VAR_6).maddr | VAR_0;
 VAR_8.val = FUNC_3(VAR_7);
 FUNC_4(&VAR_8);

 FUNC_0(VAR_2, 1);
 FUNC_0(VAR_3, FUNC_2() == VAR_1);

 FUNC_6(VAR_1);
}
