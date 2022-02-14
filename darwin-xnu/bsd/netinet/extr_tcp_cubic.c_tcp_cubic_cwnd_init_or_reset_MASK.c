
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcpcb {int snd_ssthresh; TYPE_3__* t_ccstate; TYPE_2__* t_inpcb; scalar_t__ t_bytes_acked; scalar_t__ t_pipeack; } ;
struct TYPE_6__ {int cub_last_max; } ;
struct TYPE_5__ {TYPE_1__* inp_stat; } ;
struct TYPE_4__ {scalar_t__ txbytes; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tcpcb*) ;
 int FUNC_2 (struct tcpcb*) ;
 int FUNC_3 (struct tcpcb*) ;

__attribute__((used)) static void FUNC_4(struct tcpcb *VAR_3)
{
 FUNC_0(VAR_3->t_ccstate != ((void*)0));

 FUNC_3(VAR_3);
 FUNC_1(VAR_3);
 VAR_3->t_pipeack = 0;
 FUNC_2(VAR_3);


 VAR_3->t_bytes_acked = 0;
 if (VAR_3->t_inpcb->inp_stat->txbytes <= VAR_0
     && VAR_3->snd_ssthresh < (VAR_1 << VAR_2))
  VAR_3->snd_ssthresh = VAR_1 << VAR_2;


 VAR_3->t_ccstate->cub_last_max = VAR_3->snd_ssthresh;
}
