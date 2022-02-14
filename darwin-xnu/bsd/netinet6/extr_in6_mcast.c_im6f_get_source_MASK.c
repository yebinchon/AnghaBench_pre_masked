
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct ip6_msource {int im6s_addr; } ;
struct in6_msource {int * im6sl_st; int im6s_addr; } ;
struct in6_mfilter {scalar_t__ im6f_nsrc; int im6f_sources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ip6_msource* FUNC_0 (int ,int *,struct ip6_msource*) ;
 int FUNC_1 (int ,int *,struct ip6_msource*) ;
 scalar_t__ VAR_4 ;
 struct in6_msource* FUNC_2 (int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_3(struct in6_mfilter *VAR_6, const struct sockaddr_in6 *VAR_7,
    struct in6_msource **VAR_8)
{
 struct ip6_msource VAR_9;
 struct ip6_msource *VAR_10;
 struct in6_msource *VAR_11;
 int VAR_12;

 VAR_12 = 0;
 VAR_10 = ((void*)0);
 VAR_11 = ((void*)0);

 VAR_9.im6s_addr = VAR_7->sin6_addr;
 VAR_10 = FUNC_0(VAR_5, &VAR_6->im6f_sources, &VAR_9);
 VAR_11 = (struct in6_msource *)VAR_10;
 if (VAR_11 == ((void*)0)) {
  if (VAR_6->im6f_nsrc == VAR_4)
   return (VAR_1);
  VAR_11 = FUNC_2(VAR_3);
  if (VAR_11 == ((void*)0))
   return (VAR_0);
  VAR_11->im6s_addr = VAR_9.im6s_addr;
  VAR_11->im6sl_st[0] = VAR_2;
  FUNC_1(VAR_5, &VAR_6->im6f_sources,
      (struct ip6_msource *)VAR_11);
  ++VAR_6->im6f_nsrc;
 }

 *VAR_8 = VAR_11;

 return (VAR_12);
}
