
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ disabled; int value; int flags; } ;
union iwreq_data {TYPE_1__ power; } ;
struct r8180_priv {int wx_sem; TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_4__ {scalar_t__ bHwRadioOff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct r8180_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_2__*,struct iw_request_info*,union iwreq_data*,char*) ;
 int FUNC_3 (char*,scalar_t__,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2,
          struct iw_request_info *VAR_3,
          union iwreq_data *VAR_4, char *VAR_5)
{
 int VAR_6;
 struct r8180_priv *VAR_7 = FUNC_1(VAR_2);


 if(VAR_7->ieee80211->bHwRadioOff)
  return 0;

 FUNC_0(&VAR_7->wx_sem);
 FUNC_3("=>>>>>>>>>>=============================>set power:%d,%d!\n",VAR_4->power.disabled, VAR_4->power.flags);
 if (VAR_4->power.disabled==0) {
  VAR_4->power.flags|=VAR_0;
  VAR_4->power.flags|=VAR_1;
  VAR_4->power.value =1000;
 }

 VAR_6 = FUNC_2(VAR_7->ieee80211, VAR_3, VAR_4, VAR_5);

 FUNC_4(&VAR_7->wx_sem);

 return VAR_6;
}
