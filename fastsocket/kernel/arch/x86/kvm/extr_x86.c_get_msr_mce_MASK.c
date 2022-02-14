
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int mcg_cap; int mcg_ctl; int mcg_status; int* mce_banks; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;






__attribute__((used)) static int FUNC_0(struct kvm_vcpu *VAR_2, u32 VAR_3, u64 *VAR_4)
{
 u64 VAR_5;
 u64 VAR_6 = VAR_2->arch.mcg_cap;
 unsigned VAR_7 = VAR_6 & 0xff;

 switch (VAR_3) {
 case 129:
 case 128:
  VAR_5 = 0;
  break;
 case 132:
  VAR_5 = VAR_2->arch.mcg_cap;
  break;
 case 131:
  if (!(VAR_6 & VAR_0))
   return 1;
  VAR_5 = VAR_2->arch.mcg_ctl;
  break;
 case 130:
  VAR_5 = VAR_2->arch.mcg_status;
  break;
 default:
  if (VAR_3 >= VAR_1 &&
      VAR_3 < VAR_1 + 4 * VAR_7) {
   u32 VAR_8 = VAR_3 - VAR_1;
   VAR_5 = VAR_2->arch.mce_banks[VAR_8];
   break;
  }
  return 1;
 }
 *VAR_4 = VAR_5;
 return 0;
}
