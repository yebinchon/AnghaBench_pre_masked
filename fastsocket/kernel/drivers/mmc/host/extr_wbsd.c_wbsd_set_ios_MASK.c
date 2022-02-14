
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wbsd_host {scalar_t__ clk; scalar_t__ bus_width; int lock; int ignore_timer; int flags; scalar_t__ base; } ;
struct mmc_ios {scalar_t__ power_mode; int clock; scalar_t__ chip_select; scalar_t__ bus_width; } ;
struct mmc_host {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_14 ;
 struct wbsd_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct wbsd_host*) ;
 scalar_t__ FUNC_8 (struct wbsd_host*,int ) ;
 int FUNC_9 (struct wbsd_host*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct mmc_host *VAR_15, struct mmc_ios *VAR_16)
{
 struct wbsd_host *VAR_17 = FUNC_2(VAR_15);
 u8 VAR_18, VAR_19, VAR_20;

 FUNC_5(&VAR_17->lock);





 if (VAR_16->power_mode == VAR_3)
  FUNC_7(VAR_17);

 if (VAR_16->clock >= 24000000)
  VAR_18 = VAR_6;
 else if (VAR_16->clock >= 16000000)
  VAR_18 = VAR_5;
 else if (VAR_16->clock >= 12000000)
  VAR_18 = VAR_4;
 else
  VAR_18 = VAR_7;





 if (VAR_18 != VAR_17->clk) {
  FUNC_9(VAR_17, VAR_11, VAR_18);
  VAR_17->clk = VAR_18;
 }




 if (VAR_16->power_mode != VAR_3) {
  VAR_20 = FUNC_1(VAR_17->base + VAR_8);
  VAR_20 &= ~VAR_13;
  FUNC_4(VAR_20, VAR_17->base + VAR_8);
 }






 VAR_19 = FUNC_8(VAR_17, VAR_12);
 if (VAR_16->chip_select == VAR_2) {
  FUNC_0(VAR_16->bus_width != VAR_1);
  VAR_19 |= VAR_9;
  VAR_17->flags |= VAR_10;
 } else {
  if (VAR_19 & VAR_9) {
   VAR_19 &= ~VAR_9;





   FUNC_3(&VAR_17->ignore_timer, VAR_14 + VAR_0 / 100);
  }
 }
 FUNC_9(VAR_17, VAR_12, VAR_19);





 VAR_17->bus_width = VAR_16->bus_width;

 FUNC_6(&VAR_17->lock);
}
