
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct route {int dummy; } ;
struct ifnet {int if_cached_route_lock; int if_src_route; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct route*,int *,int) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_0, struct route *VAR_1)
{
 FUNC_1(&VAR_0->if_cached_route_lock);
 FUNC_0(&VAR_0->if_cached_route_lock);

 FUNC_3(VAR_1, &VAR_0->if_src_route, sizeof (*VAR_1));

 FUNC_2(&VAR_0->if_cached_route_lock);
}
