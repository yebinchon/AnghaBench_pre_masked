
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union cpuid3_t {int number; int value; } ;
struct TYPE_6__ {int d_vmsw; } ;
struct TYPE_5__ {int a_from_int_cr; int a_to_int_cr; int a_from_psr; int a_from_cpuid; int a_cover; int a_bsw; int a_int; } ;
struct vpd {int virt_env_vaddr; TYPE_3__ vdc; TYPE_2__ vac; int * vcpuid; } ;
struct TYPE_4__ {int vpd; } ;
struct kvm_vcpu {TYPE_1__ arch; int kvm; } ;


 scalar_t__ FUNC_0 (struct vpd*) ;
 int VAR_0 ;
 int FUNC_1 (struct vpd*) ;
 int FUNC_2 (int) ;
 struct vpd* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_1)
{
 int VAR_2;
 union cpuid3_t VAR_3;
 struct vpd *VAR_4 = FUNC_3(VAR_1->kvm, VAR_1->arch.vpd);

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);


 for (VAR_2 = 0; VAR_2 < 5; VAR_2++)
  VAR_4->vcpuid[VAR_2] = FUNC_2(VAR_2);


 VAR_3 = VAR_4->vcpuid[3];
 VAR_3 = 4;
 VAR_4->vcpuid[3] = VAR_3;


 VAR_4->vac.a_from_int_cr = 1;
 VAR_4->vac.a_to_int_cr = 1;
 VAR_4->vac.a_from_psr = 1;
 VAR_4->vac.a_from_cpuid = 1;
 VAR_4->vac.a_cover = 1;
 VAR_4->vac.a_bsw = 1;
 VAR_4->vac.a_int = 1;
 VAR_4->vdc.d_vmsw = 1;


 VAR_4->virt_env_vaddr = VAR_0;

 return 0;
}
