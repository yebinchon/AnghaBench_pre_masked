
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mptcb {int mpt_sndmax; int mpt_mpte; } ;
struct mppcb {int dummy; } ;
struct mpp_mtp {struct mptcb mtcb; } ;
struct TYPE_2__ {int pkt_flags; scalar_t__ mp_rlen; int mp_dsn; } ;
struct mbuf {int m_flags; struct mbuf* m_next; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mptcb*) ;
 scalar_t__ FUNC_2 (struct mbuf*) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct mppcb *VAR_3, struct mbuf *VAR_4)
{
 struct mptcb *VAR_5;

 if (VAR_4 == ((void*)0))
  return;

 FUNC_1(VAR_5 = &((struct mpp_mtp *)VAR_3)->mtcb);
 FUNC_3(VAR_5->mpt_mpte);

 while (VAR_4) {
  FUNC_0(VAR_4->m_flags & VAR_0);
  VAR_4->m_pkthdr.pkt_flags |= (VAR_2 | VAR_1);
  VAR_4->m_pkthdr.mp_dsn = VAR_5->mpt_sndmax;
  VAR_4->m_pkthdr.mp_rlen = FUNC_2(VAR_4);
  VAR_5->mpt_sndmax += FUNC_2(VAR_4);
  VAR_4 = VAR_4->m_next;
 }
}
