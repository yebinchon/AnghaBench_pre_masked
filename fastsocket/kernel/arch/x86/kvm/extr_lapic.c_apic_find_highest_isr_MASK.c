
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_lapic {int highest_isr_cache; scalar_t__ regs; int isr_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(struct kvm_lapic *VAR_1)
{
 int VAR_2;
 if (!VAR_1->isr_count)
  return -1;
 if (FUNC_2(VAR_1->highest_isr_cache != -1))
  return VAR_1->highest_isr_cache;

 VAR_2 = FUNC_1(VAR_1->regs + VAR_0);
 FUNC_0(VAR_2 == -1 || VAR_2 >= 16);

 return VAR_2;
}
