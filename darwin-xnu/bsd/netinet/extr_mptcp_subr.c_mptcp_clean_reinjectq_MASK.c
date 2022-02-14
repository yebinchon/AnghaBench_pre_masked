
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mptses {struct mbuf* mpte_reinjectq; struct mptcb* mpte_mptcb; } ;
struct mptcb {int mpt_snduna; } ;
struct TYPE_2__ {scalar_t__ mp_rlen; scalar_t__ mp_dsn; } ;
struct mbuf {struct mbuf* m_nextpkt; TYPE_1__ m_pkthdr; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct mptses*) ;

void
FUNC_4(struct mptses *VAR_0)
{
 struct mptcb *VAR_1 = VAR_0->mpte_mptcb;

 FUNC_3(VAR_0);

 while (VAR_0->mpte_reinjectq) {
  struct mbuf *VAR_2 = VAR_0->mpte_reinjectq;

  if (FUNC_0(VAR_2->m_pkthdr.mp_dsn, VAR_1->mpt_snduna) ||
      FUNC_1(VAR_2->m_pkthdr.mp_dsn + VAR_2->m_pkthdr.mp_rlen, VAR_1->mpt_snduna))
   break;

  VAR_0->mpte_reinjectq = VAR_2->m_nextpkt;
  VAR_2->m_nextpkt = ((void*)0);
  FUNC_2(VAR_2);
 }
}
