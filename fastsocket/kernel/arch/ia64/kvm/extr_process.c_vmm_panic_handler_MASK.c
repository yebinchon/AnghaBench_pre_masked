
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct kvm_vcpu {int dummy; } ;


 struct kvm_vcpu* VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,char*,int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_1(u64 VAR_3)
{
 struct kvm_vcpu *VAR_4 = VAR_0;
 VAR_2 = 0;
 FUNC_0(VAR_4, "Unexpected interruption occurs in VMM, vector:0x%lx\n",
   VAR_1[VAR_3]);
}
