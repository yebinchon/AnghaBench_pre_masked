
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int wlandevice_t ;
typedef int u8 ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; scalar_t__ fixed; scalar_t__ disabled; scalar_t__ flags; } ;
struct TYPE_10__ {int data; int did; } ;
struct TYPE_8__ {TYPE_3__ data; } ;
struct TYPE_9__ {TYPE_1__ mibattribute; int msgcode; } ;
typedef TYPE_2__ p80211msg_dot11req_mibset_t ;
typedef TYPE_3__ p80211item_uint32_t ;
struct TYPE_11__ {int * ml_priv; } ;
typedef TYPE_4__ netdevice_t ;
typedef int mibitem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(netdevice_t *VAR_3,
          struct iw_request_info *VAR_4,
          struct iw_param *VAR_5, char *VAR_6)
{
 wlandevice_t *VAR_7 = VAR_3->ml_priv;
 p80211item_uint32_t VAR_8;
 p80211msg_dot11req_mibset_t VAR_9;
 int VAR_10;
 int VAR_11 = 0;

 VAR_9.msgcode = VAR_1;
 VAR_8.did =
     VAR_0;

 FUNC_0(&VAR_9.mibattribute.data, &VAR_8, sizeof(VAR_8));
 VAR_10 = FUNC_1(VAR_7, (u8 *) & VAR_9);

 if (VAR_10) {
  VAR_11 = -VAR_2;
  goto exit;
 }

 FUNC_0(&VAR_8, &VAR_9.mibattribute.data, sizeof(VAR_8));



 VAR_5->flags = 0;
 VAR_5->disabled = 0;
 VAR_5->fixed = 0;
 VAR_5->value = VAR_8.data;

exit:
 return VAR_11;
}
