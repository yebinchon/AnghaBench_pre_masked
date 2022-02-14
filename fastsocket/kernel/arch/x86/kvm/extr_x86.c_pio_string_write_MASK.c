
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_pio_request {int cur_count; int size; int port; } ;
struct TYPE_2__ {void* pio_data; struct kvm_pio_request pio; } ;
struct kvm_vcpu {int kvm; TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,void*) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_2)
{
 struct kvm_pio_request *VAR_3 = &VAR_2->arch.pio;
 void *VAR_4 = VAR_2->arch.pio_data;
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_3->cur_count; VAR_5++) {
  if (FUNC_0(VAR_2->kvm, VAR_1,
         VAR_3->port, VAR_3->size, VAR_4)) {
   VAR_6 = -VAR_0;
   break;
  }
  VAR_4 += VAR_3->size;
 }
 return VAR_6;
}
