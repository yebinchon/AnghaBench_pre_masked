
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wlandevice_t ;
typedef int u8 ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; scalar_t__ disabled; } ;
struct TYPE_7__ {int data; } ;
struct TYPE_8__ {TYPE_1__ mibattribute; int msgcode; } ;
typedef TYPE_2__ p80211msg_dot11req_mibset_t ;
struct TYPE_9__ {int data; int did; } ;
typedef TYPE_3__ p80211item_uint32_t ;
struct TYPE_10__ {int * ml_priv; } ;
typedef TYPE_4__ netdevice_t ;
typedef int mibitem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_3__*,int) ;
 int FUNC_1 (int *,int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(netdevice_t *VAR_5,
         struct iw_request_info *VAR_6,
         struct iw_param *VAR_7, char *VAR_8)
{
 wlandevice_t *VAR_9 = VAR_5->ml_priv;
 p80211item_uint32_t VAR_10;
 p80211msg_dot11req_mibset_t VAR_11;
 int VAR_12;
 int VAR_13 = 0;

 if (!VAR_4) {
  VAR_13 = (-VAR_3);
  goto exit;
 }

 VAR_11.msgcode = VAR_1;
 VAR_10.did =
     VAR_0;

 if (VAR_7->disabled)
  VAR_10.data = 2346;
 else
  VAR_10.data = VAR_7->value;

 FUNC_0(&VAR_11.mibattribute.data, &VAR_10, sizeof(VAR_10));
 VAR_12 = FUNC_1(VAR_9, (u8 *) & VAR_11);

 if (VAR_12) {
  VAR_13 = -VAR_2;
  goto exit;
 }

exit:
 return VAR_13;
}
