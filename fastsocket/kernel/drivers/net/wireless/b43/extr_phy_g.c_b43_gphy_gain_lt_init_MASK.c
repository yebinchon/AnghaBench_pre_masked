
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct b43_phy {int radio_rev; struct b43_phy_g* g; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct TYPE_8__ {size_t len; TYPE_3__* list; } ;
struct TYPE_6__ {size_t len; TYPE_1__* list; } ;
struct b43_txpower_lo_control {TYPE_4__ rfatt_list; TYPE_2__ bbatt_list; } ;
struct b43_phy_g {struct b43_txpower_lo_control* lo_control; } ;
struct TYPE_7__ {int att; } ;
struct TYPE_5__ {int att; } ;


 int FUNC_0 (struct b43_wldev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_0)
{
 struct b43_phy *VAR_1 = &VAR_0->phy;
 struct b43_phy_g *VAR_2 = VAR_1->g;
 struct b43_txpower_lo_control *VAR_3 = VAR_2->lo_control;
 u16 VAR_4 = 0;
 u16 VAR_5;
 u8 VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3->rfatt_list.len; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < VAR_3->bbatt_list.len; VAR_7++) {
   if (VAR_4 >= 0x40)
    return;
   VAR_5 = VAR_3->bbatt_list.list[VAR_7].att;
   VAR_5 <<= 8;
   if (VAR_1->radio_rev == 8)
    VAR_5 |= 0x50;
   else
    VAR_5 |= 0x40;
   VAR_5 |= VAR_3->rfatt_list.list[VAR_6].att;
   FUNC_0(VAR_0, 0x3C0 + VAR_4, VAR_5);
   VAR_4++;
  }
 }
}
