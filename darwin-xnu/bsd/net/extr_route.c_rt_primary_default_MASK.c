
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct rtentry {int rt_flags; } ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sockaddr*) ;

boolean_t
FUNC_1(struct rtentry *VAR_1, struct sockaddr *VAR_2)
{
 return (FUNC_0(VAR_2) && !(VAR_1->rt_flags & VAR_0));
}
