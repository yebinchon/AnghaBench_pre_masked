
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfront_info {int napi; int netdev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct netfront_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0)
{
 struct netfront_info *VAR_1 = FUNC_1(VAR_0);
 FUNC_2(VAR_1->netdev);
 FUNC_0(&VAR_1->napi);
 return 0;
}
