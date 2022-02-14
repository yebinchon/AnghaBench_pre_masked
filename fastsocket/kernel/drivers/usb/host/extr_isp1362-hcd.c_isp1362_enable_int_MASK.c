
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct isp1362_hcd {int irqenb; scalar_t__ irq_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct isp1362_hcd*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct isp1362_hcd *VAR_2, u16 VAR_3)
{
 if ((VAR_2->irqenb | VAR_3) == VAR_2->irqenb)
  return;
 if (VAR_3 & ~VAR_2->irqenb)
  FUNC_0(VAR_2, VAR_0, VAR_3 & ~VAR_2->irqenb);
 VAR_2->irqenb |= VAR_3;
 if (VAR_2->irq_active)
  return;
 FUNC_0(VAR_2, VAR_1, VAR_2->irqenb);
}
