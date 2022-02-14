
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
typedef int u16 ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; int value; scalar_t__ disabled; } ;
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(netdevice_t *VAR_10,
          struct iw_request_info *VAR_11,
          struct iw_param *VAR_12, char *VAR_13)
{
 wlandevice_t *VAR_14 = VAR_10->ml_priv;
 p80211item_uint32_t VAR_15;
 p80211msg_dot11req_mibset_t VAR_16;
 int VAR_17;
 int VAR_18 = 0;
 u16 VAR_19, VAR_20, VAR_21;

 VAR_16.msgcode = VAR_3;
 VAR_15.did = VAR_2;

 FUNC_0(&VAR_16.mibattribute.data, &VAR_15, sizeof(VAR_15));
 VAR_17 = FUNC_1(VAR_14, (u8 *) & VAR_16);

 if (VAR_17) {
  VAR_18 = -VAR_4;
  goto exit;
 }

 FUNC_0(&VAR_15, &VAR_16.mibattribute.data, sizeof(VAR_15));

 VAR_19 = VAR_15.data;

 VAR_15.did = VAR_0;

 FUNC_0(&VAR_16.mibattribute.data, &VAR_15, sizeof(VAR_15));
 VAR_17 = FUNC_1(VAR_14, (u8 *) & VAR_16);

 if (VAR_17) {
  VAR_18 = -VAR_4;
  goto exit;
 }

 FUNC_0(&VAR_15, &VAR_16.mibattribute.data, sizeof(VAR_15));

 VAR_20 = VAR_15.data;

 VAR_15.did =
     VAR_1;

 FUNC_0(&VAR_16.mibattribute.data, &VAR_15, sizeof(VAR_15));
 VAR_17 = FUNC_1(VAR_14, (u8 *) & VAR_16);

 if (VAR_17) {
  VAR_18 = -VAR_4;
  goto exit;
 }

 FUNC_0(&VAR_15, &VAR_16.mibattribute.data, sizeof(VAR_15));

 VAR_21 = VAR_15.data;

 VAR_12->disabled = 0;

 if ((VAR_12->flags & VAR_9) == VAR_5) {
  VAR_12->flags = VAR_5;
  VAR_12->value = VAR_21 * 1024;
 } else {
  if (VAR_12->flags & VAR_7) {
   VAR_12->flags = VAR_6 | VAR_7;
   VAR_12->value = VAR_20;
  } else {
   VAR_12->flags = VAR_6;
   VAR_12->value = VAR_19;
   if (VAR_19 != VAR_20)
    VAR_12->flags |= VAR_8;
  }
 }

exit:
 return VAR_18;

}
