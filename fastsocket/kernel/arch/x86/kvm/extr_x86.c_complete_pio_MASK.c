
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_pio_request {long size; long cur_count; long count; scalar_t__ in; scalar_t__ down; scalar_t__ rep; int string; } ;
struct TYPE_2__ {int pio_data; struct kvm_pio_request pio; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ,unsigned long) ;
 int FUNC_2 (unsigned long*,int ,long) ;
 int FUNC_3 (struct kvm_vcpu*) ;

int FUNC_4(struct kvm_vcpu *VAR_4)
{
 struct kvm_pio_request *VAR_5 = &VAR_4->arch.pio;
 long VAR_6;
 int VAR_7;
 unsigned long VAR_8;

 if (!VAR_5->string) {
  if (VAR_5->in) {
   VAR_8 = FUNC_0(VAR_4, VAR_0);
   FUNC_2(&VAR_8, VAR_4->arch.pio_data, VAR_5->size);
   FUNC_1(VAR_4, VAR_0, VAR_8);
  }
 } else {
  if (VAR_5->in) {
   VAR_7 = FUNC_3(VAR_4);
   if (VAR_7)
    goto out;
  }

  VAR_6 = 1;
  if (VAR_5->rep) {
   VAR_6 *= VAR_5->cur_count;




   VAR_8 = FUNC_0(VAR_4, VAR_1);
   VAR_8 -= VAR_6;
   FUNC_1(VAR_4, VAR_1, VAR_8);
  }
  if (VAR_5->down)
   VAR_6 = -VAR_6;
  VAR_6 *= VAR_5->size;
  if (VAR_5->in) {
   VAR_8 = FUNC_0(VAR_4, VAR_2);
   VAR_8 += VAR_6;
   FUNC_1(VAR_4, VAR_2, VAR_8);
  } else {
   VAR_8 = FUNC_0(VAR_4, VAR_3);
   VAR_8 += VAR_6;
   FUNC_1(VAR_4, VAR_3, VAR_8);
  }
 }
out:
 VAR_5->count -= VAR_5->cur_count;
 VAR_5->cur_count = 0;

 return 0;
}
