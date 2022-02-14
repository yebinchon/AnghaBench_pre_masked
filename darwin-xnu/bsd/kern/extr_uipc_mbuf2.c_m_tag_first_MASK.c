
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tags; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;
struct m_tag {int dummy; } ;


 int VAR_0 ;
 struct m_tag* FUNC_0 (int *) ;
 int FUNC_1 (int) ;

struct m_tag *
FUNC_2(struct mbuf *VAR_1)
{
 FUNC_1(VAR_1->m_flags & VAR_0);

 return (FUNC_0(&VAR_1->m_pkthdr.tags));
}
