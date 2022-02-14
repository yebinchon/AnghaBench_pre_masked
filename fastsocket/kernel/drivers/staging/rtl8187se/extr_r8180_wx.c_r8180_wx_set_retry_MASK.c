
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; scalar_t__ value; scalar_t__ disabled; } ;
union iwreq_data {TYPE_2__ retry; } ;
struct r8180_priv {scalar_t__ retry_rts; scalar_t__ retry_data; int wx_sem; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_3__ {scalar_t__ bHwRadioOff; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 struct r8180_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5,
    struct iw_request_info *VAR_6,
    union iwreq_data *VAR_7, char *VAR_8)
{
 struct r8180_priv *VAR_9 = FUNC_2(VAR_5);
 int VAR_10 = 0;

 if(VAR_9->ieee80211->bHwRadioOff)
  return 0;

 FUNC_1(&VAR_9->wx_sem);

 if (VAR_7->retry.flags & VAR_1 ||
     VAR_7->retry.disabled){
  VAR_10 = -VAR_0;
  goto exit;
 }
 if (!(VAR_7->retry.flags & VAR_2)){
  VAR_10 = -VAR_0;
  goto exit;
 }

 if(VAR_7->retry.value > VAR_4){
  VAR_10= -VAR_0;
  goto exit;
 }
 if (VAR_7->retry.flags & VAR_3) {
  VAR_9->retry_rts = VAR_7->retry.value;
  FUNC_0("Setting retry for RTS/CTS data to %d", VAR_7->retry.value);

 }else {
  VAR_9->retry_data = VAR_7->retry.value;
  FUNC_0("Setting retry for non RTS/CTS data to %d", VAR_7->retry.value);
 }







  FUNC_3(VAR_5);
exit:
 FUNC_4(&VAR_9->wx_sem);

 return VAR_10;
}
