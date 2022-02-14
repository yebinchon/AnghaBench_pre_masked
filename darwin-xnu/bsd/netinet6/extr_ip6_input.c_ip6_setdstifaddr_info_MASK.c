
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int dst_iff; int pkt_flags; scalar_t__ dst_ifindex; } ;
struct mbuf {int m_flags; TYPE_2__ m_pkthdr; } ;
struct in6_ifaddr {int ia6_flags; TYPE_1__* ia_ifp; } ;
struct TYPE_3__ {scalar_t__ if_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

void
FUNC_1(struct mbuf *VAR_2, uint32_t VAR_3, struct in6_ifaddr *VAR_4)
{
 FUNC_0(VAR_2->m_flags & VAR_0);






 if (VAR_4 != ((void*)0)) {
  VAR_2->m_pkthdr.pkt_flags |= VAR_1;
  VAR_2->m_pkthdr.dst_ifindex = VAR_4->ia_ifp->if_index;


  VAR_2->m_pkthdr.dst_iff = (VAR_4->ia6_flags & 0xffff);
 } else {
  VAR_2->m_pkthdr.dst_iff = 0;
  VAR_2->m_pkthdr.dst_ifindex = VAR_3;
  if (VAR_3 != 0)
   VAR_2->m_pkthdr.pkt_flags |= VAR_1;
 }
}
