
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mpc52xx_gpt_priv {int irqhost; TYPE_1__* regs; } ;
struct irq_desc {int dummy; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct mpc52xx_gpt_priv* FUNC_1 (unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(unsigned int VAR_1, struct irq_desc *VAR_2)
{
 struct mpc52xx_gpt_priv *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;
 u32 VAR_5;

 VAR_5 = FUNC_2(&VAR_3->regs->status) & VAR_0;
 if (VAR_5) {
  VAR_4 = FUNC_3(VAR_3->irqhost, 0);
  FUNC_0(VAR_4);
 }
}
