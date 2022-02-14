
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct iw_request_info {int dummy; } ;
struct ieee80211_device {scalar_t__ iw_mode; scalar_t__ state; int wx_sem; int wx_sync_scan_wq; int wq; int proto_started; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ieee80211_device *VAR_2, struct iw_request_info *VAR_3,
        union iwreq_data *VAR_4, char *VAR_5)
{
 int VAR_6 = 0;

 FUNC_0(&VAR_2->wx_sem);

 if (VAR_2->iw_mode == VAR_1 || !(VAR_2->proto_started)){
  VAR_6 = -1;
  goto out;
 }





 if ( VAR_2->state == VAR_0){
  FUNC_1(VAR_2->wq, &VAR_2->wx_sync_scan_wq);

  return 0;
 }

out:
 FUNC_2(&VAR_2->wx_sem);
 return VAR_6;
}
