
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
struct iw_freq {scalar_t__ e; int m; } ;
struct TYPE_7__ {int data; } ;
struct TYPE_8__ {TYPE_1__ mibattribute; int msgcode; } ;
typedef TYPE_2__ p80211msg_dot11req_mibset_t ;
struct TYPE_9__ {int data; int status; int did; } ;
typedef TYPE_3__ p80211item_uint32_t ;
struct TYPE_10__ {int * ml_priv; } ;
typedef TYPE_4__ netdevice_t ;
typedef int mibitem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_3__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(netdevice_t *VAR_6,
         struct iw_request_info *VAR_7,
         struct iw_freq *VAR_8, char *VAR_9)
{
 wlandevice_t *VAR_10 = VAR_6->ml_priv;
 p80211item_uint32_t VAR_11;
 p80211msg_dot11req_mibset_t VAR_12;
 int VAR_13;
 int VAR_14 = 0;

 if (!VAR_5) {
  VAR_14 = (-VAR_3);
  goto exit;
 }

 VAR_12.msgcode = VAR_1;
 VAR_11.did = VAR_0;
 VAR_11.status = VAR_4;

 if ((VAR_8->e == 0) && (VAR_8->m <= 1000))
  VAR_11.data = VAR_8->m;
 else
  VAR_11.data = FUNC_1(VAR_8->m);

 FUNC_0(&VAR_12.mibattribute.data, &VAR_11, sizeof(VAR_11));
 VAR_13 = FUNC_2(VAR_10, (u8 *) & VAR_12);

 if (VAR_13) {
  VAR_14 = -VAR_2;
  goto exit;
 }

exit:
 return VAR_14;
}
