
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int mcast_work; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0)
{
 struct lbs_private *VAR_1 = VAR_0->ml_priv;

 FUNC_0(&VAR_1->mcast_work);
}
