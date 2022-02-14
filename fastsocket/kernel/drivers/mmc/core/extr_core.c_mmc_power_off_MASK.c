
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timing; int bus_width; int power_mode; int chip_select; int bus_mode; scalar_t__ vdd; scalar_t__ clock; } ;
struct mmc_host {TYPE_1__ ios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_2(struct mmc_host *VAR_5)
{
 VAR_5->ios.clock = 0;
 VAR_5->ios.vdd = 0;
 if (!FUNC_0(VAR_5)) {
  VAR_5->ios.bus_mode = VAR_0;
  VAR_5->ios.chip_select = VAR_2;
 }
 VAR_5->ios.power_mode = VAR_3;
 VAR_5->ios.bus_width = VAR_1;
 VAR_5->ios.timing = VAR_4;
 FUNC_1(VAR_5);
}
