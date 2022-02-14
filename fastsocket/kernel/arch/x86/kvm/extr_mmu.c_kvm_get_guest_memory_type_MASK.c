
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int mtrr_state; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int gfn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int,scalar_t__) ;

u8 FUNC_1(struct kvm_vcpu *VAR_3, gfn_t VAR_4)
{
 u8 VAR_5;

 VAR_5 = FUNC_0(&VAR_3->arch.mtrr_state, VAR_4 << VAR_1,
        (VAR_4 << VAR_1) + VAR_2);
 if (VAR_5 == 0xfe || VAR_5 == 0xff)
  VAR_5 = VAR_0;
 return VAR_5;
}
