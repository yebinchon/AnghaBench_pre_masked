
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union iwreq_data {int dummy; } iwreq_data ;
struct r8180_priv {int wx_sem; TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_3__ {int beacon_interval; } ;
struct TYPE_4__ {TYPE_1__ current_network; scalar_t__ bHwRadioOff; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 struct r8180_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0, struct iw_request_info *VAR_1,
     union iwreq_data *VAR_2, char *VAR_3)
{
 int *VAR_4 = (int *)VAR_3;
 int VAR_5 = VAR_4[0];

 struct r8180_priv *VAR_6 = FUNC_2(VAR_0);

 if(VAR_6->ieee80211->bHwRadioOff)
  return 0;

 FUNC_1(&VAR_6->wx_sem);
 FUNC_0("setting beacon interval to %x",VAR_5);

 VAR_6->ieee80211->current_network.beacon_interval=VAR_5;
 FUNC_3(VAR_0);
 FUNC_4(&VAR_6->wx_sem);

 return 0;
}
