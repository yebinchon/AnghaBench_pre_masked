
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; int value; } ;
struct hostap_interface {TYPE_1__* local; } ;
struct TYPE_2__ {int ieee_802_1x; int wpa; int auth_algs; int drop_unencrypted; int tkip_countermeasures; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;




 int VAR_1 ;





 struct hostap_interface* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2,
    struct iw_request_info *VAR_3,
    struct iw_param *VAR_4, char *VAR_5)
{
 struct hostap_interface *VAR_6 = FUNC_0(VAR_2);
 local_info_t *VAR_7 = VAR_6->local;

 switch (VAR_4->flags & VAR_1) {
 case 128:
 case 134:
 case 135:
 case 132:




  return -VAR_0;
 case 130:
  VAR_4->value = VAR_7->tkip_countermeasures;
  break;
 case 133:
  VAR_4->value = VAR_7->drop_unencrypted;
  break;
 case 136:
  VAR_4->value = VAR_7->auth_algs;
  break;
 case 129:
  VAR_4->value = VAR_7->wpa;
  break;
 case 131:
  VAR_4->value = VAR_7->ieee_802_1x;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
