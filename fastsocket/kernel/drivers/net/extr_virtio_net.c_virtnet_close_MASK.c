
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {int napi; int refill; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct virtnet_info* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0)
{
 struct virtnet_info *VAR_1 = FUNC_2(VAR_0);


 FUNC_0(&VAR_1->refill);
 FUNC_1(&VAR_1->napi);

 return 0;
}
