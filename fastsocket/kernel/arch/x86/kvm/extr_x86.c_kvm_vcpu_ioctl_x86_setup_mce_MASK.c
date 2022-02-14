
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int mcg_cap; int mcg_ctl; int* mce_banks; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_4,
     u64 VAR_5)
{
 int VAR_6;
 unsigned VAR_7 = VAR_5 & 0xff, VAR_8;

 FUNC_0(VAR_4);
 VAR_6 = -VAR_0;
 if (!VAR_7 || VAR_7 >= VAR_1)
  goto out;
 if (VAR_5 & ~(VAR_2 | 0xff | 0xff0000))
  goto out;
 VAR_6 = 0;
 VAR_4->arch.mcg_cap = VAR_5;

 if (VAR_5 & VAR_3)
  VAR_4->arch.mcg_ctl = ~(u64)0;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  VAR_4->arch.mce_banks[VAR_8*4] = ~(u64)0;
out:
 FUNC_1(VAR_4);
 return VAR_6;
}
