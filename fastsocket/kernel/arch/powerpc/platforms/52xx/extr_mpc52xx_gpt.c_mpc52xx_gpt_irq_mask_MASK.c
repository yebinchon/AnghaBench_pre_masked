
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpc52xx_gpt_priv {int lock; TYPE_1__* regs; } ;
struct TYPE_2__ {int mode; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct mpc52xx_gpt_priv* FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_1)
{
 struct mpc52xx_gpt_priv *VAR_2 = FUNC_1(VAR_1);
 unsigned long VAR_3;

 FUNC_2(&VAR_2->lock, VAR_3);
 FUNC_0(&VAR_2->regs->mode, VAR_0);
 FUNC_3(&VAR_2->lock, VAR_3);
}
