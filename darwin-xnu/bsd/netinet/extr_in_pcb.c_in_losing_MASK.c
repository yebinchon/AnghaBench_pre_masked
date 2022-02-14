
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtentry {int rt_flags; int rt_gateway; } ;
struct TYPE_4__ {struct rtentry* ro_rt; } ;
struct TYPE_3__ {scalar_t__ s_addr; } ;
struct inpcb {TYPE_2__ inp_route; TYPE_1__ inp_laddr; } ;
struct in_ifaddr {int ia_ifa; } ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct rtentry*) ;
 scalar_t__ VAR_5 ;
 struct in_ifaddr* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct rtentry*) ;
 int FUNC_6 (struct rtentry*) ;
 int FUNC_7 (int ,int ,int ,int ,int,int *) ;

void
FUNC_8(struct inpcb *VAR_6)
{
 boolean_t VAR_7 = VAR_0;
 struct rtentry *VAR_8;

 if ((VAR_8 = VAR_6->inp_route.ro_rt) != ((void*)0)) {
  struct in_ifaddr *VAR_9 = ((void*)0);

  FUNC_2(VAR_8);
  if (VAR_8->rt_flags & VAR_3) {





   VAR_8->rt_flags |= VAR_2;
   FUNC_3(VAR_8);
   (void) FUNC_7(VAR_4, FUNC_5(VAR_8),
       VAR_8->rt_gateway, FUNC_6(VAR_8), VAR_8->rt_flags, ((void*)0));
  } else {
   FUNC_3(VAR_8);
  }

  if (VAR_6->inp_laddr.s_addr != VAR_1 &&
      (VAR_9 = FUNC_4(VAR_6->inp_laddr.s_addr)) != ((void*)0)) {




   VAR_7 = VAR_5;
  }
  if (VAR_9 != ((void*)0))
   FUNC_0(&VAR_9->ia_ifa);
 }
 if (VAR_8 == ((void*)0) || VAR_7)
  FUNC_1(&VAR_6->inp_route);
}
