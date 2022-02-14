
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netvsc_device {int start_remove; struct net_device* ndev; } ;
struct net_device_context {int work; int dwork; } ;
struct net_device {int dummy; } ;
struct hv_device {int device; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct net_device*) ;
 struct netvsc_device* FUNC_4 (struct hv_device*) ;
 struct net_device_context* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct hv_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct hv_device *VAR_0)
{
 struct net_device *VAR_1;
 struct net_device_context *VAR_2;
 struct netvsc_device *VAR_3;

 VAR_3 = FUNC_4(VAR_0);
 VAR_1 = VAR_3->ndev;

 if (VAR_1 == ((void*)0)) {
  FUNC_2(&VAR_0->device, "No net device to remove\n");
  return 0;
 }

 VAR_3->start_remove = 1;

 VAR_2 = FUNC_5(VAR_1);
 FUNC_0(&VAR_2->dwork);
 FUNC_1(&VAR_2->work);


 FUNC_6(VAR_1);

 FUNC_8(VAR_1);





 FUNC_7(VAR_0);

 FUNC_3(VAR_1);
 return 0;
}
