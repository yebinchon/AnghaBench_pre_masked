
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pkt_flowid; int pkt_flowsrc; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int dummy; } ;
struct flowadv_fcentry {int fce_flowid; int fce_flowsrc_type; } ;
struct TYPE_5__ {int pktsched_ptype; scalar_t__ pktsched_pkt; } ;
typedef TYPE_2__ pktsched_pkt_t ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct flowadv_fcentry* FUNC_2 (int) ;

struct flowadv_fcentry *
FUNC_3(pktsched_pkt_t *VAR_0, struct ifnet *VAR_1, int VAR_2)
{
#pragma unused(ifp)
 struct flowadv_fcentry *VAR_3 = ((void*)0);

 switch (VAR_0->pktsched_ptype) {
 case 128: {
  struct mbuf *VAR_4 = (struct mbuf *)VAR_0->pktsched_pkt;

  VAR_3 = FUNC_2(VAR_2);
  if (VAR_3 == ((void*)0))
   break;

  FUNC_1(sizeof (VAR_4->m_pkthdr.pkt_flowid) ==
      sizeof (VAR_3->fce_flowid));

  VAR_3->fce_flowsrc_type = VAR_4->m_pkthdr.pkt_flowsrc;
  VAR_3->fce_flowid = VAR_4->m_pkthdr.pkt_flowid;
  break;
 }


 default:
  FUNC_0(0);

 }

 return (VAR_3);
}
