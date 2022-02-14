
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct ip6_msource {scalar_t__ im6s_stp; struct in6_addr im6s_addr; } ;
struct in6_multi {scalar_t__ in6m_nsrc; TYPE_1__* in6m_st; int in6m_srcs; } ;
struct TYPE_2__ {int iss_rec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct in6_multi*) ;
 int VAR_2 ;
 struct ip6_msource* FUNC_1 (int ,int *,struct ip6_msource*) ;
 int FUNC_2 (int ,int *,struct ip6_msource*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct ip6_msource* FUNC_3 (int ) ;

int
FUNC_4(struct in6_multi *VAR_5, const struct in6_addr *VAR_6)
{
 struct ip6_msource VAR_7;
 struct ip6_msource *VAR_8, *VAR_9;

 FUNC_0(VAR_5);

 VAR_7.im6s_addr = *VAR_6;
 VAR_8 = FUNC_1(VAR_4, &VAR_5->in6m_srcs, &VAR_7);
 if (VAR_8 && VAR_8->im6s_stp)
  return (0);
 if (VAR_8 == ((void*)0)) {
  if (VAR_5->in6m_nsrc == VAR_3)
   return (-VAR_1);
  VAR_9 = FUNC_3(VAR_2);
  if (VAR_9 == ((void*)0))
   return (-VAR_0);
  VAR_9->im6s_addr = VAR_7.im6s_addr;
  FUNC_2(VAR_4, &VAR_5->in6m_srcs, VAR_9);
  ++VAR_5->in6m_nsrc;
  VAR_8 = VAR_9;
 }





 ++VAR_8->im6s_stp;
 ++VAR_5->in6m_st[1].iss_rec;

 return (1);
}
