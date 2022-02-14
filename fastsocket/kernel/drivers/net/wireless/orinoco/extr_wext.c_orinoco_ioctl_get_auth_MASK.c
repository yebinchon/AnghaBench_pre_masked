
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_param {long flags; int value; } ;
union iwreq_data {struct iw_param param; } ;
struct orinoco_private {int wpa_enabled; int wep_restrict; int tkip_cm_active; int key_mgmt; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;



 struct orinoco_private* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct orinoco_private*,unsigned long*) ;
 int FUNC_2 (struct orinoco_private*,unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_5,
      struct iw_request_info *VAR_6,
      union iwreq_data *VAR_7, char *VAR_8)
{
 struct orinoco_private *VAR_9 = FUNC_0(VAR_5);
 struct iw_param *VAR_10 = &VAR_7->param;
 unsigned long VAR_11;
 int VAR_12 = 0;

 if (FUNC_1(VAR_9, &VAR_11) != 0)
  return -VAR_0;

 switch (VAR_10->flags & VAR_4) {
 case 130:
  VAR_10->value = VAR_9->key_mgmt;
  break;

 case 129:
  VAR_10->value = VAR_9->tkip_cm_active;
  break;

 case 131:
  if (VAR_9->wep_restrict)
   VAR_10->value = VAR_3;
  else
   VAR_10->value = VAR_2;
  break;

 case 128:
  VAR_10->value = VAR_9->wpa_enabled;
  break;

 default:
  VAR_12 = -VAR_1;
 }

 FUNC_2(VAR_9, &VAR_11);
 return VAR_12;
}
