
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct stmp3xxx_pinmux_bank {int virq; int irqstat; } ;
struct irq_desc {int dummy; } ;
struct TYPE_3__ {int (* handle_irq ) (int,TYPE_1__*) ;} ;


 int FUNC_0 (int ) ;
 struct stmp3xxx_pinmux_bank* FUNC_1 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(u32 VAR_1, struct irq_desc *VAR_2)
{
 struct stmp3xxx_pinmux_bank *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = VAR_3->virq;
 u32 VAR_5 = FUNC_0(VAR_3->irqstat);

 while (VAR_5) {
  if (VAR_5 & 1)
   VAR_0[VAR_4].handle_irq(VAR_4,
    &VAR_0[VAR_4]);
  VAR_4++;
  VAR_5 >>= 1;
 }
}
