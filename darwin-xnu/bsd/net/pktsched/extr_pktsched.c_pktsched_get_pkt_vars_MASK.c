
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct pkthdr {int tx_start_seq; int pkt_proto; int pkt_flowsrc; int pkt_flowid; int pkt_timestamp; int pkt_flags; } ;
struct mbuf {struct pkthdr m_pkthdr; } ;
struct TYPE_3__ {int pktsched_ptype; scalar_t__ pktsched_pkt; } ;
typedef TYPE_1__ pktsched_pkt_t ;



 int FUNC_0 (int ) ;

void
FUNC_1(pktsched_pkt_t *VAR_0, uint32_t **VAR_1,
    uint64_t **VAR_2, uint32_t *VAR_3, uint8_t *VAR_4, uint8_t *VAR_5,
    uint32_t *VAR_6)
{
 switch (VAR_0->pktsched_ptype) {
 case 128: {
  struct mbuf *VAR_7 = (struct mbuf *)VAR_0->pktsched_pkt;
  struct pkthdr *VAR_8 = &VAR_7->m_pkthdr;

  if (VAR_1 != ((void*)0))
   *VAR_1 = &VAR_8->pkt_flags;
  if (VAR_2 != ((void*)0))
   *VAR_2 = &VAR_8->pkt_timestamp;
  if (VAR_3 != ((void*)0))
   *VAR_3 = VAR_8->pkt_flowid;
  if (VAR_4 != ((void*)0))
   *VAR_4 = VAR_8->pkt_flowsrc;
  if (VAR_5 != ((void*)0))
   *VAR_5 = VAR_8->pkt_proto;




  if (VAR_6 != ((void*)0))
   *VAR_6 = VAR_8->tx_start_seq;

  break;
 }


 default:
  FUNC_0(0);

 }
}
