
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct rtentry {int dummy; } ;
struct route_in6 {int dummy; } ;
struct ip6_pktopts {int dummy; } ;
struct ip6_out_args {int dummy; } ;
struct ip6_moptions {int dummy; } ;
struct in6_ifaddr {int dummy; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct sockaddr_in6*,struct sockaddr_in6*,struct ip6_pktopts*,struct ip6_moptions*,struct in6_ifaddr**,struct route_in6*,struct ifnet**,struct rtentry**,int,int ,struct ip6_out_args*) ;

int
FUNC_1(struct sockaddr_in6 *VAR_0, struct sockaddr_in6 *VAR_1,
    struct ip6_pktopts *VAR_2, struct ip6_moptions *VAR_3,
    struct in6_ifaddr **VAR_4, struct route_in6 *VAR_5, struct ifnet **VAR_6,
    struct rtentry **VAR_7, int VAR_8, struct ip6_out_args *VAR_9)
{

 return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8, 0, VAR_9));
}
