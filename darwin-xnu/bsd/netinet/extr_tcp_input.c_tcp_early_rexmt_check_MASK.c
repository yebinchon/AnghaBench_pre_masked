
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
struct tcphdr {int dummy; } ;
struct TYPE_6__ {int sack_bytes_rexmit; } ;
struct tcpcb {scalar_t__ t_early_rexmt_count; int snd_max; int snd_una; int t_dupacks; int snd_fack; int t_maxseg; int t_rexmtthresh; int t_flagsext; scalar_t__ t_tlpstart; scalar_t__ t_tlphighrxt; int t_early_rexmt_win; int snd_wnd; TYPE_2__ sackhint; int snd_holes; TYPE_1__* t_inpcb; } ;
struct TYPE_7__ {int sb_cc; } ;
struct socket {TYPE_3__ so_snd; } ;
typedef scalar_t__ int32_t ;
struct TYPE_8__ {int tcps_early_rexmt; int tcps_tlp_recovery; } ;
struct TYPE_5__ {struct socket* inp_socket; } ;


 scalar_t__ FUNC_0 (struct tcpcb*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct tcpcb*,struct tcphdr*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__ VAR_7 ;

__attribute__((used)) static void
FUNC_6 (struct tcpcb *VAR_8, struct tcphdr *VAR_9)
{
 u_int32_t VAR_10, VAR_11;
 int32_t VAR_12;
 struct socket *VAR_13 = VAR_8->t_inpcb->inp_socket;

 if (VAR_4 && (FUNC_0(VAR_8) ||
     VAR_8->t_early_rexmt_count < VAR_2) &&
     FUNC_1(VAR_8->snd_max, VAR_8->snd_una) &&
     (VAR_8->t_dupacks == 1 ||
     (FUNC_0(VAR_8) &&
     !FUNC_2(&VAR_8->snd_holes)))) {







  if (FUNC_0(VAR_8) &&
      !FUNC_2(&VAR_8->snd_holes)) {
   VAR_10 = (VAR_8->snd_max - VAR_8->snd_fack) +
    VAR_8->sackhint.sack_bytes_rexmit;
  } else {
   VAR_10 = (VAR_8->snd_max - VAR_8->snd_una);
  }
  VAR_11 = VAR_8->snd_max - VAR_8->snd_una;
  VAR_12 = FUNC_4(VAR_13->so_snd.sb_cc, VAR_8->snd_wnd) - VAR_11;
  if (VAR_10 < (VAR_8->t_maxseg << 2) &&
      VAR_12 <= 0) {
   u_int32_t VAR_14;

   VAR_14 = VAR_10 / VAR_8->t_maxseg;
   if ((VAR_14 * VAR_8->t_maxseg) < VAR_10)
    VAR_14++;
   VAR_14 += VAR_8->t_dupacks;
   if (VAR_14 < 4) {
    VAR_8->t_rexmtthresh =
        ((VAR_14 - 1) > 1) ? (VAR_14 - 1) : 1;
    VAR_8->t_rexmtthresh =
        FUNC_4(VAR_8->t_rexmtthresh, VAR_6);
    VAR_8->t_rexmtthresh =
        FUNC_3(VAR_8->t_rexmtthresh, VAR_8->t_dupacks);

    if (VAR_8->t_early_rexmt_count == 0)
     VAR_8->t_early_rexmt_win = VAR_5;

    if (VAR_8->t_flagsext & VAR_3) {
     VAR_7.tcps_tlp_recovery++;
     FUNC_5(VAR_8, VAR_9,
         VAR_1);
    } else {
     VAR_7.tcps_early_rexmt++;
     VAR_8->t_early_rexmt_count++;
     FUNC_5(VAR_8, VAR_9,
         VAR_0);
    }
   }
  }
 }







 VAR_8->t_flagsext &= ~(VAR_3);
 VAR_8->t_tlphighrxt = 0;
 VAR_8->t_tlpstart = 0;
}
