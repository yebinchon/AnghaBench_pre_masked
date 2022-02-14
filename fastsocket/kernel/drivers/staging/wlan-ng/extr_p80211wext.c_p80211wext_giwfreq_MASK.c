
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
struct iw_freq {int e; int m; } ;
struct TYPE_10__ {scalar_t__ data; int did; } ;
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
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(netdevice_t *VAR_4,
         struct iw_request_info *VAR_5,
         struct iw_freq *VAR_6, char *VAR_7)
{
 wlandevice_t *VAR_8 = VAR_4->ml_priv;
 p80211item_uint32_t VAR_9;
 p80211msg_dot11req_mibset_t VAR_10;
 int VAR_11;
 int VAR_12 = 0;

 VAR_10.msgcode = VAR_1;
 VAR_9.did = VAR_0;
 FUNC_0(&VAR_10.mibattribute.data, &VAR_9, sizeof(VAR_9));
 VAR_11 = FUNC_2(VAR_8, (u8 *) & VAR_10);

 if (VAR_11) {
  VAR_12 = -VAR_2;
  goto exit;
 }

 FUNC_0(&VAR_9, &VAR_10.mibattribute.data, sizeof(VAR_9));

 if (VAR_9.data > VAR_3) {
  VAR_12 = -VAR_2;
  goto exit;
 }


 VAR_6->e = 1;
 VAR_6->m = FUNC_1(VAR_9.data, 0) * 100000;

exit:
 return VAR_12;
}
