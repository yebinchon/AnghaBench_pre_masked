
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int shadow_efer; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;
struct vcpu_vmx {int msr_offset_efer; TYPE_1__* guest_msrs; TYPE_3__ vcpu; } ;
struct TYPE_4__ {int data; int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_0(struct vcpu_vmx *VAR_5)
{
 int VAR_6 = VAR_5->msr_offset_efer;
 u64 VAR_7;
 u64 VAR_8;

 if (VAR_6 < 0)
  return 0;
 VAR_7 = VAR_5->vcpu.arch.shadow_efer;





 VAR_8 = VAR_2 | VAR_3;






 VAR_7 &= ~VAR_8;
 VAR_7 |= VAR_4 & VAR_8;
 VAR_5->guest_msrs[VAR_6].data = VAR_7;
 VAR_5->guest_msrs[VAR_6].mask = ~VAR_8;
 return 1;
}
