
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_omap_slot {int fclk_freq; struct mmc_omap_host* host; } ;
struct mmc_omap_host {int fclk; } ;
struct mmc_ios {int clock; scalar_t__ bus_width; } ;
struct mmc_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct mmc_omap_slot* FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_1, struct mmc_ios *VAR_2)
{
 struct mmc_omap_slot *VAR_3 = FUNC_1(VAR_1);
 struct mmc_omap_host *VAR_4 = VAR_3->host;
 int VAR_5 = FUNC_0(VAR_4->fclk);
 int VAR_6;

 if (VAR_2->clock == 0)
  return 0;

 VAR_6 = VAR_5 / VAR_2->clock;
 if (VAR_6 < 1)
  VAR_6 = 1;

 if (VAR_5 / VAR_6 > VAR_2->clock)
  VAR_6++;

 if (VAR_6 > 250)
  VAR_6 = 250;

 VAR_3->fclk_freq = VAR_5 / VAR_6;

 if (VAR_2->bus_width == VAR_0)
  VAR_6 |= 1 << 15;

 return VAR_6;
}
