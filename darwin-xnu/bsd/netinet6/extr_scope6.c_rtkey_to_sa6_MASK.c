
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {scalar_t__ sin6_scope_id; } ;
struct rtentry {int dummy; } ;
struct TYPE_2__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct rtentry*) ;

void
FUNC_2(struct rtentry *VAR_1, struct sockaddr_in6 *VAR_2)
{
 FUNC_0(FUNC_1(VAR_1)->sa_family == VAR_0);

 *VAR_2 = *((struct sockaddr_in6 *)(void *)FUNC_1(VAR_1));
 VAR_2->sin6_scope_id = 0;
}
