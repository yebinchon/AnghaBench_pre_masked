
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bufstatus_sndbuf; int bufstatus_if; int pkt_flags; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_sndbyte_unsent; } ;
struct ifclassq {int dummy; } ;
typedef int classq_pkt_type_t ;


 int FUNC_0 (struct ifclassq*) ;
 int FUNC_1 (struct ifnet*) ;
 int VAR_0 ;

 int FUNC_2 (int ) ;

inline void
FUNC_3(struct ifclassq *VAR_1, struct ifnet *VAR_2,
    void *VAR_3, classq_pkt_type_t VAR_4)
{
 if (!FUNC_1(VAR_2))
  return;

 switch (VAR_4) {
 case 128: {
  struct mbuf *VAR_5 = VAR_3;
  VAR_5->m_pkthdr.pkt_flags |= VAR_0;
  VAR_5->m_pkthdr.bufstatus_if = FUNC_0(VAR_1);
  VAR_5->m_pkthdr.bufstatus_sndbuf = VAR_2->if_sndbyte_unsent;
  break;
 }


 default:
  FUNC_2(0);

 }
}
