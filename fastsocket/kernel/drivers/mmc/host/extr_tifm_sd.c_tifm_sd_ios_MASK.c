
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tifm_sd {int clk_freq; unsigned int clk_div; int open_drain; struct tifm_dev* dev; } ;
struct tifm_dev {int lock; scalar_t__ addr; int dev; } ;
struct mmc_ios {int clock; int bus_mode; int bus_width; int power_mode; int chip_select; int vdd; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int,int ,int ,int ,int ,int ) ;
 struct tifm_sd* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct mmc_host *VAR_7, struct mmc_ios *VAR_8)
{
 struct tifm_sd *VAR_9 = FUNC_1(VAR_7);
 struct tifm_dev *VAR_10 = VAR_9->dev;
 unsigned int VAR_11, VAR_12;
 unsigned long VAR_13;

 FUNC_3(&VAR_10->lock, VAR_13);

 FUNC_0(&VAR_10->dev, "ios: clock = %u, vdd = %x, bus_mode = %x, "
  "chip_select = %x, power_mode = %x, bus_width = %x\n",
  VAR_8->clock, VAR_8->vdd, VAR_8->bus_mode, VAR_8->chip_select,
  VAR_8->power_mode, VAR_8->bus_width);

 if (VAR_8->bus_width == VAR_1) {
  FUNC_5(VAR_5 | FUNC_2(VAR_10->addr + VAR_3),
         VAR_10->addr + VAR_3);
 } else {
  FUNC_5((~VAR_5)
         & FUNC_2(VAR_10->addr + VAR_3),
         VAR_10->addr + VAR_3);
 }

 if (VAR_8->clock) {
  VAR_11 = 20000000 / VAR_8->clock;
  if (!VAR_11)
   VAR_11 = 1;

  VAR_12 = 24000000 / VAR_8->clock;
  if (!VAR_12)
   VAR_12 = 1;

  if ((20000000 / VAR_11) > VAR_8->clock)
   VAR_11++;
  if ((24000000 / VAR_12) > VAR_8->clock)
   VAR_12++;
  if ((20000000 / VAR_11) > (24000000 / VAR_12)) {
   VAR_9->clk_freq = 20000000;
   VAR_9->clk_div = VAR_11;
   FUNC_5((~VAR_4)
          & FUNC_2(VAR_10->addr + VAR_2),
          VAR_10->addr + VAR_2);
  } else {
   VAR_9->clk_freq = 24000000;
   VAR_9->clk_div = VAR_12;
   FUNC_5(VAR_4
          | FUNC_2(VAR_10->addr + VAR_2),
          VAR_10->addr + VAR_2);
  }
 } else {
  VAR_9->clk_div = 0;
 }
 VAR_9->clk_div &= VAR_6;
 FUNC_5(VAR_9->clk_div
        | ((~VAR_6)
    & FUNC_2(VAR_10->addr + VAR_3)),
        VAR_10->addr + VAR_3);

 VAR_9->open_drain = (VAR_8->bus_mode == VAR_0);





 FUNC_4(&VAR_10->lock, VAR_13);
}
