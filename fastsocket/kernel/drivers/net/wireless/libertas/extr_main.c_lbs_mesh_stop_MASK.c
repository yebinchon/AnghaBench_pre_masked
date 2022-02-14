
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int mcast_work; int driver_lock; int mesh_connect_status; scalar_t__ mesh_open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2)
{
 struct lbs_private *VAR_3 = VAR_2->ml_priv;

 FUNC_0(VAR_0);
 FUNC_5(&VAR_3->driver_lock);

 VAR_3->mesh_open = 0;
 VAR_3->mesh_connect_status = VAR_1;

 FUNC_3(VAR_2);
 FUNC_2(VAR_2);

 FUNC_6(&VAR_3->driver_lock);

 FUNC_4(&VAR_3->mcast_work);

 FUNC_1(VAR_0);
 return 0;
}
