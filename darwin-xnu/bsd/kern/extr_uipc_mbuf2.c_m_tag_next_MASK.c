
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct m_tag {scalar_t__ m_tag_cookie; } ;


 scalar_t__ VAR_0 ;
 struct m_tag* FUNC_0 (struct m_tag*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;

struct m_tag *
FUNC_2(struct mbuf *VAR_2, struct m_tag *VAR_3)
{
#pragma unused(m)
 FUNC_1(VAR_3 != ((void*)0));
 FUNC_1(VAR_3->m_tag_cookie == VAR_0);

 return (FUNC_0(VAR_3, VAR_1));
}
