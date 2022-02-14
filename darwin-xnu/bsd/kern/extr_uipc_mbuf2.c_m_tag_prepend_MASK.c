
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tags; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct m_tag {int dummy; } ;


 int FUNC_0 (int *,struct m_tag*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;

void
FUNC_2(struct mbuf *VAR_1, struct m_tag *VAR_2)
{
 FUNC_1(VAR_1 != ((void*)0) && VAR_2 != ((void*)0));

 FUNC_0(&VAR_1->m_pkthdr.tags, VAR_2, VAR_0);
}
