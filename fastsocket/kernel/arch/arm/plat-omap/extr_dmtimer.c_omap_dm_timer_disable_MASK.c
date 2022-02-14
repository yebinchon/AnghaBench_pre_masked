
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dm_timer {scalar_t__ enabled; int fclk; int iclk; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct omap_dm_timer *VAR_0)
{
 if (!VAR_0->enabled)
  return;

 FUNC_0(VAR_0->iclk);
 FUNC_0(VAR_0->fclk);

 VAR_0->enabled = 0;
}
