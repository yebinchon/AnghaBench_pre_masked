
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_omap_host {unsigned int fclk_enabled; int clk_lock; int fclk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct mmc_omap_host *VAR_0, unsigned int VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0->clk_lock, VAR_2);
 if (VAR_0->fclk_enabled != VAR_1) {
  VAR_0->fclk_enabled = VAR_1;
  if (VAR_1)
   FUNC_1(VAR_0->fclk);
  else
   FUNC_0(VAR_0->fclk);
 }
 FUNC_3(&VAR_0->clk_lock, VAR_2);
}
