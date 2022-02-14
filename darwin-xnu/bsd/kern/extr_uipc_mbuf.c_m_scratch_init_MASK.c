
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkthdr {int pkt_flags; int pkt_mpriv; } ;
struct mbuf {int m_flags; struct pkthdr m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*,struct mbuf*,int) ;

void
FUNC_3(struct mbuf *VAR_2)
{
 struct pkthdr *VAR_3 = &VAR_2->m_pkthdr;

 FUNC_0(VAR_2->m_flags & VAR_0);


 if (VAR_3->pkt_flags & VAR_1) {
  FUNC_2("Invalid attempt to modify guarded module-private "
      "area: mbuf %p, pkt_flags 0x%x\n", VAR_2, VAR_3->pkt_flags);

 }

 FUNC_1(&VAR_3->pkt_mpriv, sizeof (VAR_3->pkt_mpriv));
}
