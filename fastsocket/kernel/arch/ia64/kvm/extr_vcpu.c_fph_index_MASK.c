
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_pt_regs {int cr_ifs; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (int,unsigned long,scalar_t__) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct kvm_pt_regs *VAR_1,
      long VAR_2)
{
 unsigned long VAR_3 = (VAR_1->cr_ifs >> 25) & 0x7f;
 return FUNC_0(96, VAR_3, (VAR_2 - VAR_0));
}
