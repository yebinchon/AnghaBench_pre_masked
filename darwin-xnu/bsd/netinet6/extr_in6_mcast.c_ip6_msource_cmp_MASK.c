
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_msource {int im6s_addr; } ;
struct in6_addr {int dummy; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static __inline int
FUNC_1(const struct ip6_msource *VAR_0, const struct ip6_msource *VAR_1)
{
 return (FUNC_0(&VAR_0->im6s_addr, &VAR_1->im6s_addr, sizeof(struct in6_addr)));
}
