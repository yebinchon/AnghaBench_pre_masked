
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdricoh_host {int dev; } ;
struct mmc_ios {scalar_t__ power_mode; scalar_t__ bus_width; } ;
struct mmc_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 struct sdricoh_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct sdricoh_host*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_5, struct mmc_ios *VAR_6)
{
 struct sdricoh_host *VAR_7 = FUNC_1(VAR_5);
 FUNC_0(VAR_7->dev, "set_ios\n");

 if (VAR_6->power_mode == VAR_1) {
  FUNC_2(VAR_7, VAR_4, 0xc0e0);

  if (VAR_6->bus_width == VAR_0) {
   FUNC_2(VAR_7, VAR_3, 0x2000300);
   FUNC_2(VAR_7, VAR_4, 0x40e0);
  } else {
   FUNC_2(VAR_7, VAR_3, 0x2000340);
  }

 } else if (VAR_6->power_mode == VAR_2) {
  FUNC_2(VAR_7, VAR_3, 0x2000320);
  FUNC_2(VAR_7, VAR_4, 0xe0);
 }
}
