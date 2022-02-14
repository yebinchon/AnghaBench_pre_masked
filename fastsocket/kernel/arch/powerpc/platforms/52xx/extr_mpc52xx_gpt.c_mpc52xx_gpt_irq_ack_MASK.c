
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpc52xx_gpt_priv {TYPE_1__* regs; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 struct mpc52xx_gpt_priv* FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_1)
{
 struct mpc52xx_gpt_priv *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(&VAR_2->regs->status, VAR_0);
}
