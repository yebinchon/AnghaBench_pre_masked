
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mmu_gather {int need_flush; } ;
typedef int pte_t ;
struct TYPE_4__ {scalar_t__ pd; } ;
typedef TYPE_1__ hugepd_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_1__) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 int FUNC_2 (struct mmu_gather*,int ) ;

__attribute__((used)) static void FUNC_3(struct mmu_gather *VAR_2, hugepd_t *VAR_3,
          unsigned int VAR_4)
{
 pte_t *VAR_5 = FUNC_0(*VAR_3);

 VAR_3->pd = 0;
 VAR_2->need_flush = 1;
 FUNC_2(VAR_2, FUNC_1(VAR_5,
       VAR_0+VAR_4-1,
       VAR_1));
}
