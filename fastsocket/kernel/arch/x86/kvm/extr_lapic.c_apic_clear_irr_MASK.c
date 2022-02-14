
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_lapic {int irr_pending; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct kvm_lapic*) ;

__attribute__((used)) static inline void FUNC_2(int VAR_1, struct kvm_lapic *VAR_2)
{
 VAR_2->irr_pending = 0;
 FUNC_0(VAR_1, VAR_2->regs + VAR_0);
 if (FUNC_1(VAR_2) != -1)
  VAR_2->irr_pending = 1;
}
