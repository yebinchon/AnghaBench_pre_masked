
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct pkthdr {int pkt_mpriv_hash; int pkt_mpriv_flags; } ;
struct mbuf {struct pkthdr m_pkthdr; } ;
struct TYPE_3__ {int pktsched_ptype; scalar_t__ pktsched_pkt; } ;
typedef TYPE_1__ pktsched_pkt_t ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

uint32_t *
FUNC_2(pktsched_pkt_t *VAR_0, uint32_t **VAR_1)
{
 uint32_t *VAR_2 = ((void*)0);

 switch (VAR_0->pktsched_ptype) {
 case 128: {
  struct mbuf *VAR_3 = (struct mbuf *)VAR_0->pktsched_pkt;
  struct pkthdr *VAR_4 = &VAR_3->m_pkthdr;

  FUNC_1(sizeof (VAR_4->pkt_mpriv_hash) == sizeof (uint32_t));
  FUNC_1(sizeof (VAR_4->pkt_mpriv_flags) == sizeof (uint32_t));

  *VAR_1 = &VAR_4->pkt_mpriv_flags;
  VAR_2 = &VAR_4->pkt_mpriv_hash;
  break;
 }


 default:
  FUNC_0(0);

 }

 return (VAR_2);
}
