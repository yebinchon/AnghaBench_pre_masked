
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_request_info {int dummy; } ;
struct iw_param {int flags; int value; } ;
struct ieee80211_device {int tkip_countermeasures; int drop_unencrypted; int open_wep; int wpa_enabled; int ieee802_1x; int privacy_invoked; } ;


 int VAR_0 ;

 int VAR_1 ;



 int VAR_2 ;







int FUNC_0(struct ieee80211_device *VAR_3,
                               struct iw_request_info *VAR_4,
                               struct iw_param *VAR_5, char *VAR_6)
{






 switch (VAR_5->flags & VAR_2) {
        case 128:


  break;
        case 135:
        case 136:
        case 133:




                break;
        case 130:
                VAR_3->tkip_countermeasures = VAR_5->value;
                break;
        case 134:
                VAR_3->drop_unencrypted = VAR_5->value;
  break;

 case 137:
  VAR_3->open_wep = (VAR_5->value&VAR_1)?1:0;

  break;


 case 129:
  VAR_3->wpa_enabled = (VAR_5->value)?1:0;

  break;


 case 131:
                VAR_3->ieee802_1x = VAR_5->value;
  break;
 case 132:
  VAR_3->privacy_invoked = VAR_5->value;
  break;
 default:
                return -VAR_0;
 }
 return 0;
}
