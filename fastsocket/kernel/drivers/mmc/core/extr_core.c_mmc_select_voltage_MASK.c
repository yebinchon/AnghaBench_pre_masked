
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int vdd; } ;
struct mmc_host {int ocr_avail; TYPE_1__ ios; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (char*,int ) ;

u32 FUNC_4(struct mmc_host *VAR_0, u32 VAR_1)
{
 int VAR_2;

 VAR_1 &= VAR_0->ocr_avail;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2) {
  VAR_2 -= 1;

  VAR_1 &= 3 << VAR_2;

  VAR_0->ios.vdd = VAR_2;
  FUNC_2(VAR_0);
 } else {
  FUNC_3("%s: host doesn't support card's voltages\n",
    FUNC_1(VAR_0));
  VAR_1 = 0;
 }

 return VAR_1;
}
