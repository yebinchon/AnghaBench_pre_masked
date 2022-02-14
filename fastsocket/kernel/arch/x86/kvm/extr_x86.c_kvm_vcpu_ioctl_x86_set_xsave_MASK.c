
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
struct TYPE_6__ {TYPE_1__* state; } ;
struct TYPE_5__ {TYPE_3__ guest_fpu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct i387_fxsave_struct {int dummy; } ;
struct TYPE_4__ {int fxsave; int xsave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_5,
     struct kvm_xsave *VAR_6)
{
 u64 VAR_7 =
  *(u64 *)&VAR_6->region[VAR_1 / sizeof(u32)];

 if (VAR_3)
  FUNC_0(&VAR_5->arch.guest_fpu.state->xsave,
   VAR_6->region, VAR_4);
 else {
  if (VAR_7 & ~VAR_2)
   return -VAR_0;
  FUNC_0(&VAR_5->arch.guest_fpu.state->fxsave,
   VAR_6->region, sizeof(struct i387_fxsave_struct));
 }
 return 0;
}
