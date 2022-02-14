
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gfar_private {int * phydev; int reset_task; int rx_recycle; int napi; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct gfar_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_0)
{
 struct gfar_private *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->napi);

 FUNC_5(&VAR_1->rx_recycle);
 FUNC_0(&VAR_1->reset_task);
 FUNC_6(VAR_0);


 FUNC_4(VAR_1->phydev);
 VAR_1->phydev = ((void*)0);

 FUNC_3(VAR_0);

 return 0;
}
