
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct in6_addr {int dummy; } ;
struct sockaddr_in6 {int sin6_len; struct in6_addr sin6_addr; int sin6_family; } ;
struct route_in6 {TYPE_2__* ro_rt; int ro_dst; } ;
struct route {int dummy; } ;
struct ifnet {int if_index; } ;
typedef int boolean_t ;
struct TYPE_3__ {scalar_t__ rmx_mtu; int rmx_locks; } ;
struct TYPE_4__ {TYPE_1__ rt_rmx; struct ifnet* rt_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct in6_addr*,struct in6_addr*) ;
 scalar_t__ FUNC_1 (struct in6_addr*) ;
 scalar_t__ FUNC_2 (struct ifnet*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct route_in6*) ;
 scalar_t__ FUNC_4 (struct route_in6*) ;
 int VAR_5 ;
 struct sockaddr_in6* FUNC_5 (int *) ;
 int VAR_6 ;
 int FUNC_6 (struct sockaddr_in6*,int) ;
 int FUNC_7 (struct route*,int ) ;

__attribute__((used)) static int
FUNC_8(struct route_in6 *VAR_7, struct route_in6 *VAR_8,
    struct ifnet *VAR_9, struct in6_addr *VAR_10, u_int32_t *VAR_11,
    boolean_t *VAR_12)
{
 u_int32_t VAR_13 = 0;
 boolean_t VAR_14 = VAR_2;
 int VAR_15 = 0;
 boolean_t VAR_16 = VAR_2;

 if (FUNC_1(VAR_10))
  VAR_16 = VAR_6;

 if (VAR_7 != VAR_8) {

  struct sockaddr_in6 *VAR_17 = FUNC_5(&VAR_7->ro_dst);
  if (FUNC_4(VAR_7) ||
      !FUNC_0(&VAR_17->sin6_addr, VAR_10))
   FUNC_3(VAR_7);

  if (VAR_7->ro_rt == ((void*)0)) {
   FUNC_6(VAR_17, sizeof (*VAR_17));
   VAR_17->sin6_family = VAR_0;
   VAR_17->sin6_len = sizeof (struct sockaddr_in6);
   VAR_17->sin6_addr = *VAR_10;

   FUNC_7((struct route *)VAR_7,
       VAR_9 != ((void*)0) ? VAR_9->if_index : VAR_3);
  }
 }

 if (VAR_7->ro_rt != ((void*)0)) {
  u_int32_t VAR_18;

  if (VAR_9 == ((void*)0))
   VAR_9 = VAR_7->ro_rt->rt_ifp;

  VAR_18 = FUNC_2(VAR_9);






  VAR_13 = VAR_7->ro_rt->rt_rmx.rmx_mtu;
  if (VAR_13 > VAR_18 || VAR_13 == 0) {
   VAR_13 = VAR_18;
   if (!(VAR_7->ro_rt->rt_rmx.rmx_locks & VAR_5))
    VAR_7->ro_rt->rt_rmx.rmx_mtu = VAR_13;
  } else if (VAR_13 < VAR_4) {
   VAR_14 = VAR_6;
   VAR_13 = VAR_4;
  }
 } else {
  if (VAR_9) {

   VAR_13 = FUNC_2(VAR_9);
  } else {
   VAR_15 = VAR_1;
  }
 }

 *VAR_11 = VAR_13;
 if ((VAR_12 != ((void*)0)) && !VAR_16)
  *VAR_12 = VAR_14;
 return (VAR_15);
}
