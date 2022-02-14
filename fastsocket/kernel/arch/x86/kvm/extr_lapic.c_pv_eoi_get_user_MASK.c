
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ pv_eoi; } ;
struct kvm_vcpu {TYPE_2__ arch; int kvm; } ;


 int FUNC_0 (int ,int *,int *,int) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_0, u8 *VAR_1)
{

 return FUNC_0(VAR_0->kvm, &VAR_0->arch.pv_eoi.data, VAR_1,
          sizeof(*VAR_1));
}
