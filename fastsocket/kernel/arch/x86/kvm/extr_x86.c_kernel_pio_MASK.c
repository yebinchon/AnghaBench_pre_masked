
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; int port; scalar_t__ in; } ;
struct TYPE_3__ {TYPE_2__ pio; } ;
struct kvm_vcpu {TYPE_1__ arch; int kvm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,void*) ;
 int FUNC_1 (int ,int ,int ,int ,void*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_1, void *VAR_2)
{

 int VAR_3;

 if (VAR_1->arch.pio.in)
  VAR_3 = FUNC_0(VAR_1->kvm, VAR_0, VAR_1->arch.pio.port,
        VAR_1->arch.pio.size, VAR_2);
 else
  VAR_3 = FUNC_1(VAR_1->kvm, VAR_0,
         VAR_1->arch.pio.port, VAR_1->arch.pio.size,
         VAR_2);
 return VAR_3;
}
