
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tcp_seq ;
struct tcpcb {scalar_t__ t_rxtshift; int t_flagsext; int t_srtt; void* t_reorderwin; int t_inpcb; int t_reordered_pkts; } ;
struct sackhole {scalar_t__ rxmit_start; int rxmit; int end; } ;
typedef int int32_t ;
struct TYPE_2__ {int tcps_ecn_fallback_reorder; int tcps_reordered_pkts; int tcps_detect_reordering; int tcps_avoid_rxmt; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct tcpcb*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 void* FUNC_6 (void*,int) ;
 void* FUNC_7 (void*,int) ;
 int VAR_3 ;
 int FUNC_8 (struct tcpcb*) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_9 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_10(struct tcpcb *VAR_6, struct sackhole *VAR_7,
    tcp_seq VAR_8, tcp_seq VAR_9)
{
 int32_t VAR_10 = 0, VAR_11 = 0;





 if (FUNC_2(VAR_7->end, VAR_9))
  return;





 if (VAR_6->t_rxtshift > 0)
  return;





 if (FUNC_3(VAR_7->rxmit, VAR_8)) {
  VAR_11 = 1;
  VAR_5.tcps_avoid_rxmt++;
 }

 if (VAR_11) {
  if (VAR_3 == 1 &&
      !(VAR_6->t_flagsext & VAR_1)) {
   VAR_6->t_flagsext |= VAR_1;
   VAR_5.tcps_detect_reordering++;
  }

  VAR_5.tcps_reordered_pkts++;
  VAR_6->t_reordered_pkts++;





  if (FUNC_4(VAR_6)) {
   FUNC_0(VAR_6->t_inpcb, VAR_2);
   VAR_5.tcps_ecn_fallback_reorder++;
   FUNC_8(VAR_6);
  }

  FUNC_5(FUNC_1(VAR_9, VAR_7->rxmit));

  if (VAR_7->rxmit_start > 0) {
   VAR_10 = FUNC_9(VAR_4, 0, VAR_7->rxmit_start, 0);
   if (VAR_10 < 0)
    return;
   VAR_6->t_reorderwin = FUNC_6(VAR_6->t_reorderwin, VAR_10);
   VAR_6->t_reorderwin = FUNC_7(VAR_6->t_reorderwin,
       (VAR_6->t_srtt >> (VAR_0 - 1)));
   VAR_6->t_reorderwin = FUNC_6(VAR_6->t_reorderwin, 10);
  }
 }
}
