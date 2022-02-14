
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_lapic {scalar_t__ isr_count; int highest_isr_cache; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(int VAR_2, struct kvm_lapic *VAR_3)
{
 if (!FUNC_1(VAR_2, VAR_3->regs + VAR_0))
  ++VAR_3->isr_count;
 FUNC_0(VAR_3->isr_count > VAR_1);





 VAR_3->highest_isr_cache = VAR_2;
}
