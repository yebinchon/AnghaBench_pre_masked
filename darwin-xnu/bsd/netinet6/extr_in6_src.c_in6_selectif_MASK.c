
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
struct rtentry {int rt_flags; TYPE_1__* rt_ifa; } ;
struct route_in6 {struct rtentry* ro_rt; } ;
struct ip6_pktopts {int dummy; } ;
struct ip6_out_args {int dummy; } ;
struct ip6_moptions {int dummy; } ;
struct ifnet {int dummy; } ;
typedef int sro ;
struct TYPE_2__ {struct ifnet* ifa_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct route_in6*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct route_in6*,int) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (int *,struct sockaddr_in6*,struct ip6_pktopts*,struct ip6_moptions*,int *,struct route_in6*,struct ifnet**,struct rtentry**,int ,int,struct ip6_out_args*) ;

int
FUNC_6(struct sockaddr_in6 *VAR_5, struct ip6_pktopts *VAR_6,
    struct ip6_moptions *VAR_7, struct route_in6 *VAR_8,
    struct ip6_out_args *VAR_9, struct ifnet **VAR_10)
{
 int VAR_11 = 0;
 struct route_in6 VAR_12;
 struct rtentry *VAR_13 = ((void*)0);

 if (VAR_8 == ((void*)0)) {
  FUNC_2(&VAR_12, sizeof (VAR_12));
  VAR_8 = &VAR_12;
 }

 if ((VAR_11 = FUNC_5(((void*)0), VAR_5, VAR_6, VAR_7, ((void*)0), VAR_8, VAR_10,
     &VAR_13, 0, 1, VAR_9)) != 0)
  goto done;
 if (VAR_13 && (VAR_13->rt_flags & (VAR_4 | VAR_2))) {
  VAR_11 = ((VAR_13->rt_flags & VAR_3) ? VAR_0 : VAR_1);
  goto done;
 }
 if (VAR_13 != ((void*)0) && VAR_13->rt_ifa != ((void*)0) && VAR_13->rt_ifa->ifa_ifp != ((void*)0) &&
     VAR_10 != ((void*)0)) {
  FUNC_3(VAR_13->rt_ifa->ifa_ifp);
  if (*VAR_10 != ((void*)0))
   FUNC_4(*VAR_10);
  *VAR_10 = VAR_13->rt_ifa->ifa_ifp;
 }

done:
 if (VAR_8 == &VAR_12) {
  FUNC_1(VAR_13 == ((void*)0) || VAR_13 == VAR_8->ro_rt);
  FUNC_0(VAR_8);
 }





 return (VAR_11);
}
