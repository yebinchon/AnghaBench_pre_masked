
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 unsigned long FUNC_0 (int,int) ;
 unsigned long FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,unsigned long) ;

void FUNC_3(struct kvm_vcpu *VAR_0, unsigned long VAR_1)
{
 VAR_1 = (VAR_1 & FUNC_0(0, 32)) | (FUNC_1(VAR_0) & FUNC_0(32, 32));
 FUNC_2(VAR_0, VAR_1);
}
