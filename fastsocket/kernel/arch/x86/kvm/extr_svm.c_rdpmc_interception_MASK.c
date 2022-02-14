
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_svm {int vcpu; } ;


 int VAR_0 ;
 int FUNC_0 (struct vcpu_svm*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct vcpu_svm *VAR_1)
{
 int VAR_2;

 if (!FUNC_4(VAR_0))
  return FUNC_0(VAR_1);

 VAR_2 = FUNC_2(&VAR_1->vcpu);
 if (VAR_2)
  FUNC_1(&VAR_1->vcpu, 0);
 else
  FUNC_3(&VAR_1->vcpu);

 return 1;
}
