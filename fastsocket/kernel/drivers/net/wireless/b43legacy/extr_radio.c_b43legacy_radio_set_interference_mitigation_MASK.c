
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_phy {scalar_t__ type; scalar_t__ rev; int aci_wlan_automatic; int aci_enable; int interfmode; int aci_hw_rssi; int gmode; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;


 scalar_t__ VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43legacy_wldev*,int) ;
 int FUNC_1 (struct b43legacy_wldev*,int) ;

int FUNC_2(struct b43legacy_wldev *VAR_3,
      int VAR_4)
{
 struct b43legacy_phy *VAR_5 = &VAR_3->phy;
 int VAR_6;

 if ((VAR_5->type != VAR_0) ||
     (VAR_5->rev == 0) || (!VAR_5->gmode))
  return -VAR_2;

 VAR_5->aci_wlan_automatic = 0;
 switch (VAR_4) {
 case 131:
  VAR_5->aci_wlan_automatic = 1;
  if (VAR_5->aci_enable)
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

 VAR_6 = VAR_5->interfmode;
 if (VAR_6 == VAR_4)
  return 0;
 if (VAR_6 != 129)
  FUNC_0(VAR_3,
        VAR_6);

 if (VAR_4 == 129) {
  VAR_5->aci_enable = 0;
  VAR_5->aci_hw_rssi = 0;
 } else
  FUNC_1(VAR_3, VAR_4);
 VAR_5->interfmode = VAR_4;

 return 0;
}
