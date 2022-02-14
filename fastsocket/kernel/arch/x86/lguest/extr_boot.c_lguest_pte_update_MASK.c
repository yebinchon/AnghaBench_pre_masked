
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mm_struct {int pgd; } ;
struct TYPE_3__ {int pte_low; int pte_high; } ;
typedef TYPE_1__ pte_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned long,int ) ;
 int FUNC_2 (int ,int ,unsigned long,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mm_struct *VAR_1, unsigned long VAR_2,
          pte_t *VAR_3)
{





 FUNC_1(VAR_0, FUNC_0(VAR_1->pgd), VAR_2, VAR_3->pte_low);

}
