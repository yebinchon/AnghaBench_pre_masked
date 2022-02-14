
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct rndis_wlan_private {int work; int workqueue; int work_pending; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct rndis_wlan_private* FUNC_0 (struct usbnet*) ;
 struct usbnet* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1)
{
 struct usbnet *VAR_2 = FUNC_1(VAR_1);
 struct rndis_wlan_private *VAR_3 = FUNC_0(VAR_2);

 if (FUNC_4(VAR_0, &VAR_3->work_pending))
  return;

 FUNC_3(VAR_0, &VAR_3->work_pending);
 FUNC_2(VAR_3->workqueue, &VAR_3->work);
}
