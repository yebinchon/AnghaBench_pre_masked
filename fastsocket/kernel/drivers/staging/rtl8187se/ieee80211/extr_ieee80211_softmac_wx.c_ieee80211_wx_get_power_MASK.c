
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int disabled; int value; int flags; } ;
union iwreq_data {TYPE_1__ power; } ;
struct iw_request_info {int dummy; } ;
struct ieee80211_device {int ps; int ps_timeout; int wx_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct ieee80211_device *VAR_5,
     struct iw_request_info *VAR_6,
     union iwreq_data *VAR_7, char *VAR_8)
{
 int VAR_9 =0;

 FUNC_0(&VAR_5->wx_sem);

 if(VAR_5->ps == VAR_0){
  VAR_7->power.disabled = 1;
  goto exit;
 }

 VAR_7->power.disabled = 0;


  VAR_7->power.flags = VAR_3;
  VAR_7->power.value = VAR_5->ps_timeout * 1000;
 if (VAR_5->ps & VAR_1)
  VAR_7->power.flags |= VAR_2;
 else
  VAR_7->power.flags |= VAR_4;

exit:
 FUNC_1(&VAR_5->wx_sem);
 return VAR_9;

}
