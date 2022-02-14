
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pte1; int pgd; int * pmd1; int pte0; int * pmd0; } ;
struct kimage {TYPE_1__ arch; int control_code_page; } ;
typedef int pmd_t ;


 unsigned long FUNC_0 (void*) ;
 int FUNC_1 (int ,int *,int ,unsigned long,unsigned long) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct kimage *VAR_0)
{
 void *VAR_1;
 pmd_t *VAR_2 = ((void*)0);

 VAR_1 = FUNC_2(VAR_0->control_code_page);



 FUNC_1(
  VAR_0->arch.pgd, VAR_2, VAR_0->arch.pte0,
  (unsigned long)VAR_1, FUNC_0(VAR_1));



 FUNC_1(
  VAR_0->arch.pgd, VAR_2, VAR_0->arch.pte1,
  FUNC_0(VAR_1), FUNC_0(VAR_1));
}
