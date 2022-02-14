
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_omap_slot {int fclk_freq; TYPE_1__* host; } ;
struct TYPE_2__ {scalar_t__ fclk_enabled; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct mmc_omap_slot *VAR_0)
{
 unsigned long VAR_1;

 if (VAR_0 != ((void*)0) && VAR_0->host->fclk_enabled && VAR_0->fclk_freq > 0) {
  VAR_1 = (1000000000 + VAR_0->fclk_freq - 1) / VAR_0->fclk_freq;
  FUNC_0(8 * VAR_1);
 }
}
