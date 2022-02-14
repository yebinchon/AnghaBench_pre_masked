
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ipsec_pcb {int ipsec_pcb_lock; int * ipsec_netif_rxring; int ipsec_input_chain_lock; TYPE_1__* ipsec_input_chain_last; TYPE_1__* ipsec_input_chain; scalar_t__ ipsec_use_netif; } ;
typedef int protocol_family_t ;
typedef TYPE_1__* mbuf_t ;
typedef int * kern_channel_ring_t ;
typedef int ifnet_t ;
typedef int errno_t ;
struct TYPE_5__ {struct TYPE_5__* m_nextpkt; } ;


 int FUNC_0 (int) ;
 struct ipsec_pcb* FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*,int *,int *) ;
 int FUNC_3 (int ,int ,TYPE_1__*,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

errno_t
FUNC_9(ifnet_t VAR_0,
       mbuf_t VAR_1)
{
 {
  errno_t VAR_2;
  protocol_family_t VAR_3;
  if ((VAR_2 = FUNC_2(VAR_0, VAR_1, ((void*)0), &VAR_3)) != 0) {
   return VAR_2;
  }

  return FUNC_3(VAR_0, VAR_3, VAR_1, ((void*)0));
 }
}
