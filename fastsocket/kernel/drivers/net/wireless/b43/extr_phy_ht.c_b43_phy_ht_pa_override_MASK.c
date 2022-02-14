
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {struct b43_phy_ht* ht; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_ht {int* rf_ctl_int_save; } ;





 int FUNC_0 (struct b43_wldev*,int const) ;
 int FUNC_1 (struct b43_wldev*,int const,int) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_0, bool VAR_1)
{
 struct b43_phy_ht *VAR_2 = VAR_0->phy.ht;
 static const u16 VAR_3[3] = { 130,
         129,
         128 };
 int VAR_4;

 if (VAR_1) {
  for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
   FUNC_1(VAR_0, VAR_3[VAR_4], VAR_2->rf_ctl_int_save[VAR_4]);
 } else {
  for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
   VAR_2->rf_ctl_int_save[VAR_4] = FUNC_0(VAR_0, VAR_3[VAR_4]);

  for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
   FUNC_1(VAR_0, VAR_3[VAR_4], 0x0400);
 }
}
