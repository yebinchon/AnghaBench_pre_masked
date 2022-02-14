
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mmc_data {int timeout_ns; unsigned int timeout_clks; int flags; } ;
struct TYPE_4__ {unsigned int r2w_factor; unsigned int tacc_ns; unsigned int tacc_clks; } ;
struct mmc_card {TYPE_3__* host; TYPE_1__ csd; } ;
struct TYPE_5__ {int clock; } ;
struct TYPE_6__ {TYPE_2__ ios; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mmc_card const*) ;
 scalar_t__ FUNC_1 (struct mmc_card const*) ;
 scalar_t__ FUNC_2 (struct mmc_card const*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;

void FUNC_4(struct mmc_data *VAR_1, const struct mmc_card *VAR_2)
{
 unsigned int VAR_3;




 if (FUNC_2(VAR_2)) {
  VAR_1->timeout_ns = 1000000000;
  VAR_1->timeout_clks = 0;
  return;
 }




 VAR_3 = FUNC_1(VAR_2) ? 100 : 10;





 if (VAR_1->flags & VAR_0)
  VAR_3 <<= VAR_2->csd.r2w_factor;

 VAR_1->timeout_ns = VAR_2->csd.tacc_ns * VAR_3;
 VAR_1->timeout_clks = VAR_2->csd.tacc_clks * VAR_3;




 if (FUNC_1(VAR_2)) {
  unsigned int VAR_4, VAR_5;

  VAR_4 = VAR_1->timeout_ns / 1000;
  VAR_4 += VAR_1->timeout_clks * 1000 /
   (VAR_2->host->ios.clock / 1000);

  if (VAR_1->flags & VAR_0)




   VAR_5 = 300000;
  else
   VAR_5 = 100000;




  if (VAR_4 > VAR_5 || FUNC_0(VAR_2)) {
   VAR_1->timeout_ns = VAR_5 * 1000;
   VAR_1->timeout_clks = 0;
  }
 }






 if (FUNC_3(VAR_2->host)) {
  if (VAR_1->flags & VAR_0) {
   if (VAR_1->timeout_ns < 1000000000)
    VAR_1->timeout_ns = 1000000000;
  } else {
   if (VAR_1->timeout_ns < 100000000)
    VAR_1->timeout_ns = 100000000;
  }
 }
}
