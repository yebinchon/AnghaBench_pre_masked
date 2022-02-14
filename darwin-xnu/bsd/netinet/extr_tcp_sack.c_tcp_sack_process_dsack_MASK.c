
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpopt {int to_nsacks; scalar_t__ to_sacks; } ;
struct tcphdr {scalar_t__ th_ack; } ;
struct tcpcb {int t_flagsext; scalar_t__ t_tlphighrxt; int t_rxtshift; scalar_t__ snd_una; int snd_holes; int t_dsack_recvd; } ;
struct tcp_rxt_seg {int rx_count; int rx_flags; } ;
struct sackblk {scalar_t__ start; scalar_t__ end; } ;
typedef int second_sack ;
typedef int first_sack ;
typedef int boolean_t ;
struct TYPE_2__ {int tcps_dsack_disable; int tcps_dsack_ackloss; int tcps_dsack_recvd; int tcps_dsack_recvd_old; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 (struct tcpcb*,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct tcpcb*,struct sackblk*,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (scalar_t__,struct sackblk*,int) ;
 void* FUNC_8 (scalar_t__) ;
 int VAR_7 ;
 struct tcp_rxt_seg* FUNC_9 (struct tcpcb*,scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_8 ;

boolean_t
FUNC_10(struct tcpcb *VAR_9, struct tcpopt *VAR_10,
    struct tcphdr *VAR_11)
{
 struct sackblk VAR_12, VAR_13;
 struct tcp_rxt_seg *VAR_14;

 FUNC_7(VAR_10->to_sacks, &VAR_12, sizeof(VAR_12));
 VAR_12.start = FUNC_8(VAR_12.start);
 VAR_12.end = FUNC_8(VAR_12.end);

 if (VAR_10->to_nsacks > 1) {
  FUNC_7((VAR_10->to_sacks + VAR_1), &VAR_13,
      sizeof(VAR_13));
  VAR_13.start = FUNC_8(VAR_13.start);
  VAR_13.end = FUNC_8(VAR_13.end);
 }

 if (FUNC_3(VAR_12.start, VAR_11->th_ack) &&
     FUNC_2(VAR_12.end, VAR_11->th_ack)) {
  if (!(FUNC_5(VAR_9, VAR_12.start, VAR_11->th_ack) &&
      FUNC_5(VAR_9, VAR_12.end, VAR_11->th_ack))) {
   VAR_10->to_nsacks--;
   VAR_10->to_sacks += VAR_1;
   VAR_8.tcps_dsack_recvd_old++;





   return (VAR_6);
  }
 } else if (VAR_10->to_nsacks > 1 &&
     FUNC_2(VAR_13.start, VAR_12.start) &&
     FUNC_0(VAR_13.end, VAR_12.end)) {
  if (!FUNC_6(VAR_9, &VAR_13,
      VAR_11->th_ack)) {
   VAR_10->to_nsacks--;
   VAR_10->to_sacks += VAR_1;
   VAR_8.tcps_dsack_recvd_old++;
   return (VAR_6);
  }
 } else {

  return (VAR_0);
 }


 VAR_10->to_nsacks--;
 VAR_10->to_sacks += VAR_1;
 VAR_8.tcps_dsack_recvd++;
 VAR_9->t_dsack_recvd++;


 if (VAR_9->t_flagsext & VAR_4)
  return (VAR_6);


 if ((VAR_9->t_flagsext & VAR_5) &&
     VAR_12.end == VAR_9->t_tlphighrxt) {
  if ((VAR_14 = FUNC_9(VAR_9, VAR_12.start,
      (VAR_12.end - 1))) != ((void*)0))
   VAR_14->rx_flags |= VAR_2;
 }

 if (((VAR_9->t_rxtshift == 1 && VAR_12.start == VAR_9->snd_una) ||
     ((VAR_9->t_flagsext & VAR_5) &&
     VAR_12.end == VAR_9->t_tlphighrxt)) &&
     FUNC_4(&VAR_9->snd_holes) &&
     FUNC_1(VAR_11->th_ack, VAR_9->snd_una)) {
  VAR_8.tcps_dsack_ackloss++;

  return (VAR_6);
 } else if ((VAR_14 = FUNC_9(VAR_9, VAR_12.start,
     (VAR_12.end - 1))) == ((void*)0)) {





  if (!VAR_7) {
   VAR_9->t_flagsext |= VAR_4;
   VAR_8.tcps_dsack_disable++;
  }
 } else {




  if (VAR_14->rx_count == 1)
   VAR_14->rx_flags |= VAR_3;
  else
   VAR_14->rx_flags &= ~VAR_3;
 }
 return (VAR_6);
}
