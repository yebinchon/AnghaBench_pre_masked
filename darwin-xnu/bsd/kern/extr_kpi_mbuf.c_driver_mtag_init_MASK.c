
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* mbuf_t ;
struct TYPE_4__ {int pkt_flags; int driver_mtag; } ;
struct TYPE_5__ {TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1(mbuf_t VAR_1)
{
 if ((VAR_1->m_pkthdr.pkt_flags & VAR_0) == 0) {
  VAR_1->m_pkthdr.pkt_flags |= VAR_0;
  FUNC_0(&VAR_1->m_pkthdr.driver_mtag,
      sizeof(VAR_1->m_pkthdr.driver_mtag));
 }
}
