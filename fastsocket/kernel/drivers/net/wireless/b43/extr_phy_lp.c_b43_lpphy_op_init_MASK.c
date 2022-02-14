
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43_wldev {int wl; TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ bus_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (struct b43_wldev*) ;
 int FUNC_8 (struct b43_wldev*) ;

__attribute__((used)) static int FUNC_9(struct b43_wldev *VAR_2)
{
 int VAR_3;

 if (VAR_2->dev->bus_type != VAR_0) {
  FUNC_2(VAR_2->wl, "LP-PHY is supported only on SSB!\n");
  return -VAR_1;
 }

 FUNC_7(VAR_2);
 FUNC_3(VAR_2);
 FUNC_6(VAR_2);
 FUNC_4(VAR_2);
 VAR_3 = FUNC_0(VAR_2, 7);
 if (VAR_3) {
  FUNC_1(VAR_2->wl, "Switch to channel 7 failed, error = %d.\n",
         VAR_3);
 }
 FUNC_8(VAR_2);
 FUNC_5(VAR_2);


 return 0;
}
