
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union iwreq_data {int dummy; } iwreq_data ;
struct r8180_priv {int wx_sem; TYPE_1__* ieee80211; scalar_t__ bInactivePs; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ bHwRadioOff; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 struct r8180_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_1__*,struct iw_request_info*,union iwreq_data*,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0,
         struct iw_request_info *VAR_1,
         union iwreq_data *VAR_2, char *VAR_3)
{
 struct r8180_priv *VAR_4 = FUNC_2(VAR_0);

 int VAR_5;

 if(VAR_4->ieee80211->bHwRadioOff)
  return 0;

 FUNC_1(&VAR_4->wx_sem);

 if(VAR_4->bInactivePs)
  FUNC_0(VAR_0);


 VAR_5 = FUNC_3(VAR_4->ieee80211,VAR_1,VAR_2,VAR_3);

 FUNC_4(&VAR_4->wx_sem);
 return VAR_5;
}
