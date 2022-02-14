
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pkt_ifainfo; int pkt_svc; int pkt_flags; int pkt_flowid; int pkt_flowsrc; int pkt_proto; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mbuf*,int ) ;

void
FUNC_2(struct mbuf *VAR_1, struct mbuf *VAR_2)
{
 FUNC_0(VAR_1->m_flags & VAR_0);
 FUNC_0(VAR_2->m_flags & VAR_0);

 VAR_1->m_pkthdr.pkt_proto = VAR_2->m_pkthdr.pkt_proto;
 VAR_1->m_pkthdr.pkt_flowsrc = VAR_2->m_pkthdr.pkt_flowsrc;
 VAR_1->m_pkthdr.pkt_flowid = VAR_2->m_pkthdr.pkt_flowid;
 VAR_1->m_pkthdr.pkt_flags = VAR_2->m_pkthdr.pkt_flags;
 (void) FUNC_1(VAR_1, VAR_2->m_pkthdr.pkt_svc);
 VAR_1->m_pkthdr.pkt_ifainfo = VAR_2->m_pkthdr.pkt_ifainfo;
}
