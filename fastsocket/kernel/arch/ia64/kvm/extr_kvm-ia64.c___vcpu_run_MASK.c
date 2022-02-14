
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union context {int dummy; } context ;
struct TYPE_4__ {int launched; } ;
struct kvm_vcpu {TYPE_2__* kvm; int requests; TYPE_1__ arch; } ;
struct kvm_run {int exit_reason; } ;
struct TYPE_6__ {int (* tramp_entry ) (union context*,union context*) ;} ;
struct TYPE_5__ {int srcu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int VAR_4 ;
 union context* FUNC_2 (struct kvm_vcpu*) ;
 union context* FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct kvm_run*,struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 TYPE_3__* VAR_5 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int ,int *) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (union context*,union context*) ;

__attribute__((used)) static int FUNC_20(struct kvm_vcpu *VAR_6, struct kvm_run *VAR_7)
{
 union context *VAR_8, *VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = FUNC_17(&VAR_6->kvm->srcu);

again:
 if (FUNC_16(VAR_4)) {
  VAR_10 = -VAR_0;
  VAR_7->exit_reason = VAR_2;
  goto out;
 }

 FUNC_13();
 FUNC_10();


 VAR_8 = FUNC_3(VAR_6);
 VAR_9 = FUNC_2(VAR_6);

 FUNC_1(VAR_3, &VAR_6->requests);

 VAR_10 = FUNC_9(VAR_6);
 if (VAR_10 < 0)
  goto vcpu_run_fail;

 FUNC_18(&VAR_6->kvm->srcu, VAR_11);
 FUNC_4();




 VAR_5->tramp_entry(VAR_8, VAR_9);

 FUNC_8(VAR_6);

 VAR_6->arch.launched = 1;
 FUNC_15(VAR_3, &VAR_6->requests);
 FUNC_11();







 FUNC_0();
 FUNC_5();
 FUNC_14();

 VAR_11 = FUNC_17(&VAR_6->kvm->srcu);

 VAR_10 = FUNC_6(VAR_7, VAR_6);

 if (VAR_10 > 0) {
  if (!FUNC_12())
   goto again;
 }

out:
 FUNC_18(&VAR_6->kvm->srcu, VAR_11);
 if (VAR_10 > 0) {
  FUNC_7(VAR_6);
  VAR_11 = FUNC_17(&VAR_6->kvm->srcu);
  goto again;
 }

 return VAR_10;

vcpu_run_fail:
 FUNC_11();
 FUNC_14();
 VAR_7->exit_reason = VAR_1;
 goto out;
}
