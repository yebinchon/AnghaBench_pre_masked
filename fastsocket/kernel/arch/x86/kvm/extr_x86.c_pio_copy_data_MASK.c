
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {unsigned int size; unsigned int cur_count; scalar_t__ in; int guest_gva; } ;
struct TYPE_4__ {TYPE_1__ pio; void* pio_data; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
typedef int gva_t ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_1 (int ,void*,unsigned int,struct kvm_vcpu*,int *) ;
 int FUNC_2 (int ,void*,unsigned int,struct kvm_vcpu*,int *) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_1)
{
 void *VAR_2 = VAR_1->arch.pio_data;
 gva_t VAR_3 = VAR_1->arch.pio.guest_gva;
 unsigned VAR_4;
 int VAR_5;
 u32 VAR_6;

 VAR_4 = VAR_1->arch.pio.size * VAR_1->arch.pio.cur_count;
 if (VAR_1->arch.pio.in)
  VAR_5 = FUNC_2(VAR_3, VAR_2, VAR_4, VAR_1, &VAR_6);
 else
  VAR_5 = FUNC_1(VAR_3, VAR_2, VAR_4, VAR_1, &VAR_6);

 if (VAR_5 == VAR_0)
  FUNC_0(VAR_1, VAR_3, VAR_6);

 return VAR_5;
}
