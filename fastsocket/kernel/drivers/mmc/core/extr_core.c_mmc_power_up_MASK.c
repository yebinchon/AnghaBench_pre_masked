
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vdd; int clock; int power_mode; int timing; int bus_width; int bus_mode; int chip_select; } ;
struct mmc_host {int f_min; TYPE_1__ ios; int ocr_avail; scalar_t__ ocr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void FUNC_7(struct mmc_host *VAR_8)
{
 int VAR_9;


 if (VAR_8->ocr)
  VAR_9 = FUNC_0(VAR_8->ocr) - 1;
 else
  VAR_9 = FUNC_1(VAR_8->ocr_avail) - 1;

 VAR_8->ios.vdd = VAR_9;
 if (FUNC_3(VAR_8)) {
  VAR_8->ios.chip_select = VAR_4;
  VAR_8->ios.bus_mode = VAR_1;
 } else {
  VAR_8->ios.chip_select = VAR_3;
  VAR_8->ios.bus_mode = VAR_0;
 }
 VAR_8->ios.power_mode = VAR_6;
 VAR_8->ios.bus_width = VAR_2;
 VAR_8->ios.timing = VAR_7;
 FUNC_5(VAR_8);





 FUNC_2(10);

 if (VAR_8->f_min > 400000) {
  FUNC_6("%s: Minimum clock frequency too high for "
    "identification mode\n", FUNC_4(VAR_8));
  VAR_8->ios.clock = VAR_8->f_min;
 } else
  VAR_8->ios.clock = 400000;

 VAR_8->ios.power_mode = VAR_5;
 FUNC_5(VAR_8);





 FUNC_2(10);
}
