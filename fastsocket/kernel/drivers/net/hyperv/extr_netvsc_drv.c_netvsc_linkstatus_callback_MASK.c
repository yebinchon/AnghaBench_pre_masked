
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netvsc_device {struct net_device* ndev; } ;
struct net_device_context {int dwork; } ;
struct net_device {int dummy; } ;
struct hv_device {int dummy; } ;


 struct netvsc_device* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct net_device_context* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,int ) ;

void FUNC_7(struct hv_device *VAR_0,
           unsigned int VAR_1)
{
 struct net_device *VAR_2;
 struct net_device_context *VAR_3;
 struct netvsc_device *VAR_4;

 VAR_4 = FUNC_0(VAR_0);
 VAR_2 = VAR_4->ndev;

 if (!VAR_2) {
  FUNC_2(VAR_2, "got link status but net device "
    "not initialized yet\n");
  return;
 }

 if (VAR_1 == 1) {
  FUNC_5(VAR_2);
  VAR_3 = FUNC_3(VAR_2);
  FUNC_6(&VAR_3->dwork, 0);
  FUNC_6(&VAR_3->dwork, FUNC_1(20));
 } else {
  FUNC_4(VAR_2);
 }
}
