
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcphdr {int th_flags; } ;
struct TYPE_3__ {scalar_t__ mpt_dfin; int mpt_csum; int mpt_len; int mpt_sseq; int mpt_dsn; } ;
struct tcpcb {int t_mpflags; TYPE_1__ t_rcv_map; } ;
struct TYPE_4__ {int pkt_flags; int mp_csum; int mp_rlen; int mp_rseq; int mp_dsn; } ;
struct mbuf {int m_flags; TYPE_2__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;

void
FUNC_1(struct tcpcb *VAR_7, struct mbuf *VAR_8, struct tcphdr *VAR_9)
{
 FUNC_0(VAR_8->m_flags & VAR_0);
 FUNC_0(!(VAR_8->m_pkthdr.pkt_flags & VAR_1));

 if (VAR_7->t_mpflags & VAR_4) {
  VAR_8->m_pkthdr.mp_dsn = VAR_7->t_rcv_map.mpt_dsn;
  VAR_8->m_pkthdr.mp_rseq = VAR_7->t_rcv_map.mpt_sseq;
  VAR_8->m_pkthdr.mp_rlen = VAR_7->t_rcv_map.mpt_len;
  VAR_8->m_pkthdr.mp_csum = VAR_7->t_rcv_map.mpt_csum;
  if (VAR_7->t_rcv_map.mpt_dfin)
   VAR_8->m_pkthdr.pkt_flags |= VAR_2;

  VAR_8->m_pkthdr.pkt_flags |= VAR_1;

  VAR_7->t_mpflags &= ~VAR_4;
  VAR_7->t_mpflags |= VAR_5;
 } else if (VAR_7->t_mpflags & VAR_6) {
  if (VAR_9->th_flags & VAR_3)
   VAR_8->m_pkthdr.pkt_flags |= VAR_2;
 }
}
