
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
struct sockaddr {int sa_len; } ;
struct rtentry {struct ifnet* rt_ifp; } ;
struct TYPE_8__ {struct rtentry* ro_rt; } ;
struct inpcb {int inp_flags; int inp_socket; TYPE_3__ in6p_route; int in6p_outputopts; TYPE_1__* inp_boundifp; } ;
struct in6_addr {int dummy; } ;
struct ifnet {int dummy; } ;
struct TYPE_7__ {scalar_t__ sin6_family; scalar_t__ sin6_port; int sin6_addr; } ;
struct TYPE_6__ {unsigned int if_index; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_6 ;
 TYPE_2__* FUNC_1 (struct sockaddr*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*) ;
 scalar_t__ FUNC_4 (int *,TYPE_2__*,struct inpcb*,int *,int *) ;
 scalar_t__ VAR_9 ;
 struct in6_addr* FUNC_5 (TYPE_2__*,int ,struct inpcb*,TYPE_3__*,struct ifnet**,struct in6_addr*,unsigned int,int*) ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (struct inpcb*,struct ifnet*) ;
 int FUNC_7 (int ,int) ;

int
FUNC_8(struct inpcb *VAR_11, struct sockaddr *VAR_12,
    struct in6_addr *VAR_13, struct ifnet **VAR_14)
{
 struct in6_addr *VAR_15 = ((void*)0);
 struct in6_addr VAR_16;
 int VAR_17 = 0;
 unsigned int VAR_18;

 if (VAR_14 != ((void*)0))
  *VAR_14 = ((void*)0);
 if (VAR_12->sa_len != sizeof (struct sockaddr_in6))
  return (VAR_4);
 if (FUNC_1(VAR_12)->sin6_family != VAR_0)
  return (VAR_2);
 if (FUNC_1(VAR_12)->sin6_port == 0)
  return (VAR_1);


 if (FUNC_4(&FUNC_1(VAR_12)->sin6_addr, FUNC_1(VAR_12), VAR_11, ((void*)0), ((void*)0)) != 0)
  return (VAR_4);

 if (VAR_9) {




  if (FUNC_0(&FUNC_1(VAR_12)->sin6_addr))
   FUNC_1(VAR_12)->sin6_addr = VAR_10;
 }

 VAR_18 = (VAR_11->inp_flags & VAR_6) ?
     VAR_11->inp_boundifp->if_index : VAR_5;
 VAR_15 = FUNC_5(FUNC_1(VAR_12), VAR_11->in6p_outputopts, VAR_11,
     &VAR_11->in6p_route, VAR_14, &VAR_16, VAR_18, &VAR_17);

 if (VAR_14 != ((void*)0)) {
  struct rtentry *VAR_19 = VAR_11->in6p_route.ro_rt;







  if (VAR_19 != ((void*)0) && VAR_19->rt_ifp != *VAR_14) {
   FUNC_2(VAR_19->rt_ifp);
   if (*VAR_14 != ((void*)0))
    FUNC_3(*VAR_14);
   *VAR_14 = VAR_19->rt_ifp;
  }
 }

 if (VAR_15 == ((void*)0)) {
  if (VAR_14 != ((void*)0) && (*VAR_14) != ((void*)0) &&
      FUNC_6(VAR_11, *VAR_14)) {
   FUNC_7(VAR_11->inp_socket,
       (VAR_8 | VAR_7));
   VAR_17 = VAR_3;
  }
  if (VAR_17 == 0)
   VAR_17 = VAR_1;
  return (VAR_17);
 }

 *VAR_13 = *VAR_15;




 return (0);
}
