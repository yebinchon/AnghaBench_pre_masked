
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {unsigned long cr3; } ;
struct kvm_vcpu {TYPE_3__* kvm; TYPE_1__ arch; } ;
struct TYPE_5__ {unsigned long ept_identity_map_addr; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;
 u64 VAR_6;

 VAR_5 = VAR_4;
 if (VAR_2) {
  VAR_6 = FUNC_0(VAR_4);
  FUNC_2(VAR_0, VAR_6);
  VAR_5 = FUNC_1(VAR_3) ? VAR_3->arch.cr3 :
   VAR_3->kvm->arch.ept_identity_map_addr;
 }

 FUNC_4(VAR_3);
 FUNC_3(VAR_1, VAR_5);
}
