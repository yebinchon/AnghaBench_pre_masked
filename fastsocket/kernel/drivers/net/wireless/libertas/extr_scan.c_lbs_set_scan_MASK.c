
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int flags; } ;
union iwreq_data {TYPE_1__ data; } ;
struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int scan_channel; scalar_t__ surpriseremoved; int scan_work; int work_thread; scalar_t__ scan_ssid_len; int scan_ssid; int radio_on; } ;
struct iw_scan_req {int essid; scalar_t__ essid_len; } ;
struct iw_request_info {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (int ,int *,int ) ;
 int VAR_5 ;

int FUNC_10(struct net_device *VAR_6, struct iw_request_info *VAR_7,
   union iwreq_data *VAR_8, char *VAR_9)
{
 FUNC_0(VAR_5);
 struct lbs_private *VAR_10 = VAR_6->ml_priv;
 int VAR_11 = 0;

 FUNC_2(VAR_4);

 if (!VAR_10->radio_on) {
  VAR_11 = -VAR_0;
  goto out;
 }

 if (!FUNC_7(VAR_6)) {
  VAR_11 = -VAR_2;
  goto out;
 }
 if (VAR_8->data.length == sizeof(struct iw_scan_req) &&
     VAR_8->data.flags & VAR_3) {
  struct iw_scan_req *VAR_12 = (struct iw_scan_req *)VAR_9;
  VAR_10->scan_ssid_len = VAR_12->essid_len;
  FUNC_5(VAR_10->scan_ssid, VAR_12->essid, VAR_10->scan_ssid_len);
  FUNC_4("set_scan, essid '%s'\n",
   FUNC_8(VAR_5, VAR_10->scan_ssid, VAR_10->scan_ssid_len));
 } else {
  VAR_10->scan_ssid_len = 0;
 }

 if (!FUNC_1(&VAR_10->scan_work))
  FUNC_9(VAR_10->work_thread, &VAR_10->scan_work,
       FUNC_6(50));

 VAR_10->scan_channel = -1;

 if (VAR_10->surpriseremoved)
  VAR_11 = -VAR_1;

out:
 FUNC_3(VAR_4, "ret %d", VAR_11);
 return VAR_11;
}
