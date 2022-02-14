
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ifb_private {int tq; int rq; int ifb_tasklet; } ;


 struct ifb_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0)
{
 struct ifb_private *VAR_1 = FUNC_0(VAR_0);

 FUNC_3(&VAR_1->ifb_tasklet);
 FUNC_1(VAR_0);
 FUNC_2(&VAR_1->rq);
 FUNC_2(&VAR_1->tq);
 return 0;
}
