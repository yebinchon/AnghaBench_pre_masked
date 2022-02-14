
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8180_priv {int ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int data; } ;
struct iwreq {TYPE_1__ u; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;

 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct r8180_priv *VAR_4 = (struct r8180_priv *)FUNC_0(VAR_1);
 struct iwreq *VAR_5 = (struct iwreq *) VAR_2;
 int VAR_6=-1;

 switch (VAR_3) {
 case 128:
  VAR_6 = FUNC_1(VAR_4->ieee80211, &VAR_5->u.data);
  return VAR_6;
 default:
  return -VAR_0;
 }

 return -VAR_0;
}
