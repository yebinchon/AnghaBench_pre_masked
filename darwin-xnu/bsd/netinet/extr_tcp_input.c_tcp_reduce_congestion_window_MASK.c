
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {int t_flags; int t_flagsext; int t_maxseg; scalar_t__ snd_ssthresh; scalar_t__ snd_cwnd; scalar_t__ t_rtttime; scalar_t__* t_timer; scalar_t__ snd_max; scalar_t__ snd_recover; } ;
struct TYPE_2__ {int (* pre_fr ) (struct tcpcb*) ;} ;


 TYPE_1__* FUNC_0 (struct tcpcb*) ;
 int FUNC_1 (struct tcpcb*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct tcpcb*) ;
 int FUNC_3 (struct tcpcb*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(
 struct tcpcb *VAR_5)
{





 if (FUNC_0(VAR_5)->pre_fr != ((void*)0))
  FUNC_0(VAR_5)->pre_fr(VAR_5);
 FUNC_1(VAR_5);
 if (VAR_5->t_flags & VAR_3)
  VAR_5->snd_recover = VAR_5->snd_max - 1;
 else
  VAR_5->snd_recover = VAR_5->snd_max;
 VAR_5->t_timer[VAR_1] = 0;
 VAR_5->t_timer[VAR_0] = 0;
 VAR_5->t_rtttime = 0;
 if (VAR_5->t_flagsext & VAR_2) {
  FUNC_3(VAR_5);
 } else {
  VAR_5->snd_cwnd = VAR_5->snd_ssthresh +
      VAR_5->t_maxseg * VAR_4;
 }
}
