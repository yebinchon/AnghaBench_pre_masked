
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int mcast_work; int driver_lock; scalar_t__ infra_open; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1)
{
 struct lbs_private *VAR_2 = VAR_1->ml_priv;

 FUNC_0(VAR_0);

 FUNC_4(&VAR_2->driver_lock);
 VAR_2->infra_open = 0;
 FUNC_2(VAR_1);
 FUNC_5(&VAR_2->driver_lock);

 FUNC_3(&VAR_2->mcast_work);

 FUNC_1(VAR_0);
 return 0;
}
