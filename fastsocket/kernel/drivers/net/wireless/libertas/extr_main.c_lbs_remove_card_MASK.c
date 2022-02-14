
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa_family; int sa_data; } ;
union iwreq_data {TYPE_1__ ap_addr; } ;
struct net_device {int dummy; } ;
struct lbs_private {scalar_t__ psmode; int surpriseremoved; struct net_device* dev; int main_thread; int work_thread; int mcast_work; int assoc_work; int scan_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct lbs_private*) ;
 int FUNC_9 (struct lbs_private*,int ) ;
 int FUNC_10 (struct lbs_private*) ;
 int FUNC_11 (struct lbs_private*) ;
 int FUNC_12 (int ,int,int ) ;
 int FUNC_13 (struct net_device*,int ,union iwreq_data*,int *) ;

void FUNC_14(struct lbs_private *VAR_7)
{
 struct net_device *VAR_8 = VAR_7->dev;
 union iwreq_data VAR_9;

 FUNC_5(VAR_5);

 FUNC_10(VAR_7);
 FUNC_11(VAR_7);

 VAR_8 = VAR_7->dev;

 FUNC_0(&VAR_7->scan_work);
 FUNC_0(&VAR_7->assoc_work);
 FUNC_1(&VAR_7->mcast_work);




 FUNC_7("destroying worker thread\n");
 FUNC_2(VAR_7->work_thread);
 FUNC_7("done destroying worker thread\n");

 if (VAR_7->psmode == VAR_4) {
  VAR_7->psmode = VAR_3;
  FUNC_9(VAR_7, VAR_1);
 }

 FUNC_12(VAR_9.ap_addr.sa_data, 0xaa, VAR_2);
 VAR_9.ap_addr.sa_family = VAR_0;
 FUNC_13(VAR_7->dev, VAR_6, &VAR_9, ((void*)0));


 VAR_7->surpriseremoved = 1;
 FUNC_4(VAR_7->main_thread);

 FUNC_8(VAR_7);

 VAR_7->dev = ((void*)0);
 FUNC_3(VAR_8);

 FUNC_6(VAR_5);
}
