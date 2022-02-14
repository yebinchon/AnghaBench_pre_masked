
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int db; int l; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_segment*,int ) ;

void FUNC_1(struct kvm_vcpu *VAR_1, int *VAR_2, int *VAR_3)
{
 struct kvm_segment VAR_4;

 FUNC_0(VAR_1, &VAR_4, VAR_0);
 *VAR_2 = VAR_4.db;
 *VAR_3 = VAR_4.l;
}
