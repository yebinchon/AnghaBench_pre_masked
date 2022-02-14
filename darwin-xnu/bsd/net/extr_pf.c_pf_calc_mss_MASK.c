
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int16_t ;
struct tcphdr {int dummy; } ;
struct sockaddr_in6 {int sin6_family; int sin6_len; int sin6_addr; } ;
struct sockaddr_in {int sin_family; int sin_len; int sin_addr; } ;
struct rtentry {TYPE_1__* rt_ifp; } ;
struct route_in6 {struct rtentry* ro_rt; int ro_dst; } ;
struct route {struct rtentry* ro_rt; int ro_dst; } ;
struct pf_addr {int v6addr; int v4addr; } ;
struct ip6_hdr {int dummy; } ;
struct ip {int dummy; } ;
typedef int sa_family_t ;
typedef int ro6 ;
typedef int ro ;
struct TYPE_3__ {int if_mtu; } ;




 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct route_in6*,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct route_in6*) ;
 int FUNC_7 (struct rtentry*) ;
 int VAR_1 ;

__attribute__((used)) static u_int16_t
FUNC_8(struct pf_addr *VAR_2, sa_family_t VAR_3, u_int16_t VAR_4)
{
 struct rtentry *VAR_5 = ((void*)0);
 int VAR_6;
 u_int16_t VAR_7 = VAR_1;

 switch (VAR_3) {
 default:
  FUNC_5("pf_calc_mss: not AF_INET or AF_INET6!");
  return (0);
 }

 if (VAR_5 && VAR_5->rt_ifp) {

  int VAR_8 = VAR_5->rt_ifp->if_mtu;

  if (VAR_3 == 129 &&
      FUNC_1(VAR_5->rt_ifp)) {
   VAR_8 = FUNC_0(VAR_5->rt_ifp);

   VAR_8 -= VAR_0;
  }
  VAR_7 = VAR_8 - VAR_6 - sizeof (struct tcphdr);
  VAR_7 = FUNC_3(VAR_1, VAR_7);
  FUNC_7(VAR_5);
 }
 VAR_7 = FUNC_4(VAR_7, VAR_4);
 VAR_7 = FUNC_3(VAR_7, 64);
 return (VAR_7);
}
