
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union iwreq_data {scalar_t__ mode; } ;
struct r8180_priv {int wx_sem; TYPE_1__* ieee80211; scalar_t__ bInactivePs; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ bHwRadioOff; } ;


 int FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 struct r8180_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_1__*,struct iw_request_info*,union iwreq_data*,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, struct iw_request_info *VAR_2,
        union iwreq_data *VAR_3, char *VAR_4)
{
 struct r8180_priv *VAR_5 = FUNC_2(VAR_1);
 int VAR_6;


 if(VAR_5->ieee80211->bHwRadioOff)
  return 0;

 FUNC_1(&VAR_5->wx_sem);

 if(VAR_5->bInactivePs){
  if(VAR_3->mode == VAR_0)
   FUNC_0(VAR_1);
 }
 VAR_6 = FUNC_3(VAR_5->ieee80211,VAR_2,VAR_3,VAR_4);



 FUNC_4(&VAR_5->wx_sem);
 return VAR_6;
}
