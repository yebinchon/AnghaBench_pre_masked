
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int pkt_flags; int dst_iff; int dst_ifindex; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

int
FUNC_1(struct mbuf *VAR_2, uint32_t *VAR_3, uint32_t *VAR_4)
{
 FUNC_0(VAR_2->m_flags & VAR_0);

 if (!(VAR_2->m_pkthdr.pkt_flags & VAR_1))
  return (-1);

 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_2->m_pkthdr.dst_ifindex;

 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_2->m_pkthdr.dst_iff;

 return (0);
}
