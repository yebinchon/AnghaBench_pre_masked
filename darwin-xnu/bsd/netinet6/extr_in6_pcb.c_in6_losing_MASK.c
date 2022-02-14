
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtentry {int rt_flags; int rt_gateway; } ;
struct TYPE_2__ {struct rtentry* ro_rt; } ;
struct inpcb {TYPE_1__ in6p_route; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct rtentry*) ;
 int FUNC_4 (struct rtentry*) ;
 int FUNC_5 (int ,int ,int ,int ,int,int *) ;

void
FUNC_6(struct inpcb *VAR_3)
{
 struct rtentry *VAR_4;

 if ((VAR_4 = VAR_3->in6p_route.ro_rt) != ((void*)0)) {
  FUNC_1(VAR_4);
  if (VAR_4->rt_flags & VAR_1) {





   VAR_4->rt_flags |= VAR_0;
   FUNC_2(VAR_4);
   (void) FUNC_5(VAR_2, FUNC_3(VAR_4),
       VAR_4->rt_gateway, FUNC_4(VAR_4), VAR_4->rt_flags, ((void*)0));
  } else {
   FUNC_2(VAR_4);
  }




 }
 FUNC_0(&VAR_3->in6p_route);
}
