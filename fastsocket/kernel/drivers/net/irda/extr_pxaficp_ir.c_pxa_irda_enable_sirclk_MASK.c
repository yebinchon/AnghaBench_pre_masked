
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_irda {int sir_clk; int cur_clk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct pxa_irda *VAR_0)
{
 VAR_0->cur_clk = VAR_0->sir_clk;
 FUNC_0(VAR_0->sir_clk);
}
