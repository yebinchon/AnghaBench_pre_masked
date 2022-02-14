
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_lapic {scalar_t__ isr_count; int highest_isr_cache; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(int VAR_1, struct kvm_lapic *VAR_2)
{
 if (FUNC_1(VAR_1, VAR_2->regs + VAR_0))
  --VAR_2->isr_count;
 FUNC_0(VAR_2->isr_count < 0);
 VAR_2->highest_isr_cache = -1;
}
