
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ctl {int sc_unit; } ;
struct ipsec_pcb {int ipsec_use_netif; int ipsec_input_chain_lock; int ipsec_pcb_lock; int ipsec_rx_fsw_ring_size; int ipsec_tx_fsw_ring_size; int ipsec_netif_ring_size; int ipsec_slot_size; int ipsec_output_service_class; int ipsec_unit; int ipsec_ctlref; } ;
typedef int kern_ctl_ref ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct ipsec_pcb*,int ,int) ;
 struct ipsec_pcb* FUNC_3 (int ) ;

__attribute__((used)) static errno_t
FUNC_4(kern_ctl_ref VAR_8,
      struct sockaddr_ctl *VAR_9,
      void **VAR_10)
{
 struct ipsec_pcb *VAR_11 = FUNC_3(VAR_7);
 FUNC_2(VAR_11, 0, sizeof(*VAR_11));


 *VAR_10 = VAR_11;
 VAR_11->ipsec_ctlref = VAR_8;
 VAR_11->ipsec_unit = VAR_9->sc_unit;
 VAR_11->ipsec_output_service_class = VAR_4;
 FUNC_1(&VAR_11->ipsec_pcb_lock, VAR_6, VAR_5);




 return (0);
}
