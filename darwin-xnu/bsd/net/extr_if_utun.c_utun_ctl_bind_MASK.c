
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utun_pcb {int utun_max_pending_packets; int utun_use_netif; int utun_pcb_lock; int utun_input_chain_lock; int utun_rx_fsw_ring_size; int utun_tx_fsw_ring_size; int utun_netif_ring_size; int utun_slot_size; int utun_unit; int utun_ctlref; } ;
struct sockaddr_ctl {int sc_unit; } ;
typedef int kern_ctl_ref ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct utun_pcb*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct utun_pcb* FUNC_3 (int ) ;

__attribute__((used)) static errno_t
FUNC_4(kern_ctl_ref VAR_7,
     struct sockaddr_ctl *VAR_8,
     void **VAR_9)
{
 struct utun_pcb *VAR_10 = FUNC_3(VAR_6);
 FUNC_2(VAR_10, 0, sizeof(*VAR_10));

 *VAR_9 = VAR_10;
 VAR_10->utun_ctlref = VAR_7;
 VAR_10->utun_unit = VAR_8->sc_unit;
 VAR_10->utun_max_pending_packets = 1;
 FUNC_0(&VAR_10->utun_input_chain_lock, VAR_5, VAR_4);
 FUNC_1(&VAR_10->utun_pcb_lock, VAR_5, VAR_4);

 return (0);
}
