
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iw_point {int length; int pointer; } ;
struct TYPE_5__ {int reason_code; int command; } ;
struct TYPE_4__ {int value; int name; } ;
struct TYPE_6__ {TYPE_2__ mlme; TYPE_1__ wpa_param; } ;
struct ieee_param {int cmd; TYPE_3__ u; } ;
struct ieee80211_device {int wx_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 scalar_t__ FUNC_0 (struct ieee_param*,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct ieee_param*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ieee80211_device*,int ,int ) ;
 int FUNC_4 (struct ieee80211_device*,struct ieee_param*,int) ;
 int FUNC_5 (struct ieee80211_device*,int ,int ) ;
 int FUNC_6 (struct ieee80211_device*,struct ieee_param*,int) ;
 int FUNC_7 (struct ieee_param*) ;
 scalar_t__ FUNC_8 (int,int ) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct ieee80211_device *VAR_5, struct iw_point *VAR_6)
{
 struct ieee_param *VAR_7;
 int VAR_8=0;

 FUNC_2(&VAR_5->wx_sem);


 if (VAR_6->length < sizeof(struct ieee_param) || !VAR_6->pointer){
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_7 = (struct ieee_param *)FUNC_8(VAR_6->length, VAR_4);
 if (VAR_7 == ((void*)0)){
  VAR_8 = -VAR_2;
  goto out;
 }
 if (FUNC_0(VAR_7, VAR_6->pointer, VAR_6->length)) {
  FUNC_7(VAR_7);
  VAR_8 = -VAR_0;
  goto out;
 }

 switch (VAR_7->cmd) {

 case 128:
  VAR_8 = FUNC_5(VAR_5, VAR_7->u.wpa_param.name,
     VAR_7->u.wpa_param.value);
  break;

 case 129:
  VAR_8 = FUNC_6(VAR_5, VAR_7, VAR_6->length);
  break;

 case 130:
  VAR_8 = FUNC_4(VAR_5, VAR_7, VAR_6->length);
  break;

 case 131:
  VAR_8 = FUNC_3(VAR_5, VAR_7->u.mlme.command,
       VAR_7->u.mlme.reason_code);
  break;

 default:
  FUNC_9("Unknown WPA supplicant request: %d\n",VAR_7->cmd);
  VAR_8 = -VAR_3;
  break;
 }

 if (VAR_8 == 0 && FUNC_1(VAR_6->pointer, VAR_7, VAR_6->length))
  VAR_8 = -VAR_0;

 FUNC_7(VAR_7);
out:
 FUNC_10(&VAR_5->wx_sem);

 return VAR_8;
}
