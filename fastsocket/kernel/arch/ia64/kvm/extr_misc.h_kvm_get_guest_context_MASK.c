
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union context {int dummy; } context ;
struct TYPE_2__ {union context guest; } ;
struct kvm_vcpu {int kvm; TYPE_1__ arch; } ;


 union context* FUNC_0 (int ,union context*) ;

__attribute__((used)) static inline union context *FUNC_1(struct kvm_vcpu *VAR_0)
{
 union context *VAR_1 = &VAR_0->arch.guest;
 return FUNC_0(VAR_0->kvm, VAR_1);
}
