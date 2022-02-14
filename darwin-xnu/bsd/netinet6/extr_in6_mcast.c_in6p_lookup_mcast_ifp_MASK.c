
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in6 {scalar_t__ sin6_family; int sin6_addr; } ;
struct route_in6 {TYPE_2__* ro_rt; int ro_dst; } ;
struct route {int dummy; } ;
struct inpcb {int inp_vflag; int inp_flags; TYPE_1__* inp_boundifp; } ;
struct ifnet {int dummy; } ;
struct TYPE_4__ {struct ifnet* rt_ifp; } ;
struct TYPE_3__ {unsigned int if_index; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct route_in6*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,struct sockaddr_in6 const*,int) ;
 int FUNC_4 (struct route_in6*,int ,int) ;
 int FUNC_5 (struct route*,int ,unsigned int) ;

__attribute__((used)) static struct ifnet *
FUNC_6(const struct inpcb *VAR_4,
    const struct sockaddr_in6 *VAR_5)
{
 struct route_in6 VAR_6;
 struct ifnet *VAR_7;
 unsigned int VAR_8 = VAR_1;

 FUNC_2(VAR_4 == ((void*)0) || (VAR_4->inp_vflag & VAR_3));
 FUNC_2(VAR_5->sin6_family == VAR_0);
 if (FUNC_0(&VAR_5->sin6_addr) == 0)
  return ((void*)0);

 if (VAR_4 != ((void*)0) && (VAR_4->inp_flags & VAR_2))
  VAR_8 = VAR_4->inp_boundifp->if_index;

 VAR_7 = ((void*)0);
 FUNC_4(&VAR_6, 0, sizeof(struct route_in6));
 FUNC_3(&VAR_6, VAR_5, sizeof(struct sockaddr_in6));
 FUNC_5((struct route *)&VAR_6, 0, VAR_8);
 if (VAR_6 != ((void*)0)) {
  VAR_7 = VAR_6->rt_ifp;
  FUNC_2(VAR_7 != ((void*)0));
 }
 FUNC_1(&VAR_6);

 return (VAR_7);
}
