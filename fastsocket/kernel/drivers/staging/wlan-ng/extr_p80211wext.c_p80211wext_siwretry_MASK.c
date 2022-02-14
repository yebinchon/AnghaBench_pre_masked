
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
struct iw_param {int flags; int value; scalar_t__ disabled; } ;
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,TYPE_3__*,int) ;
 int FUNC_1 (int *,int *) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_2(netdevice_t *VAR_12,
          struct iw_request_info *VAR_13,
          struct iw_param *VAR_14, char *VAR_15)
{
 wlandevice_t *VAR_16 = VAR_12->ml_priv;
 p80211item_uint32_t VAR_17;
 p80211msg_dot11req_mibset_t VAR_18;
 int VAR_19;
 int VAR_20 = 0;

 if (!VAR_11) {
  VAR_20 = (-VAR_6);
  goto exit;
 }

 if (VAR_14->disabled) {
  VAR_20 = -VAR_5;
  goto exit;
 }

 VAR_18.msgcode = VAR_3;

 if ((VAR_14->flags & VAR_10) == VAR_7) {
  VAR_17.did =
      VAR_1;
  VAR_17.data = VAR_14->value /= 1024;

  FUNC_0(&VAR_18.mibattribute.data, &VAR_17, sizeof(VAR_17));
  VAR_19 = FUNC_1(VAR_16, (u8 *) & VAR_18);

  if (VAR_19) {
   VAR_20 = -VAR_4;
   goto exit;
  }
 } else {
  if (VAR_14->flags & VAR_8) {
   VAR_17.did =
       VAR_0;
   VAR_17.data = VAR_14->value;

   FUNC_0(&VAR_18.mibattribute.data, &VAR_17,
          sizeof(VAR_17));
   VAR_19 = FUNC_1(VAR_16, (u8 *) & VAR_18);

   if (VAR_19) {
    VAR_20 = -VAR_4;
    goto exit;
   }
  }

  if (VAR_14->flags & VAR_9) {
   VAR_17.did =
       VAR_2;
   VAR_17.data = VAR_14->value;

   FUNC_0(&VAR_18.mibattribute.data, &VAR_17,
          sizeof(VAR_17));
   VAR_19 = FUNC_1(VAR_16, (u8 *) & VAR_18);

   if (VAR_19) {
    VAR_20 = -VAR_4;
    goto exit;
   }
  }
 }

exit:
 return VAR_20;

}
