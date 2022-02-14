
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;
struct ip6aux {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct m_tag* FUNC_0 (int ,int ,int,int ,struct mbuf*) ;
 struct m_tag* FUNC_1 (struct mbuf*,int ,int ,int *) ;
 int FUNC_2 (struct mbuf*,struct m_tag*) ;

struct ip6aux *
FUNC_3(struct mbuf *VAR_3)
{
 struct m_tag *VAR_4;


 VAR_4 = FUNC_1(VAR_3, VAR_0,
     VAR_1, ((void*)0));
 if (VAR_4 == ((void*)0)) {

  VAR_4 = FUNC_0(VAR_0, VAR_1,
      sizeof (struct ip6aux), VAR_2, VAR_3);


  if (VAR_4) {
   FUNC_2(VAR_3, VAR_4);
  }
 }

 return (VAR_4 ? (struct ip6aux *)(VAR_4 + 1) : ((void*)0));
}
