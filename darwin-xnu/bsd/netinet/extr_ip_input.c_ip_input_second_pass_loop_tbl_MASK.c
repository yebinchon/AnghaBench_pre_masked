
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ip_fw_in_args {int dummy; } ;
struct TYPE_6__ {int pkte_npkts; int pkte_nbytes; int * pkte_tail; struct mbuf* pkte_head; } ;
typedef TYPE_2__ pktchain_elm_t ;
struct TYPE_7__ {int ips_rxc_chainsz_gt4; int ips_rxc_chainsz_gt2; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mbuf*,int ,int ,int,int ,struct ip_fw_in_args*,int ) ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(pktchain_elm_t *VAR_4, struct ip_fw_in_args *VAR_5)
{
 int VAR_6 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_4[VAR_6].pkte_head != ((void*)0)) {
   struct mbuf *VAR_7 = VAR_4[VAR_6].pkte_head;
   FUNC_0(VAR_7, VAR_7->m_pkthdr.rcvif, 0,
       VAR_4[VAR_6].pkte_npkts, VAR_4[VAR_6].pkte_nbytes, VAR_5, 0);

   if (VAR_4[VAR_6].pkte_npkts > 2)
    VAR_2.ips_rxc_chainsz_gt2++;
   if (VAR_4[VAR_6].pkte_npkts > 4)
    VAR_2.ips_rxc_chainsz_gt4++;




   VAR_4[VAR_6].pkte_head = VAR_4[VAR_6].pkte_tail = ((void*)0);
   VAR_4[VAR_6].pkte_npkts = 0;
   VAR_4[VAR_6].pkte_nbytes = 0;

  }
 }
}
