
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int _net_mtag; } ;
struct TYPE_4__ {TYPE_1__ builtin_mtag; int tags; } ;
struct mbuf {int m_flags; TYPE_2__ m_pkthdr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;

void
FUNC_3(struct mbuf *VAR_1, int VAR_2)
{
 FUNC_1(VAR_1->m_flags & VAR_0);

 FUNC_0(&VAR_1->m_pkthdr.tags);




 if (VAR_2) {
  FUNC_2(&VAR_1->m_pkthdr.builtin_mtag._net_mtag,
      sizeof (VAR_1->m_pkthdr.builtin_mtag._net_mtag));
 }
}
