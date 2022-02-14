
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {TYPE_1__* run; } ;
struct TYPE_2__ {int exit_reason; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct kvm_vcpu *VAR_1)
{
 VAR_1->run->exit_reason = VAR_0;
 return 0;
}
