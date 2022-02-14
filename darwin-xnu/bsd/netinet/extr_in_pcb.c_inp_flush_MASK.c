
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_4__ {TYPE_1__* ro_rt; } ;
struct inpcb {scalar_t__ inp_flowhash; struct ifnet* inp_last_outifp; TYPE_2__ inp_route; } ;
struct ifnet {int dummy; } ;
struct TYPE_3__ {struct ifnet* rt_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ifnet*,int ,scalar_t__,int *,int *,int ) ;
 int FUNC_2 (int) ;

int
FUNC_3(struct inpcb *VAR_2, int VAR_3)
{
 u_int32_t VAR_4 = VAR_2->inp_flowhash;
 struct ifnet *VAR_5, *VAR_6;


 if (VAR_3 != VAR_1 && !FUNC_0(VAR_3))
  return (VAR_0);


 if (VAR_4 == 0)
  return (0);


 VAR_5 = ((VAR_2->inp_route.ro_rt != ((void*)0)) ?
     VAR_2->inp_route.ro_rt->rt_ifp : ((void*)0));
 VAR_6 = VAR_2->inp_last_outifp;

 if (VAR_5 != ((void*)0))
  FUNC_1(VAR_5, FUNC_2(VAR_3), VAR_4, ((void*)0), ((void*)0), 0);
 if (VAR_6 != ((void*)0) && VAR_6 != VAR_5)
  FUNC_1(VAR_6, FUNC_2(VAR_3), VAR_4, ((void*)0), ((void*)0), 0);

 return (0);
}
