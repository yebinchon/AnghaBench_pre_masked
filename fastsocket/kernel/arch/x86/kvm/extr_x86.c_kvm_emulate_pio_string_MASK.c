
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int size; unsigned long count; unsigned long cur_count; unsigned int port; int in; int string; int down; int rep; int guest_gva; } ;
struct TYPE_9__ {TYPE_3__ pio; } ;
struct kvm_vcpu {TYPE_4__ arch; TYPE_2__* run; } ;
typedef int gva_t ;
struct TYPE_10__ {int (* skip_emulated_instruction ) (struct kvm_vcpu*) ;} ;
struct TYPE_6__ {int size; int data_offset; unsigned long count; unsigned int port; int direction; } ;
struct TYPE_7__ {TYPE_1__ io; int exit_reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 TYPE_5__* VAR_6 ;
 unsigned int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*,char*) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (int,unsigned int,int,unsigned long) ;

int FUNC_10(struct kvm_vcpu *VAR_7, int VAR_8,
    int VAR_9, unsigned long VAR_10, int VAR_11,
    gva_t VAR_12, int VAR_13, unsigned VAR_14)
{
 unsigned VAR_15, VAR_16;
 int VAR_17 = 0;

 FUNC_9(!VAR_8, VAR_14, VAR_9, VAR_10);

 VAR_7->run->exit_reason = VAR_0;
 VAR_7->run->io.direction = VAR_8 ? VAR_1 : VAR_2;
 VAR_7->run->io.size = VAR_7->arch.pio.size = VAR_9;
 VAR_7->run->io.data_offset = VAR_3 * VAR_4;
 VAR_7->run->io.count = VAR_7->arch.pio.count = VAR_7->arch.pio.cur_count = VAR_10;
 VAR_7->run->io.port = VAR_7->arch.pio.port = VAR_14;
 VAR_7->arch.pio.in = VAR_8;
 VAR_7->arch.pio.string = 1;
 VAR_7->arch.pio.down = VAR_11;
 VAR_7->arch.pio.rep = VAR_13;

 if (!VAR_10) {
  VAR_6->skip_emulated_instruction(VAR_7);
  return 1;
 }

 if (!VAR_11)
  VAR_16 = VAR_4 - FUNC_3(VAR_12);
 else
  VAR_16 = FUNC_3(VAR_12) + VAR_9;
 VAR_15 = FUNC_2(VAR_10, (unsigned long)VAR_16 / VAR_9);
 if (!VAR_15)
  VAR_15 = 1;
 if (VAR_11) {



  FUNC_6(VAR_7, "guest string pio down\n");
  FUNC_1(VAR_7, 0);
  return 1;
 }
 VAR_7->run->io.count = VAR_15;
 VAR_7->arch.pio.cur_count = VAR_15;

 if (VAR_7->arch.pio.cur_count == VAR_7->arch.pio.count)
  VAR_6->skip_emulated_instruction(VAR_7);

 VAR_7->arch.pio.guest_gva = VAR_12;

 if (!VAR_7->arch.pio.in) {

  VAR_17 = FUNC_4(VAR_7);
  if (VAR_17 == VAR_5)
   return 1;
  if (VAR_17 == 0 && !FUNC_5(VAR_7)) {
   FUNC_0(VAR_7);
   if (VAR_7->arch.pio.count == 0)
    VAR_17 = 1;
  }
 }


 return VAR_17;
}
