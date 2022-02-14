
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct mptses {int mpte_svctype; int mpte_flags; scalar_t__ mpte_triggered_cell; scalar_t__ mpte_used_wifi; scalar_t__ mpte_handshake_success; int mpte_used_cell; scalar_t__ mpte_initial_cell; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_2__ {int tcps_mptcp_triggered_cell; int tcps_mptcp_back_to_wifi; int tcps_mptcp_aggregate_all_bytes; int tcps_mptcp_aggregate_cell_bytes; int tcps_mptcp_aggregate_success; int tcps_mptcp_aggregate_attempt; int tcps_mptcp_fp_aggregate_success; int tcps_mptcp_fp_aggregate_attempt; int tcps_mptcp_interactive_all_bytes; int tcps_mptcp_interactive_cell_bytes; int tcps_mptcp_interactive_cell_from_wifi; int tcps_mptcp_interactive_success; int tcps_mptcp_interactive_attempt; int tcps_mptcp_fp_interactive_success; int tcps_mptcp_fp_interactive_attempt; int tcps_mptcp_handover_all_bytes; int tcps_mptcp_handover_cell_bytes; int tcps_mptcp_handover_cell_from_wifi; int tcps_mptcp_handover_success_wifi; int tcps_mptcp_handover_wifi_from_cell; int tcps_mptcp_handover_success_cell; int tcps_mptcp_handover_attempt; int tcps_mptcp_fp_handover_success_wifi; int tcps_mptcp_fp_handover_success_cell; int tcps_mptcp_fp_handover_attempt; } ;





 int VAR_0 ;
 int FUNC_0 (struct mptses*,scalar_t__,int *,int *) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct mptses *VAR_2)
{
 boolean_t VAR_3 = VAR_2->mpte_initial_cell;

 switch (VAR_2->mpte_svctype) {
 case 129:
  if (VAR_2->mpte_flags & VAR_0) {
   VAR_1.tcps_mptcp_fp_handover_attempt++;

   if (VAR_3 && VAR_2->mpte_handshake_success) {
    VAR_1.tcps_mptcp_fp_handover_success_cell++;

    if (VAR_2->mpte_used_wifi)
     VAR_1.tcps_mptcp_handover_wifi_from_cell++;
   } else if (VAR_2->mpte_handshake_success) {
    VAR_1.tcps_mptcp_fp_handover_success_wifi++;

    if (VAR_2->mpte_used_cell)
     VAR_1.tcps_mptcp_handover_cell_from_wifi++;
   }
  } else {
   VAR_1.tcps_mptcp_handover_attempt++;

   if (VAR_3 && VAR_2->mpte_handshake_success) {
    VAR_1.tcps_mptcp_handover_success_cell++;

    if (VAR_2->mpte_used_wifi)
     VAR_1.tcps_mptcp_handover_wifi_from_cell++;
   } else if (VAR_2->mpte_handshake_success) {
    VAR_1.tcps_mptcp_handover_success_wifi++;

    if (VAR_2->mpte_used_cell)
     VAR_1.tcps_mptcp_handover_cell_from_wifi++;
   }
  }

  if (VAR_2->mpte_handshake_success) {
   uint64_t VAR_4;
   uint64_t VAR_5;

   FUNC_0(VAR_2, VAR_3, &VAR_4, &VAR_5);

   VAR_1.tcps_mptcp_handover_cell_bytes += VAR_4;
   VAR_1.tcps_mptcp_handover_all_bytes += VAR_5;
  }
  break;
 case 128:
  if (VAR_2->mpte_flags & VAR_0) {
   VAR_1.tcps_mptcp_fp_interactive_attempt++;

   if (VAR_2->mpte_handshake_success) {
    VAR_1.tcps_mptcp_fp_interactive_success++;

    if (!VAR_3 && VAR_2->mpte_used_cell)
     VAR_1.tcps_mptcp_interactive_cell_from_wifi++;
   }
  } else {
   VAR_1.tcps_mptcp_interactive_attempt++;

   if (VAR_2->mpte_handshake_success) {
    VAR_1.tcps_mptcp_interactive_success++;

    if (!VAR_3 && VAR_2->mpte_used_cell)
     VAR_1.tcps_mptcp_interactive_cell_from_wifi++;
   }
  }

  if (VAR_2->mpte_handshake_success) {
   uint64_t VAR_6;
   uint64_t VAR_7;

   FUNC_0(VAR_2, VAR_3, &VAR_6, &VAR_7);

   VAR_1.tcps_mptcp_interactive_cell_bytes += VAR_6;
   VAR_1.tcps_mptcp_interactive_all_bytes += VAR_7;
  }
  break;
 case 130:
  if (VAR_2->mpte_flags & VAR_0) {
   VAR_1.tcps_mptcp_fp_aggregate_attempt++;

   if (VAR_2->mpte_handshake_success)
    VAR_1.tcps_mptcp_fp_aggregate_success++;
  } else {
   VAR_1.tcps_mptcp_aggregate_attempt++;

   if (VAR_2->mpte_handshake_success) {
    VAR_1.tcps_mptcp_aggregate_success++;
   }
  }

  if (VAR_2->mpte_handshake_success) {
   uint64_t VAR_8;
   uint64_t VAR_9;

   FUNC_0(VAR_2, VAR_3, &VAR_8, &VAR_9);

   VAR_1.tcps_mptcp_aggregate_cell_bytes += VAR_8;
   VAR_1.tcps_mptcp_aggregate_all_bytes += VAR_9;
  }
  break;
 }

 if (VAR_3 && VAR_2->mpte_handshake_success && VAR_2->mpte_used_wifi)
  VAR_1.tcps_mptcp_back_to_wifi++;

 if (VAR_2->mpte_triggered_cell)
  VAR_1.tcps_mptcp_triggered_cell++;
}
