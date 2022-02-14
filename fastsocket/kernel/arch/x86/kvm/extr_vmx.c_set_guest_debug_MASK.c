
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long dr7; } ;
struct kvm_vcpu {int guest_debug; TYPE_2__ arch; } ;
struct TYPE_3__ {unsigned long* debugreg; } ;
struct kvm_guest_debug {int control; TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_7, struct kvm_guest_debug *VAR_8)
{
 int VAR_9 = VAR_7->guest_debug;
 unsigned long VAR_10;

 VAR_7->guest_debug = VAR_8->control;
 if (!(VAR_7->guest_debug & VAR_2))
  VAR_7->guest_debug = 0;

 if (VAR_7->guest_debug & VAR_4)
  FUNC_2(VAR_0, VAR_8->arch.debugreg[7]);
 else
  FUNC_2(VAR_0, VAR_7->arch.dr7);

 VAR_10 = FUNC_1(VAR_1);
 if (VAR_7->guest_debug & VAR_3)
  VAR_10 |= VAR_6 | VAR_5;
 else if (VAR_9 & VAR_3)
  VAR_10 &= ~(VAR_6 | VAR_5);
 FUNC_2(VAR_1, VAR_10);

 FUNC_0(VAR_7);

 return 0;
}
