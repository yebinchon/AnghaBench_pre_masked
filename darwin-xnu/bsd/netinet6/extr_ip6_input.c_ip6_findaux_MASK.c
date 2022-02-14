
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;
struct ip6aux {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct m_tag* FUNC_0 (struct mbuf*,int ,int ,int *) ;

struct ip6aux *
FUNC_1(struct mbuf *VAR_2)
{
 struct m_tag *VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0,
     VAR_1, ((void*)0));

 return (VAR_3 ? (struct ip6aux *)(VAR_3 + 1) : ((void*)0));
}
