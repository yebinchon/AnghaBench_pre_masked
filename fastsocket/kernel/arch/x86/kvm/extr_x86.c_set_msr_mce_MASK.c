
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int mcg_cap; int mcg_status; int mcg_ctl; int* mce_banks; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;



__attribute__((used)) static int FUNC_0(struct kvm_vcpu *VAR_2, u32 VAR_3, u64 VAR_4)
{
 u64 VAR_5 = VAR_2->arch.mcg_cap;
 unsigned VAR_6 = VAR_5 & 0xff;

 switch (VAR_3) {
 case 128:
  VAR_2->arch.mcg_status = VAR_4;
  break;
 case 129:
  if (!(VAR_5 & VAR_0))
   return 1;
  if (VAR_4 != 0 && VAR_4 != ~(u64)0)
   return -1;
  VAR_2->arch.mcg_ctl = VAR_4;
  break;
 default:
  if (VAR_3 >= VAR_1 &&
      VAR_3 < VAR_1 + 4 * VAR_6) {
   u32 VAR_7 = VAR_3 - VAR_1;

   if ((VAR_7 & 0x3) == 0 &&
       VAR_4 != 0 && VAR_4 != ~(u64)0)
    return -1;
   VAR_2->arch.mce_banks[VAR_7] = VAR_4;
   break;
  }
  return 1;
 }
 return 0;
}
