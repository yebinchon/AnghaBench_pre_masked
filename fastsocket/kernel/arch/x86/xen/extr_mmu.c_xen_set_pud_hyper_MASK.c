
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmu_update {int val; int ptr; } ;
typedef int pud_t ;
struct TYPE_2__ {int maddr; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mmu_update*) ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;

void FUNC_9(pud_t *VAR_2, pud_t VAR_3)
{
 struct mmu_update VAR_4;

 FUNC_3();

 FUNC_7();


 VAR_4.ptr = FUNC_1(VAR_2).maddr;
 VAR_4.val = FUNC_5(VAR_3);
 FUNC_6(&VAR_4);

 FUNC_0(VAR_1, FUNC_2() == VAR_0);

 FUNC_8(VAR_0);

 FUNC_4();
}
