
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {scalar_t__ sin6_scope_id; } ;
struct rtentry {int rt_flags; scalar_t__ rt_gateway; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void
FUNC_1(struct rtentry *VAR_1, struct sockaddr_in6 *VAR_2)
{
 FUNC_0(VAR_1->rt_flags & VAR_0);

 *VAR_2 = *((struct sockaddr_in6 *)(void *)VAR_1->rt_gateway);
 VAR_2->sin6_scope_id = 0;
}
