
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpopt {int to_flags; scalar_t__ to_tsecr; } ;
struct tcphdr {int th_ack; } ;
struct tcpcb {scalar_t__ t_rxtshift; int t_flagsext; scalar_t__ t_tlphighrxt; int t_flags; scalar_t__ t_pmtud_start_ts; scalar_t__ t_tlpstart; scalar_t__ t_rxtstart; } ;
struct TYPE_2__ {int tcps_dsack_badrexmt; int tcps_tlp_recoverlastpkt; int tcps_sndrexmitbad; } ;


 int FUNC_0 (struct tcpcb*) ;
 int FUNC_1 (struct tcpcb*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct tcpcb*) ;
 int FUNC_5 (struct tcpcb*,struct tcphdr*) ;
 int FUNC_6 (struct tcpcb*,struct tcphdr*,int ) ;
 scalar_t__ FUNC_7 (struct tcpcb*,struct tcphdr*,struct tcpopt*,scalar_t__) ;
 int FUNC_8 (struct tcpcb*) ;
 int FUNC_9 (struct tcpcb*) ;
 int FUNC_10 (struct tcpcb*) ;
 scalar_t__ FUNC_11 (struct tcpcb*,int ) ;
 scalar_t__ FUNC_12 (struct tcpcb*) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static void
FUNC_13(struct tcpcb *VAR_7, struct tcphdr *VAR_8, struct tcpopt *VAR_9)
{
 if (VAR_7->t_rxtshift > 0 &&
     FUNC_7(VAR_7, VAR_8, VAR_9, VAR_7->t_rxtstart)) {
  ++VAR_6.tcps_sndrexmitbad;
  FUNC_5(VAR_7, VAR_8);
  FUNC_6(VAR_7, VAR_8, VAR_0);
 } else if ((VAR_7->t_flagsext & VAR_4)
     && VAR_7->t_tlphighrxt > 0
     && FUNC_2(VAR_8->th_ack, VAR_7->t_tlphighrxt)
     && !FUNC_7(VAR_7, VAR_8, VAR_9, VAR_7->t_tlpstart)) {




  if (FUNC_12(VAR_7)) {




   FUNC_10(VAR_7);
   goto out;
  }






  ++VAR_6.tcps_tlp_recoverlastpkt;
  if (!FUNC_1(VAR_7)) {
   FUNC_9(VAR_7);
   FUNC_0(VAR_7);
  }
  FUNC_6(VAR_7, VAR_8, VAR_2);
 } else if (FUNC_11(VAR_7, VAR_8->th_ack)) {




  VAR_6.tcps_dsack_badrexmt++;
  FUNC_5(VAR_7, VAR_8);
  FUNC_6(VAR_7, VAR_8, VAR_1);
  FUNC_10(VAR_7);
 }
out:
 VAR_7->t_flagsext &= ~(VAR_4);
 VAR_7->t_tlphighrxt = 0;
 VAR_7->t_tlpstart = 0;







 if (VAR_7->t_rxtshift > 0 && (VAR_7->t_flags & VAR_3) &&
     VAR_7->t_pmtud_start_ts > 0 && FUNC_4(VAR_7)) {
  if ((VAR_9->to_flags & VAR_5) && VAR_9->to_tsecr != 0
      && FUNC_3(VAR_9->to_tsecr, VAR_7->t_pmtud_start_ts)) {
   FUNC_8(VAR_7);
  }
 }
 if (VAR_7->t_pmtud_start_ts > 0)
  VAR_7->t_pmtud_start_ts = 0;
}
