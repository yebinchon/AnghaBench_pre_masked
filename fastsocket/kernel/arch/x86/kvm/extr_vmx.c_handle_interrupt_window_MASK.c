
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int irq_window_exits; } ;
struct kvm_vcpu {TYPE_2__* run; int kvm; TYPE_1__ stat; } ;
struct TYPE_4__ {int exit_reason; scalar_t__ request_interrupt_window; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_3)
{
 u32 VAR_4;


 VAR_4 = FUNC_2(VAR_1);
 VAR_4 &= ~VAR_0;
 FUNC_3(VAR_1, VAR_4);

 ++VAR_3->stat.irq_window_exits;





 if (!FUNC_0(VAR_3->kvm) &&
     VAR_3->run->request_interrupt_window &&
     !FUNC_1(VAR_3)) {
  VAR_3->run->exit_reason = VAR_2;
  return 0;
 }
 return 1;
}
