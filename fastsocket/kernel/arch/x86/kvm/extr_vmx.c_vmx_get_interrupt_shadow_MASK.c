
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct kvm_vcpu *VAR_5, int VAR_6)
{
 u32 VAR_7 = FUNC_0(VAR_0);
 int VAR_8 = 0;

 if (VAR_7 & VAR_2)
  VAR_8 |= VAR_4;
 if (VAR_7 & VAR_1)
  VAR_8 |= VAR_3;

 return VAR_8 & VAR_6;
}
