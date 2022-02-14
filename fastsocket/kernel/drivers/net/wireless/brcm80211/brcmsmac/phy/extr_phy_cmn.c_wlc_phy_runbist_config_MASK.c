
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct brcms_phy_pub {int dummy; } ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {int d11core; TYPE_1__ pubpi; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct brcms_phy*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct brcms_phy_pub*) ;

void FUNC_7(struct brcms_phy_pub *VAR_3, bool VAR_4)
{
 struct brcms_phy *VAR_5 = (struct brcms_phy *) VAR_3;
 u16 VAR_6;
 VAR_6 = 0;

 if (VAR_4 == VAR_0) {
  if (!FUNC_1(VAR_5))
   return;

  if (FUNC_2(VAR_5->pubpi.phy_rev, 3)
      || FUNC_2(VAR_5->pubpi.phy_rev, 4)) {
   FUNC_4(VAR_5->d11core, FUNC_0(VAR_1),
          0xa0);
   FUNC_3(VAR_5->d11core, FUNC_0(VAR_2),
       0x1 << 15);
  }
 } else {
  if (FUNC_2(VAR_5->pubpi.phy_rev, 3)
      || FUNC_2(VAR_5->pubpi.phy_rev, 4)) {
   FUNC_4(VAR_5->d11core, FUNC_0(VAR_1),
          0xa0);
   FUNC_5(VAR_5->d11core, FUNC_0(VAR_2), VAR_6);
  }

  FUNC_6(VAR_3);
 }
}
