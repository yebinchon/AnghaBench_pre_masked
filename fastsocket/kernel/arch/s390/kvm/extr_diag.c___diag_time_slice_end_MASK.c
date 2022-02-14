
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int diagnose_44; } ;
struct kvm_vcpu {TYPE_1__ stat; } ;


 int FUNC_0 (struct kvm_vcpu*,int,char*,char*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_0)
{
 FUNC_0(VAR_0, 5, "%s", "diag time slice end");
 VAR_0->stat.diagnose_44++;
 FUNC_2(VAR_0);
 FUNC_3();
 FUNC_1(VAR_0);
 return 0;
}
