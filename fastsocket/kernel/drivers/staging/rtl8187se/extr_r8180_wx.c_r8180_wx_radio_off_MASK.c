
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union iwreq_data {int dummy; } iwreq_data ;
struct r8180_priv {int wx_sem; int (* rf_sleep ) (struct net_device*) ;TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ bHwRadioOff; } ;


 int FUNC_0 (int *) ;
 struct r8180_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0,
    struct iw_request_info *VAR_1,
    union iwreq_data *VAR_2, char *VAR_3)
{
 struct r8180_priv *VAR_4 =FUNC_1(VAR_0);

 if(VAR_4->ieee80211->bHwRadioOff)
  return 0;


 FUNC_0(&VAR_4->wx_sem);
 VAR_4->rf_sleep(VAR_0);

 FUNC_3(&VAR_4->wx_sem);

 return 0;

}
