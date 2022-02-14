
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {scalar_t__ type; scalar_t__ rev; int gmode; struct b43_phy_g* g; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_g {int aci_wlan_automatic; int aci_enable; int interfmode; int aci_hw_rssi; } ;
typedef enum b43_interference_mitigation { ____Placeholder_b43_interference_mitigation } b43_interference_mitigation ;






 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct b43_wldev*,int) ;
 int FUNC_2 (struct b43_wldev*,int) ;

__attribute__((used)) static int FUNC_3(struct b43_wldev *VAR_3,
      enum b43_interference_mitigation VAR_4)
{
 struct b43_phy *VAR_5 = &VAR_3->phy;
 struct b43_phy_g *VAR_6 = VAR_5->g;
 int VAR_7;

 FUNC_0(VAR_5->type != VAR_0);
 if ((VAR_5->rev == 0) || (!VAR_5->gmode))
  return -VAR_2;

 VAR_6->aci_wlan_automatic = 0;
 switch (VAR_4) {
 case 131:
  VAR_6->aci_wlan_automatic = 1;
  if (VAR_6->aci_enable)
   VAR_4 = 130;
  else
   VAR_4 = 129;
  break;
 case 129:
 case 128:
 case 130:
  break;
 default:
  return -VAR_1;
 }

 VAR_7 = VAR_6->interfmode;
 if (VAR_7 == VAR_4)
  return 0;
 if (VAR_7 != 129)
  FUNC_1(VAR_3, VAR_7);

 if (VAR_4 == 129) {
  VAR_6->aci_enable = 0;
  VAR_6->aci_hw_rssi = 0;
 } else
  FUNC_2(VAR_3, VAR_4);
 VAR_6->interfmode = VAR_4;

 return 0;
}
