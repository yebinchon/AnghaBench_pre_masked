
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tags; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;
struct m_tag {scalar_t__ m_tag_cookie; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct m_tag* FUNC_0 (int *) ;
 struct m_tag* FUNC_1 (struct m_tag*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mbuf*,struct m_tag*) ;
 int VAR_2 ;

void
FUNC_4(struct mbuf *VAR_3, struct m_tag *VAR_4)
{
 struct m_tag *VAR_5, *VAR_6;

 FUNC_2(VAR_3->m_flags & VAR_0);

 if (VAR_4 != ((void*)0)) {
  VAR_5 = VAR_4;
 } else {
  VAR_5 = FUNC_0(&VAR_3->m_pkthdr.tags);
 }
 if (VAR_5 == ((void*)0))
  return;

 FUNC_2(VAR_5->m_tag_cookie == VAR_1);
 while ((VAR_6 = FUNC_1(VAR_5, VAR_2)) != ((void*)0)) {
  FUNC_2(VAR_6->m_tag_cookie == VAR_1);
  FUNC_3(VAR_3, VAR_6);
 }
 FUNC_3(VAR_3, VAR_5);
}
