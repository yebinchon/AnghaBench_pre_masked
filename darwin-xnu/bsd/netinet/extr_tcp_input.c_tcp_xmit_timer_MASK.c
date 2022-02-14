
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef scalar_t__ tcp_seq ;
struct tcpcb {scalar_t__ iss; int t_flagsext; int t_srtt; int t_rttvar; int t_rttbest; int t_rttcur; scalar_t__ t_softerror; int t_rttmin; int t_rxtcur; TYPE_3__* t_inpcb; int t_rttupdated; int t_rttvar_prev; int t_srtt_prev; scalar_t__ t_badrexmt_time; int snd_max; int snd_una; } ;
struct TYPE_8__ {int tcps_rttupdated; } ;
struct TYPE_6__ {int ro_rt; } ;
struct TYPE_7__ {TYPE_2__ inp_route; TYPE_1__* inp_last_outifp; } ;
struct TYPE_5__ {int if_eflags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,void*,int ,int ) ;
 int FUNC_3 (struct tcpcb*) ;
 int VAR_2 ;
 int FUNC_4 (struct tcpcb*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 void* FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int,int) ;
 TYPE_4__ VAR_6 ;
 int FUNC_8 (struct tcpcb*,int) ;

__attribute__((used)) static void
FUNC_9(struct tcpcb *VAR_7, int VAR_8,
 u_int32_t VAR_9, tcp_seq VAR_10)
{
 int VAR_11;







 if (VAR_7->t_inpcb->inp_last_outifp != ((void*)0) &&
     (VAR_7->t_inpcb->inp_last_outifp->if_eflags & VAR_0) &&
     VAR_10 == VAR_7->iss + 1)
  return;

 if (VAR_7->t_flagsext & VAR_5) {
  if (FUNC_0(VAR_10, VAR_7->snd_una) &&
      FUNC_1(VAR_10, VAR_7->snd_max) &&
      (VAR_9 == 0 ||
      FUNC_5(VAR_9, VAR_7->t_badrexmt_time))) {





   VAR_7->t_flagsext &= ~(VAR_5);
   VAR_7->t_badrexmt_time = 0;
   VAR_7->t_srtt = FUNC_6(VAR_7->t_srtt_prev, VAR_8);
   VAR_7->t_srtt = VAR_7->t_srtt << VAR_4;
   VAR_7->t_rttvar = FUNC_6(VAR_7->t_rttvar_prev, (VAR_8 >> 1));
   VAR_7->t_rttvar = VAR_7->t_rttvar << VAR_3;

   if (VAR_7->t_rttbest > (VAR_7->t_srtt + VAR_7->t_rttvar))
    VAR_7->t_rttbest = VAR_7->t_srtt + VAR_7->t_rttvar;

   goto compute_rto;
  } else {
   return;
  }
 }

 VAR_6.tcps_rttupdated++;
 VAR_7->t_rttupdated++;

 if (VAR_8 > 0) {
  VAR_7->t_rttcur = VAR_8;
  FUNC_8(VAR_7, VAR_8);
 }

 if (VAR_7->t_srtt != 0) {
  VAR_11 = (VAR_8 << VAR_2)
   - (VAR_7->t_srtt >> (VAR_4 - VAR_2));

  if ((VAR_7->t_srtt += VAR_11) <= 0)
   VAR_7->t_srtt = 1;
  if (VAR_11 < 0)
   VAR_11 = -VAR_11;
  VAR_11 -= VAR_7->t_rttvar >> (VAR_3 - VAR_2);
  if ((VAR_7->t_rttvar += VAR_11) <= 0)
   VAR_7->t_rttvar = 1;
  if (VAR_7->t_rttbest == 0 ||
   VAR_7->t_rttbest > (VAR_7->t_srtt + VAR_7->t_rttvar))
   VAR_7->t_rttbest = VAR_7->t_srtt + VAR_7->t_rttvar;
 } else {





  VAR_7->t_srtt = VAR_8 << VAR_4;
  VAR_7->t_rttvar = VAR_8 << (VAR_3 - 1);
 }

compute_rto:
 FUNC_7(VAR_7->t_inpcb->inp_route.ro_rt, VAR_7->t_srtt,
  VAR_7->t_rttvar);
 FUNC_2(VAR_7->t_rxtcur, FUNC_4(VAR_7),
  FUNC_6(VAR_7->t_rttmin, VAR_8 + 2), VAR_1,
  FUNC_3(VAR_7));
 VAR_7->t_softerror = 0;
}
