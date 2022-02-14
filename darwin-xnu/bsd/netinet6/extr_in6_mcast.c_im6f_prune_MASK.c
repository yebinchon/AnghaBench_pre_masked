
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct ip6_msource {int im6s_addr; } ;
struct in6_msource {int * im6sl_st; } ;
struct in6_mfilter {int im6f_sources; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ip6_msource* FUNC_0 (int ,int *,struct ip6_msource*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct in6_mfilter *VAR_3, const struct sockaddr_in6 *VAR_4)
{
 struct ip6_msource VAR_5;
 struct ip6_msource *VAR_6;
 struct in6_msource *VAR_7;

 VAR_5.im6s_addr = VAR_4->sin6_addr;
 VAR_6 = FUNC_0(VAR_2, &VAR_3->im6f_sources, &VAR_5);
 if (VAR_6 == ((void*)0))
  return (VAR_0);
 VAR_7 = (struct in6_msource *)VAR_6;
 VAR_7->im6sl_st[1] = VAR_1;
 return (0);
}
