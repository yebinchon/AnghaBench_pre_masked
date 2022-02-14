
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pte1; scalar_t__ pte0; scalar_t__ pmd1; scalar_t__ pmd0; scalar_t__ pgd; } ;
struct kimage {TYPE_1__ arch; } ;


 int FUNC_0 (unsigned long) ;

__attribute__((used)) static void FUNC_1(struct kimage *VAR_0)
{
 FUNC_0((unsigned long)VAR_0->arch.pgd);




 FUNC_0((unsigned long)VAR_0->arch.pte0);
 FUNC_0((unsigned long)VAR_0->arch.pte1);
}
