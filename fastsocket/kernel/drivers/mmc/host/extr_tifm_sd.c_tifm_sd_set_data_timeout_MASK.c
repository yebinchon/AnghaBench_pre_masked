
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tifm_sd {unsigned long clk_freq; unsigned long clk_div; struct tifm_dev* dev; } ;
struct tifm_dev {scalar_t__ addr; } ;
struct mmc_data {unsigned int timeout_clks; unsigned long timeout_ns; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct tifm_sd *VAR_4,
         struct mmc_data *VAR_5)
{
 struct tifm_dev *VAR_6 = VAR_4->dev;
 unsigned int VAR_7 = VAR_5->timeout_clks;

 if (VAR_3)
  return;

 VAR_7 += VAR_5->timeout_ns /
   ((1000000000UL / VAR_4->clk_freq) * VAR_4->clk_div);

 if (VAR_7 < 0xffff) {
  FUNC_1(VAR_7, VAR_6->addr + VAR_0);
  FUNC_1((~VAR_2)
         & FUNC_0(VAR_6->addr + VAR_1),
         VAR_6->addr + VAR_1);
 } else {
  VAR_7 = (VAR_7 >> 10) + 1;
  if (VAR_7 > 0xffff)
   VAR_7 = 0;
  FUNC_1(VAR_7, VAR_6->addr + VAR_0);
  FUNC_1(VAR_2
         | FUNC_0(VAR_6->addr + VAR_1),
         VAR_6->addr + VAR_1);
 }
}
