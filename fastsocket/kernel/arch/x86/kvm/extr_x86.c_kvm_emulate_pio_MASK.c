
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int size; int count; int cur_count; unsigned int port; int in; scalar_t__ rep; scalar_t__ down; scalar_t__ string; } ;
struct TYPE_8__ {int pio_data; TYPE_3__ pio; } ;
struct kvm_vcpu {TYPE_4__ arch; TYPE_2__* run; } ;
struct TYPE_5__ {int size; int data_offset; int count; unsigned int port; int direction; } ;
struct TYPE_6__ {TYPE_1__ io; int exit_reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 unsigned long FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (int ,unsigned long*,int) ;
 int FUNC_4 (int,unsigned int,int,int) ;

int FUNC_5(struct kvm_vcpu *VAR_6, int VAR_7, int VAR_8, unsigned VAR_9)
{
 unsigned long VAR_10;

 FUNC_4(!VAR_7, VAR_9, VAR_8, 1);

 VAR_6->run->exit_reason = VAR_0;
 VAR_6->run->io.direction = VAR_7 ? VAR_1 : VAR_2;
 VAR_6->run->io.size = VAR_6->arch.pio.size = VAR_8;
 VAR_6->run->io.data_offset = VAR_3 * VAR_4;
 VAR_6->run->io.count = VAR_6->arch.pio.count = VAR_6->arch.pio.cur_count = 1;
 VAR_6->run->io.port = VAR_6->arch.pio.port = VAR_9;
 VAR_6->arch.pio.in = VAR_7;
 VAR_6->arch.pio.string = 0;
 VAR_6->arch.pio.down = 0;
 VAR_6->arch.pio.rep = 0;

 VAR_10 = FUNC_2(VAR_6, VAR_5);
 FUNC_3(VAR_6->arch.pio_data, &VAR_10, 4);

 if (!FUNC_1(VAR_6, VAR_6->arch.pio_data)) {
  FUNC_0(VAR_6);
  return 1;
 }
 return 0;
}
