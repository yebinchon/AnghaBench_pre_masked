
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct iw_request_info {int dummy; } ;
struct iw_mlme {int cmd; } ;
struct ieee80211_device {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct ieee80211_device*) ;

int FUNC_1(struct ieee80211_device *VAR_1,
                               struct iw_request_info *VAR_2,
                               union iwreq_data *VAR_3, char *VAR_4)
{
 struct iw_mlme *VAR_5 = (struct iw_mlme *) VAR_4;


 switch (VAR_5->cmd) {
        case 129:
 case 128:

  FUNC_0(VAR_1);
  break;
  default:
                return -VAR_0;
        }

 return 0;
}
