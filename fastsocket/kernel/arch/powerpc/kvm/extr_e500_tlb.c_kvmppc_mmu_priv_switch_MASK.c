
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_e500 {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct kvmppc_vcpu_e500*,int,int) ;
 int FUNC_2 () ;
 struct kvmppc_vcpu_e500* FUNC_3 (struct kvm_vcpu*) ;

void FUNC_4(struct kvm_vcpu *VAR_0, int VAR_1)
{
 if (VAR_1) {
  struct kvmppc_vcpu_e500 *VAR_2 = FUNC_3(VAR_0);
  int VAR_3;


  for (VAR_3 = 0; VAR_3 < FUNC_2(); VAR_3++)
   FUNC_1(VAR_2, 1, VAR_3);

  FUNC_0();
 }
}
