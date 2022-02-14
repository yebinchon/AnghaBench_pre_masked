
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vcpu_svm {int vcpu; scalar_t__ next_rip; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct vcpu_svm *VAR_1)
{
 u64 VAR_2 = FUNC_0(&VAR_1->vcpu);
 u32 VAR_3 = FUNC_1(&VAR_1->vcpu, VAR_0);

 if (FUNC_3(&VAR_1->vcpu, VAR_3, VAR_2) == 0) {
  VAR_1->next_rip = FUNC_2(&VAR_1->vcpu) + 3;
  FUNC_4(&VAR_1->vcpu);
 }

 return 1;
}
