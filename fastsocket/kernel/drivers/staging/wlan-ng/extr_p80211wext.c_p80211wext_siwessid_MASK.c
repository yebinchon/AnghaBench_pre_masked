
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int hostwep; } ;
typedef TYPE_4__ wlandevice_t ;
typedef int u8 ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; } ;
struct TYPE_10__ {int len; int data; } ;
struct TYPE_11__ {TYPE_2__ data; } ;
struct TYPE_9__ {int data; } ;
struct TYPE_13__ {TYPE_3__ ssid; int msgcode; TYPE_1__ authtype; } ;
typedef TYPE_5__ p80211msg_lnxreq_autojoin_t ;
struct TYPE_14__ {TYPE_4__* ml_priv; } ;
typedef TYPE_6__ netdevice_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (char*,...) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(netdevice_t *VAR_7,
          struct iw_request_info *VAR_8,
          struct iw_point *VAR_9, char *VAR_10)
{
 wlandevice_t *VAR_11 = VAR_7->ml_priv;
 p80211msg_lnxreq_autojoin_t VAR_12;

 int VAR_13;
 int VAR_14 = 0;
 int VAR_15 = VAR_9->length;

 if (!VAR_6) {
  VAR_14 = (-VAR_2);
  goto exit;
 }

 if (VAR_11->hostwep & VAR_3)
  VAR_12.authtype.data = VAR_5;
 else
  VAR_12.authtype.data = VAR_4;

 VAR_12.msgcode = VAR_0;


 if (VAR_15 && VAR_10[VAR_15 - 1] == '\0')
  VAR_15--;

 FUNC_0(VAR_12.ssid.data.data, VAR_10, VAR_15);
 VAR_12.ssid.data.len = VAR_15;

 FUNC_2("autojoin_ssid for %s \n", VAR_10);
 VAR_13 = FUNC_1(VAR_11, (u8 *) & VAR_12);
 FUNC_2("autojoin_ssid %d\n", VAR_13);

 if (VAR_13) {
  VAR_14 = -VAR_1;
  goto exit;
 }

exit:
 return VAR_14;
}
