
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct r8180_priv {int wx_sem; scalar_t__ up; TYPE_2__* ieee80211; } ;
struct net_device {int dev_addr; } ;
struct TYPE_3__ {int bssid; } ;
struct TYPE_4__ {scalar_t__ iw_mode; TYPE_1__ current_network; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 struct r8180_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct net_device *VAR_2, void *VAR_3)
{
 struct r8180_priv *VAR_4 = FUNC_1(VAR_2);
 struct sockaddr *VAR_5 = VAR_3;

 FUNC_0(&VAR_4->wx_sem);

 FUNC_2(VAR_2->dev_addr, VAR_5->sa_data, VAR_0);

 if(VAR_4->ieee80211->iw_mode == VAR_1)
  FUNC_2(VAR_4->ieee80211->current_network.bssid, VAR_2->dev_addr, VAR_0);

 if (VAR_4->up) {
  FUNC_3(VAR_2);
  FUNC_4(VAR_2);
 }

 FUNC_5(&VAR_4->wx_sem);

 return 0;
}
