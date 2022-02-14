
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_svm {int vcpu; scalar_t__ next_rip; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct vcpu_svm *VAR_0)
{
 VAR_0->next_rip = FUNC_1(&VAR_0->vcpu) + 2;
 FUNC_0(&VAR_0->vcpu);
 return 1;
}
