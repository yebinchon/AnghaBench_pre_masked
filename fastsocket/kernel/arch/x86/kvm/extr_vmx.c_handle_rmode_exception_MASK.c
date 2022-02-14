
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct kvm_vcpu {int guest_debug; } ;
struct TYPE_4__ {int event_exit_inst_len; } ;
struct TYPE_5__ {TYPE_1__ arch; } ;
struct TYPE_6__ {TYPE_2__ vcpu; } ;







 scalar_t__ VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int) ;
 TYPE_3__* FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_5,
      int VAR_6, u32 VAR_7)
{




 if (((VAR_6 == 132) || (VAR_6 == 129)) && VAR_7 == 0)
  if (FUNC_0(VAR_5, 0) == VAR_0)
   return 1;





 switch (VAR_6) {
 case 135:
  if (VAR_5->guest_debug &
      (VAR_1 | VAR_2))
   return 0;
  FUNC_1(VAR_5, VAR_6);
  return 1;
 case 137:




  FUNC_2(VAR_5)->vcpu.arch.event_exit_inst_len =
   FUNC_3(VAR_4);
  if (VAR_5->guest_debug & VAR_3)
   return 0;

 case 134:
 case 130:
 case 136:
 case 128:
 case 133:
 case 129:
 case 132:
 case 131:
  FUNC_1(VAR_5, VAR_6);
  return 1;
 }
 return 0;
}
