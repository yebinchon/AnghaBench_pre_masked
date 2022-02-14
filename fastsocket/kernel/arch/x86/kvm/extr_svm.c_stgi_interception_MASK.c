
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_svm {int vcpu; scalar_t__ next_rip; } ;


 int FUNC_0 (struct vcpu_svm*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct vcpu_svm*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct vcpu_svm *VAR_0)
{
 if (FUNC_2(VAR_0))
  return 1;

 VAR_0->next_rip = FUNC_1(&VAR_0->vcpu) + 3;
 FUNC_3(&VAR_0->vcpu);

 FUNC_0(VAR_0);

 return 1;
}
