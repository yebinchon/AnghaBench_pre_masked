
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct brcms_phy_pub {int dummy; } ;
struct TYPE_3__ {int phy_rev; } ;
struct brcms_phy {int phy_txcore_heatedup; scalar_t__ phy_txcore_disable_temp; scalar_t__ phy_txcore_enable_temp; TYPE_2__* sh; TYPE_1__ pubpi; int watchdog_override; } ;
typedef scalar_t__ s16 ;
struct TYPE_4__ {int physhim; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct brcms_phy*) ;

u8 FUNC_4(struct brcms_phy_pub *VAR_0)
{
 s16 VAR_1;
 u8 VAR_2;
 struct brcms_phy *VAR_3 = (struct brcms_phy *) VAR_0;

 VAR_2 = (VAR_3->phy_txcore_heatedup) ? 0x31 : 0x33;

 if (!VAR_3->watchdog_override)
  return VAR_2;

 if (FUNC_0(VAR_3->pubpi.phy_rev, 6)) {
  FUNC_2(VAR_3->sh->physhim);
  VAR_1 = FUNC_3(VAR_3);
  FUNC_1(VAR_3->sh->physhim);

  if (!VAR_3->phy_txcore_heatedup) {
   if (VAR_1 >= VAR_3->phy_txcore_disable_temp) {
    VAR_2 &= 0xFD;
    VAR_3->phy_txcore_heatedup = 1;
   }
  } else {
   if (VAR_1 <= VAR_3->phy_txcore_enable_temp) {
    VAR_2 |= 0x2;
    VAR_3->phy_txcore_heatedup = 0;
   }
  }
 }

 return VAR_2;
}
