
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct kvm_xsave {int * region; } ;
struct TYPE_4__ {TYPE_2__* state; } ;
struct TYPE_6__ {TYPE_1__ guest_fpu; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct i387_fxsave_struct {int dummy; } ;
struct TYPE_5__ {int fxsave; int xsave; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_4,
      struct kvm_xsave *VAR_5)
{
 if (VAR_2)
  FUNC_0(VAR_5->region,
   &VAR_4->arch.guest_fpu.state->xsave,
   VAR_3);
 else {
  FUNC_0(VAR_5->region,
   &VAR_4->arch.guest_fpu.state->fxsave,
   sizeof(struct i387_fxsave_struct));
  *(u64 *)&VAR_5->region[VAR_0 / sizeof(u32)] =
   VAR_1;
 }
}
