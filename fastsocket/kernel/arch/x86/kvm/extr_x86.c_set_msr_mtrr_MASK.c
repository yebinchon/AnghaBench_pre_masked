
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_5__ {int def_type; int enabled; TYPE_1__* var_ranges; int fixed_ranges; } ;
struct TYPE_6__ {int pat; TYPE_2__ mtrr_state; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_4__ {int mask_lo; int base_lo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_7, u32 VAR_8, u64 VAR_9)
{
 u64 *VAR_10 = (u64 *)&VAR_7->arch.mtrr_state.fixed_ranges;

 if (!FUNC_1(VAR_7, VAR_8, VAR_9))
  return 1;

 if (VAR_8 == VAR_1) {
  VAR_7->arch.mtrr_state.def_type = VAR_9;
  VAR_7->arch.mtrr_state.enabled = (VAR_9 & 0xc00) >> 10;
 } else if (VAR_8 == VAR_6)
  VAR_10[0] = VAR_9;
 else if (VAR_8 == VAR_2 || VAR_8 == VAR_3)
  VAR_10[1 + VAR_8 - VAR_2] = VAR_9;
 else if (VAR_8 >= VAR_4 && VAR_8 <= VAR_5)
  VAR_10[3 + VAR_8 - VAR_4] = VAR_9;
 else if (VAR_8 == VAR_0)
  VAR_7->arch.pat = VAR_9;
 else {
  int VAR_11, VAR_12;
  u64 *VAR_13;

  VAR_11 = (VAR_8 - 0x200) / 2;
  VAR_12 = VAR_8 - 0x200 - 2 * VAR_11;
  if (!VAR_12)
   VAR_13 =
     (u64 *)&VAR_7->arch.mtrr_state.var_ranges[VAR_11].base_lo;
  else
   VAR_13 =
     (u64 *)&VAR_7->arch.mtrr_state.var_ranges[VAR_11].mask_lo;
  *VAR_13 = VAR_9;
 }

 FUNC_0(VAR_7);
 return 0;
}
