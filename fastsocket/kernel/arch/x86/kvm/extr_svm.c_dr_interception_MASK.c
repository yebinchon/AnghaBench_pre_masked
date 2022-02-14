
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vcpu_svm {int vcpu; TYPE_2__* vmcb; } ;
struct TYPE_3__ {int exit_info_1; int exit_code; } ;
struct TYPE_4__ {TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vcpu_svm*) ;
 unsigned long FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,unsigned long) ;
 int FUNC_3 (int *) ;
 unsigned long FUNC_4 (int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int,unsigned long,int*) ;

__attribute__((used)) static int FUNC_7(struct vcpu_svm *VAR_3)
{
 int VAR_4, VAR_5;
 unsigned long VAR_6;
 int VAR_7 = 0;

 if (!FUNC_5(VAR_2))
  return FUNC_0(VAR_3);

 VAR_4 = VAR_3->vmcb->control.exit_info_1 & VAR_0;
 VAR_5 = VAR_3->vmcb->control.exit_code - VAR_1;

 if (VAR_5 >= 16) {
  VAR_6 = FUNC_1(&VAR_3->vcpu, VAR_4);
  FUNC_6(&VAR_3->vcpu, VAR_5 - 16, VAR_6, &VAR_7);
 } else {
  VAR_6 = FUNC_4(&VAR_3->vcpu, VAR_5);
  FUNC_2(&VAR_3->vcpu, VAR_4, VAR_6);
 }
 FUNC_3(&VAR_3->vcpu);

 return 1;
}
