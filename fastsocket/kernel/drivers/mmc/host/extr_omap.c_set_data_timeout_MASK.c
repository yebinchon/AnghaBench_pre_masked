
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct mmc_request {TYPE_2__* data; } ;
struct mmc_omap_host {TYPE_1__* current_slot; } ;
struct TYPE_4__ {unsigned int timeout_ns; scalar_t__ timeout_clks; } ;
struct TYPE_3__ {int fclk_freq; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_omap_host*,int ) ;
 int FUNC_1 (struct mmc_omap_host*,int ,unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_2(struct mmc_omap_host *VAR_2, struct mmc_request *VAR_3)
{
 unsigned int VAR_4, VAR_5;
 u16 VAR_6;

 VAR_5 = 1000000000 / VAR_2->current_slot->fclk_freq;
 VAR_4 = VAR_3->data->timeout_ns / VAR_5;
 VAR_4 += VAR_3->data->timeout_clks;


 VAR_6 = FUNC_0(VAR_2, VAR_1);
 if (VAR_4 > 0xffff) {
  VAR_6 |= (1 << 5);
  VAR_4 /= 1024;
 } else
  VAR_6 &= ~(1 << 5);
 FUNC_1(VAR_2, VAR_1, VAR_6);
 FUNC_1(VAR_2, VAR_0, VAR_4);
}
