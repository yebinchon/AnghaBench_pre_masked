
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_12__ ;


struct timeval {scalar_t__ tv_sec; int member_1; int member_0; } ;
typedef TYPE_2__* partner_state_ref ;
typedef int * packet_buffer_ref ;
typedef TYPE_3__* lacpdu_ref ;
typedef int * lacp_system_ref ;
typedef TYPE_4__* lacp_collector_tlv_ref ;
typedef TYPE_5__* lacp_actor_partner_tlv_ref ;
typedef int devtimer_timeout_func ;
typedef TYPE_6__* bondport_ref ;
struct TYPE_28__ {int li_key; int li_system_priority; int li_system; } ;
struct TYPE_23__ {int ps_state; int ps_port_priority; int ps_port; TYPE_7__ ps_lag_info; } ;
struct TYPE_27__ {int po_n_transmit; TYPE_2__ po_partner_state; int po_actor_state; TYPE_1__* po_bond; int po_priority; int po_transmit_timer; int po_periodic_interval; } ;
struct TYPE_26__ {int lap_state; int lap_system; int lap_length; int lap_tlv_type; } ;
struct TYPE_25__ {int lac_length; int lac_tlv_type; } ;
struct TYPE_24__ {int la_collector_tlv; int la_partner_tlv; int la_actor_tlv; int la_version; int la_subtype; } ;
struct TYPE_22__ {int ifb_key; } ;
struct TYPE_21__ {int verbose; int system_priority; int system; } ;
typedef TYPE_7__* LAG_info_ref ;
typedef int LAEvent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 void* VAR_8 ;
 int FUNC_0 (TYPE_6__*,int ,scalar_t__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 char* FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,int *) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct timeval,int ,void*,int *) ;
 TYPE_12__* VAR_9 ;
 int FUNC_10 (TYPE_5__*,int ) ;
 int FUNC_11 (TYPE_5__*,int ) ;
 int FUNC_12 (TYPE_5__*,int ) ;
 int FUNC_13 (TYPE_5__*,int ) ;
 int * FUNC_14 (int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,char*,...) ;

__attribute__((used)) static void
FUNC_18(bondport_ref VAR_10, LAEvent VAR_11,
     void * VAR_12)
{
    lacp_actor_partner_tlv_ref VAR_13;
    lacp_collector_tlv_ref VAR_14;
    struct timeval VAR_15 = {0, 0};
    lacpdu_ref VAR_16;
    packet_buffer_ref VAR_17;
    partner_state_ref VAR_18;
    LAG_info_ref VAR_19;

    switch (VAR_11) {
    case 128:
    case 129:
 if (VAR_10->po_periodic_interval == 0 || FUNC_2(VAR_10) == 0) {
     break;
 }
 if (VAR_12 == VAR_8) {

 }
 else if (FUNC_0(VAR_10, FUNC_7(),
           &VAR_15.tv_sec) == 0) {
     if (FUNC_8(VAR_10->po_transmit_timer)) {
  if (VAR_9->verbose > 0) {
      FUNC_17("[%s] Transmit Timer Already Set\n",
         FUNC_4(VAR_10));
  }
     }
     else {
  FUNC_9(VAR_10->po_transmit_timer, VAR_15,
          (devtimer_timeout_func)
          FUNC_18,
          (void *)128, ((void*)0));
  if (VAR_9->verbose > 0) {
      FUNC_17("[%s] Transmit Timer Deadline %d secs\n",
         FUNC_4(VAR_10),
         (int)VAR_15.tv_sec);
  }
     }
     break;
 }
 if (VAR_9->verbose > 0) {
     if (VAR_11 == 128) {
  FUNC_17("[%s] Transmit Timer Complete\n",
     FUNC_4(VAR_10));
     }
 }
 VAR_17 = FUNC_14(sizeof(*VAR_16));
 if (VAR_17 == ((void*)0)) {
     FUNC_16("[%s] Transmit: failed to allocate packet buffer\n",
     FUNC_4(VAR_10));
     break;
 }
 VAR_16 = (lacpdu_ref)FUNC_15(VAR_17);
 FUNC_6(VAR_16, sizeof(*VAR_16));
 VAR_16->la_subtype = VAR_0;
 VAR_16->la_version = VAR_7;


 VAR_13 = (lacp_actor_partner_tlv_ref)VAR_16->la_actor_tlv;
 VAR_13->lap_tlv_type = VAR_4;
 VAR_13->lap_length = VAR_1;
 *((lacp_system_ref)VAR_13->lap_system) = VAR_9->system;
 FUNC_13(VAR_13,
         VAR_9->system_priority);
 FUNC_12(VAR_13, VAR_10->po_priority);
 FUNC_11(VAR_13, FUNC_3(VAR_10));
 FUNC_10(VAR_13, VAR_10->po_bond->ifb_key);
 VAR_13->lap_state = VAR_10->po_actor_state;


 VAR_13 = (lacp_actor_partner_tlv_ref)VAR_16->la_partner_tlv;
 VAR_13->lap_tlv_type = VAR_6;
 VAR_13->lap_length = VAR_3;
 VAR_18 = &VAR_10->po_partner_state;
 VAR_19 = &VAR_18->ps_lag_info;
 FUNC_11(VAR_13, VAR_18->ps_port);
 FUNC_12(VAR_13, VAR_18->ps_port_priority);
 *((lacp_system_ref)VAR_13->lap_system) = VAR_19->li_system;
 FUNC_13(VAR_13,
         VAR_19->li_system_priority);
 FUNC_10(VAR_13, VAR_19->li_key);
 VAR_13->lap_state = VAR_18->ps_state;


 VAR_14 = (lacp_collector_tlv_ref)VAR_16->la_collector_tlv;
 VAR_14->lac_tlv_type = VAR_5;
 VAR_14->lac_length = VAR_2;

 FUNC_5(VAR_10, VAR_17);
 FUNC_1(VAR_10);
 if (VAR_9->verbose > 0) {
     FUNC_17("[%s] Transmit Packet %d\n",
        FUNC_4(VAR_10), VAR_10->po_n_transmit);
 }
 break;
    default:
 break;
    }
    return;
}
