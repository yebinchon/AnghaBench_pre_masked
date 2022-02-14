
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct kvm_vcpu {int guest_debug; scalar_t__ fpu_active; } ;
struct TYPE_3__ {scalar_t__ vm86_active; } ;
struct TYPE_4__ {TYPE_1__ rmode; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_2__* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_10)
{
 u32 VAR_11;

 VAR_11 = (1u << VAR_7) | (1u << VAR_8) | (1u << VAR_5)
  | (1u << VAR_6);




 VAR_11 |= 1u << VAR_1;
 if (VAR_10->guest_debug & VAR_3) {
  if (VAR_10->guest_debug & VAR_4)
   VAR_11 |= 1u << VAR_0;
 }
 if (FUNC_0(VAR_10)->rmode.vm86_active)
  VAR_11 = ~0;
 if (VAR_9)
  VAR_11 &= ~(1u << VAR_7);
 if (VAR_10->fpu_active)
  VAR_11 &= ~(1u << VAR_6);
 FUNC_1(VAR_2, VAR_11);
}
