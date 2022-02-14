
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ launched; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (long) ;
 int FUNC_5 (long) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_0)
{
 int VAR_1;
 long VAR_2;
 FUNC_5(VAR_2);
 VAR_1 = FUNC_2(VAR_0);
 FUNC_4(VAR_2);
 if (VAR_1)
  goto fail;

 VAR_0->arch.launched = 0;
 FUNC_1(VAR_0);
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  goto fail;

 FUNC_3(VAR_0);
 VAR_1 = 0;
fail:
 return VAR_1;
}
