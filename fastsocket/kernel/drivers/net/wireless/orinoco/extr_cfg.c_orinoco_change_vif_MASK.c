
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int dummy; } ;
struct vif_params {int dummy; } ;
struct orinoco_private {int iw_mode; int broken_monitor; int has_port3; int has_ibss; } ;
struct net_device {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct orinoco_private*) ;
 scalar_t__ FUNC_1 (struct orinoco_private*,unsigned long*) ;
 int FUNC_2 (struct orinoco_private*,unsigned long*) ;
 int FUNC_3 (struct orinoco_private*) ;
 struct orinoco_private* FUNC_4 (struct wiphy*) ;
 int FUNC_5 (struct wiphy*,char*) ;

__attribute__((used)) static int FUNC_6(struct wiphy *VAR_3, struct net_device *VAR_4,
         enum nl80211_iftype VAR_5, u32 *VAR_6,
         struct vif_params *VAR_7)
{
 struct orinoco_private *VAR_8 = FUNC_4(VAR_3);
 int VAR_9 = 0;
 unsigned long VAR_10;

 if (FUNC_1(VAR_8, &VAR_10) != 0)
  return -VAR_0;

 switch (VAR_5) {
 case 130:
  if (!VAR_8->has_ibss && !VAR_8->has_port3)
   VAR_9 = -VAR_1;
  break;

 case 128:
  break;

 case 129:
  if (VAR_8->broken_monitor && !VAR_2) {
   FUNC_5(VAR_3,
       "Monitor mode support is buggy in this firmware, not enabling\n");
   VAR_9 = -VAR_1;
  }
  break;

 default:
  VAR_9 = -VAR_1;
 }

 if (!VAR_9) {
  VAR_8->iw_mode = VAR_5;
  FUNC_3(VAR_8);
  VAR_9 = FUNC_0(VAR_8);
 }

 FUNC_2(VAR_8, &VAR_10);

 return VAR_9;
}
