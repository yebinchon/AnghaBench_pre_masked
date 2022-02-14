
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct b43_phy {int radio_ver; int radio_rev; struct b43_phy_g* g; } ;
struct b43_wldev {int wl; TYPE_2__* dev; struct b43_phy phy; } ;
struct TYPE_8__ {int att; } ;
struct TYPE_7__ {int att; } ;
struct b43_phy_g {int tx_control; TYPE_4__ rfatt; TYPE_3__ bbatt; scalar_t__ rfatt_delta; scalar_t__ bbatt_delta; } ;
struct TYPE_6__ {TYPE_1__* bus_sprom; } ;
struct TYPE_5__ {int boardflags_lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct b43_wldev*,int ) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*,int*,int*) ;
 int FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (struct b43_wldev*) ;
 int FUNC_8 (struct b43_wldev*,TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static void FUNC_10(struct b43_wldev *VAR_4)
{
 struct b43_phy *VAR_5 = &VAR_4->phy;
 struct b43_phy_g *VAR_6 = VAR_5->g;
 int VAR_7, VAR_8;
 u8 VAR_9;

 FUNC_2(VAR_4);


 VAR_8 = VAR_6->bbatt.att;
 VAR_8 += VAR_6->bbatt_delta;
 VAR_7 = VAR_6->rfatt.att;
 VAR_7 += VAR_6->rfatt_delta;

 FUNC_5(VAR_4, &VAR_8, &VAR_7);
 VAR_9 = VAR_6->tx_control;
 if ((VAR_5->radio_ver == 0x2050) && (VAR_5->radio_rev == 2)) {
  if (VAR_7 <= 1) {
   if (VAR_9 == 0) {
    VAR_9 =
        VAR_2 |
        VAR_3;
    VAR_7 += 2;
    VAR_8 += 2;
   } else if (VAR_4->dev->bus_sprom->
       boardflags_lo &
       VAR_0) {
    VAR_8 += 4 * (VAR_7 - 2);
    VAR_7 = 2;
   }
  } else if (VAR_7 > 4 && VAR_9) {
   VAR_9 = 0;
   if (VAR_8 < 3) {
    VAR_7 -= 3;
    VAR_8 += 2;
   } else {
    VAR_7 -= 2;
    VAR_8 -= 2;
   }
  }
 }

 VAR_6->tx_control = VAR_9;
 FUNC_5(VAR_4, &VAR_8, &VAR_7);
 VAR_6->rfatt.att = VAR_7;
 VAR_6->bbatt.att = VAR_8;

 if (FUNC_0(VAR_4, VAR_1))
  FUNC_9(VAR_4->wl, "Adjusting TX power\n");


 FUNC_3(VAR_4);
 FUNC_6(VAR_4);
 FUNC_8(VAR_4, &VAR_6->bbatt, &VAR_6->rfatt,
     VAR_6->tx_control);
 FUNC_7(VAR_4);
 FUNC_4(VAR_4);

 FUNC_1(VAR_4);
}
