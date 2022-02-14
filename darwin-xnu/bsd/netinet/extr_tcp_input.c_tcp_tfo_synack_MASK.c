
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpopt {int to_flags; unsigned char* to_tfo; } ;
struct tcpcb {int t_tfo_flags; int t_tfo_stats; } ;
struct TYPE_2__ {int tcps_tfo_no_cookie_rcv; int tcps_tfo_syn_loss; int tcps_tfo_cookie_wrong; int tcps_tfo_cookie_rcv; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct tcpcb*,unsigned char*,unsigned char) ;
 int FUNC_2 (struct tcpcb*) ;
 int FUNC_3 (struct tcpcb*) ;
 TYPE_1__ VAR_10 ;

__attribute__((used)) static void
FUNC_4(struct tcpcb *VAR_11, struct tcpopt *VAR_12)
{
 if (VAR_12->to_flags & VAR_9) {
  unsigned char VAR_13 = *VAR_12->to_tfo - VAR_0;





  FUNC_0(VAR_13 <= VAR_1);

  VAR_12->to_tfo++;

  FUNC_1(VAR_11, VAR_12->to_tfo, VAR_13);
  FUNC_3(VAR_11);

  VAR_11->t_tfo_stats |= VAR_5;
  VAR_10.tcps_tfo_cookie_rcv++;
  if (VAR_11->t_tfo_flags & VAR_3) {
   VAR_10.tcps_tfo_cookie_wrong++;
   VAR_11->t_tfo_stats |= VAR_6;
  }
 } else {






  if (VAR_11->t_tfo_flags & VAR_4) {
   VAR_11->t_tfo_stats |= VAR_8;
   VAR_10.tcps_tfo_syn_loss++;

   FUNC_2(VAR_11);
  } else {
   if (VAR_11->t_tfo_flags & VAR_2) {
    VAR_11->t_tfo_stats |= VAR_7;
    VAR_10.tcps_tfo_no_cookie_rcv++;
   }

   FUNC_3(VAR_11);
  }
 }
}
