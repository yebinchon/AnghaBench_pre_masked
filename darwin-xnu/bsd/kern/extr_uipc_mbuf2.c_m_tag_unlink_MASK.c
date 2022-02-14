
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
 int FUNC_0 (int *,struct m_tag*,int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_2(struct mbuf *VAR_4, struct m_tag *VAR_5)
{
 FUNC_1(VAR_4->m_flags & VAR_0);
 FUNC_1(VAR_5 != ((void*)0) && VAR_5->m_tag_cookie == VAR_1);

 FUNC_0(&VAR_4->m_pkthdr.tags, VAR_5, VAR_2, VAR_3);
}
