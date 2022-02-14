
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mmc_omap_slot {int fclk_freq; } ;
struct mmc_omap_host {struct mmc_omap_slot* current_slot; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_omap_host*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct mmc_omap_host*,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct mmc_omap_host *VAR_3, int VAR_4)
{
 struct mmc_omap_slot *VAR_5 = VAR_3->current_slot;
 unsigned int VAR_6, VAR_7, VAR_8;
 u16 VAR_9 = 0;


 VAR_8 = (120*1000000 + VAR_5->fclk_freq - 1)/VAR_5->fclk_freq;
 VAR_6 = 0;
 while (VAR_6 < VAR_4) {
  FUNC_1(VAR_3, VAR_2, 0xFFFF);
  FUNC_1(VAR_3, VAR_0, (3 << 12) | (1 << 7));

  VAR_7 = 0;
  while (VAR_7 < VAR_8) {
   VAR_9 = FUNC_0(VAR_3, VAR_2);
   if (VAR_9 & VAR_1)
    goto out;
   FUNC_2(1);
   VAR_7++;
  }

  VAR_6++;
 }
out:
 FUNC_1(VAR_3, VAR_2, VAR_9);
}
