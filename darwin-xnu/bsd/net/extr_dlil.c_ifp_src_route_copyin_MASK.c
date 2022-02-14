
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct route {int dummy; } ;
struct ifnet {int if_cached_route_lock; int if_src_route; scalar_t__ if_fwd_cacheok; } ;


 int FUNC_0 (struct route*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct route*,int *,int) ;

__attribute__((used)) static void
FUNC_5(struct ifnet *VAR_0, struct route *VAR_1)
{
 FUNC_2(&VAR_0->if_cached_route_lock);
 FUNC_1(&VAR_0->if_cached_route_lock);

 if (VAR_0->if_fwd_cacheok) {
  FUNC_4(VAR_1, &VAR_0->if_src_route, sizeof (*VAR_1));
 } else {
  FUNC_0(VAR_1);
 }
 FUNC_3(&VAR_0->if_cached_route_lock);
}
