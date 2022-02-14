
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timer_mode_mask; } ;
struct kvm_lapic {TYPE_1__ lapic_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_lapic*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct kvm_lapic *VAR_2)
{
 return ((FUNC_0(VAR_2, VAR_0) &
  VAR_2->lapic_timer.timer_mode_mask) ==
   VAR_1);
}
