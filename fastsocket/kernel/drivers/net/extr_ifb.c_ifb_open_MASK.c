
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ifb_private {int tq; int rq; int ifb_tasklet; } ;


 struct ifb_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1)
{
 struct ifb_private *VAR_2 = FUNC_0(VAR_1);

 FUNC_3(&VAR_2->ifb_tasklet, VAR_0, (unsigned long)VAR_1);
 FUNC_2(&VAR_2->rq);
 FUNC_2(&VAR_2->tq);
 FUNC_1(VAR_1);

 return 0;
}
