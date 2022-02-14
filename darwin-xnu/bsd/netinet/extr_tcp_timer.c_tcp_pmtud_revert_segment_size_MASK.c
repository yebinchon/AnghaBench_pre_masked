
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcpcb {scalar_t__ t_pmtud_saved_maxopd; scalar_t__ t_maxopd; scalar_t__ t_maxseg; TYPE_1__* t_inpcb; scalar_t__ t_pmtud_start_ts; int t_flags; } ;
typedef scalar_t__ int32_t ;
struct TYPE_6__ {int (* cwnd_init ) (struct tcpcb*) ;} ;
struct TYPE_5__ {int tcps_pmtudbh_reverted; } ;
struct TYPE_4__ {int inp_socket; } ;


 TYPE_3__* FUNC_0 (struct tcpcb*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct tcpcb*) ;
 int FUNC_3 (int ,int *) ;
 TYPE_2__ VAR_2 ;

void
FUNC_4(struct tcpcb *VAR_3)
{
 int32_t VAR_4;

 FUNC_1(VAR_3->t_pmtud_saved_maxopd > 0);
 VAR_3->t_flags |= VAR_1;
 VAR_3->t_flags &= ~VAR_0;
 VAR_4 = VAR_3->t_maxopd - VAR_3->t_maxseg;
 VAR_3->t_maxopd = VAR_3->t_pmtud_saved_maxopd;
 VAR_3->t_maxseg = VAR_3->t_maxopd - VAR_4;





 if (FUNC_0(VAR_3)->cwnd_init != ((void*)0))
  FUNC_0(VAR_3)->cwnd_init(VAR_3);
 VAR_3->t_pmtud_start_ts = 0;
 VAR_2.tcps_pmtudbh_reverted++;


 FUNC_3(VAR_3->t_inpcb->inp_socket, ((void*)0));
}
