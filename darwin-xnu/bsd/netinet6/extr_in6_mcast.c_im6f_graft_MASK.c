
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sockaddr_in6 {int sin6_addr; } ;
struct ip6_msource {int dummy; } ;
struct in6_msource {int * im6sl_st; int im6s_addr; } ;
struct in6_mfilter {int im6f_nsrc; int im6f_sources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,struct ip6_msource*) ;
 struct in6_msource* FUNC_1 (int ) ;
 int VAR_2 ;

__attribute__((used)) static struct in6_msource *
FUNC_2(struct in6_mfilter *VAR_3, const uint8_t VAR_4,
    const struct sockaddr_in6 *VAR_5)
{
 struct in6_msource *VAR_6;

 VAR_6 = FUNC_1(VAR_1);
 if (VAR_6 == ((void*)0))
  return (((void*)0));
 VAR_6->im6s_addr = VAR_5->sin6_addr;
 VAR_6->im6sl_st[0] = VAR_0;
 VAR_6->im6sl_st[1] = VAR_4;
 FUNC_0(VAR_2, &VAR_3->im6f_sources,
     (struct ip6_msource *)VAR_6);
 ++VAR_3->im6f_nsrc;

 return (VAR_6);
}
