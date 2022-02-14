
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct tcpcb {scalar_t__ bg_ssthresh; scalar_t__ snd_ssthresh; scalar_t__ snd_cwnd; int t_maxseg; scalar_t__ t_bytes_acked; int snd_wnd; } ;
struct TYPE_2__ {int num_sockets; } ;
typedef int SInt32 ;


 int FUNC_0 (int volatile*) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;
 TYPE_1__ VAR_1 ;

void
FUNC_2(struct tcpcb *VAR_2, uint16_t VAR_3) {
#pragma unused(old_cc_index)
 uint32_t VAR_4;

 if (VAR_2->bg_ssthresh == 0 || VAR_2->bg_ssthresh > VAR_2->snd_ssthresh)
  VAR_2->bg_ssthresh = VAR_2->snd_ssthresh;

 VAR_4 = FUNC_1(VAR_2->snd_wnd, VAR_2->snd_cwnd);

 if (VAR_2->snd_cwnd > VAR_2->bg_ssthresh)
  VAR_4 = VAR_4 / VAR_2->t_maxseg;
 else
  VAR_4 = VAR_4 / 2 / VAR_2->t_maxseg;

 if (VAR_4 < VAR_0)
  VAR_4 = VAR_0;

 VAR_2->snd_cwnd = VAR_4 * VAR_2->t_maxseg;
 VAR_2->t_bytes_acked = 0;

 FUNC_0((volatile SInt32 *)&VAR_1.num_sockets);
}
