
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtentry {int dummy; } ;
struct TYPE_4__ {struct rtentry* ro_rt; } ;
struct TYPE_3__ {scalar_t__ s_addr; } ;
struct inpcb {TYPE_2__ inp_route; TYPE_1__ inp_laddr; } ;
struct in_ifaddr {int ia_ifa; } ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 struct in_ifaddr* FUNC_2 (scalar_t__) ;

void
FUNC_3(struct inpcb *VAR_3, int VAR_4)
{
#pragma unused(errno)
 boolean_t VAR_5 = VAR_0;
 struct rtentry *VAR_6;

 if ((VAR_6 = VAR_3->inp_route.ro_rt) != ((void*)0)) {
  struct in_ifaddr *VAR_7 = ((void*)0);


  if (VAR_3->inp_laddr.s_addr != VAR_1 &&
      (VAR_7 = FUNC_2(VAR_3->inp_laddr.s_addr)) != ((void*)0)) {




   VAR_5 = VAR_2;
  }
  if (VAR_7 != ((void*)0))
   FUNC_0(&VAR_7->ia_ifa);
 }
 if (VAR_6 == ((void*)0) || VAR_5)
  FUNC_1(&VAR_3->inp_route);
}
