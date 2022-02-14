
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sa_data; int sa_family; } ;
union iwreq_data {TYPE_2__ ap_addr; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_3__ {int bssid; } ;
struct ieee80211_device {scalar_t__ iw_mode; scalar_t__ state; scalar_t__ wap_set; int lock; TYPE_1__ current_network; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct ieee80211_device *VAR_5,
       struct iw_request_info *VAR_6,
       union iwreq_data *VAR_7, char *VAR_8)
{
 unsigned long VAR_9;

 VAR_7->ap_addr.sa_family = VAR_0;

 if (VAR_5->iw_mode == VAR_4)
  return -1;


 FUNC_2(&VAR_5->lock, VAR_9);

 if (VAR_5->state != VAR_2 &&
  VAR_5->state != VAR_3 &&
  VAR_5->wap_set == 0)

  FUNC_1(VAR_7->ap_addr.sa_data, 0, VAR_1);
 else
  FUNC_0(VAR_7->ap_addr.sa_data,
         VAR_5->current_network.bssid, VAR_1);

 FUNC_3(&VAR_5->lock, VAR_9);

 return 0;
}
