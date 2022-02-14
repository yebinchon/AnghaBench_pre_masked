
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pte1; int * pte0; int * pmd1; int * pmd0; int * pgd; } ;
struct kimage {TYPE_1__ arch; } ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct kimage*) ;

__attribute__((used)) static int FUNC_2(struct kimage *VAR_2)
{
 VAR_2->arch.pgd = (pgd_t *)FUNC_0(VAR_1);




 VAR_2->arch.pte0 = (pte_t *)FUNC_0(VAR_1);
 VAR_2->arch.pte1 = (pte_t *)FUNC_0(VAR_1);
 if (!VAR_2->arch.pgd ||



     !VAR_2->arch.pte0 || !VAR_2->arch.pte1) {
  FUNC_1(VAR_2);
  return -VAR_0;
 }
 return 0;
}
