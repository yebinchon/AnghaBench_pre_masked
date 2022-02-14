
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int mmio_data; int mmio_is_write; } ;
struct kvm_mmio_req {int state; int data; } ;


 int VAR_0 ;
 struct kvm_mmio_req* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1)
{
 struct kvm_mmio_req *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_1->mmio_is_write)
  FUNC_1(&VAR_2->data, VAR_1->mmio_data, 8);
 VAR_2->state = VAR_0;
}
