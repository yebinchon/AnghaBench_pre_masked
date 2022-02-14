
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int pkt_flags; scalar_t__ pkt_timestamp; scalar_t__ pkt_ifainfo; scalar_t__ pkt_flowid; scalar_t__ pkt_flowsrc; scalar_t__ pkt_proto; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mbuf*,int ) ;

void
FUNC_2(struct mbuf *VAR_5, uint32_t VAR_6)
{
 FUNC_0(VAR_5->m_flags & VAR_1);

 VAR_5->m_pkthdr.pkt_proto = 0;
 VAR_5->m_pkthdr.pkt_flowsrc = 0;
 VAR_5->m_pkthdr.pkt_flowid = 0;
 VAR_5->m_pkthdr.pkt_flags &= VAR_6;

 if (!(VAR_5->m_pkthdr.pkt_flags & VAR_3))
  (void) FUNC_1(VAR_5, VAR_0);
 if (!(VAR_5->m_pkthdr.pkt_flags & VAR_2))
  VAR_5->m_pkthdr.pkt_ifainfo = 0;



 if (!(VAR_5->m_pkthdr.pkt_flags & VAR_4))
  VAR_5->m_pkthdr.pkt_timestamp = 0;
}
