
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {unsigned long cr2; } ;
struct TYPE_3__ {int pf_guest; } ;
struct kvm_vcpu {TYPE_2__ arch; TYPE_1__ stat; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ,int ) ;

void FUNC_1(struct kvm_vcpu *VAR_1, unsigned long VAR_2,
      u32 VAR_3)
{
 ++VAR_1->stat.pf_guest;
 VAR_1->arch.cr2 = VAR_2;
 FUNC_0(VAR_1, VAR_0, VAR_3);
}
