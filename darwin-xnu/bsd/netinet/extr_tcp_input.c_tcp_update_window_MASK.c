
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct tcphdr {scalar_t__ th_seq; scalar_t__ th_ack; } ;
struct tcpcb {scalar_t__ snd_wl1; scalar_t__ snd_wl2; scalar_t__ snd_wnd; scalar_t__ max_sndwnd; TYPE_2__* t_inpcb; } ;
struct TYPE_6__ {int tcps_rcvwinupd; } ;
struct TYPE_5__ {TYPE_1__* inp_socket; } ;
struct TYPE_4__ {int so_flags; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct tcpcb*) ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static inline bool
FUNC_2(struct tcpcb *VAR_3, int VAR_4, struct tcphdr * VAR_5,
    u_int32_t VAR_6, int VAR_7)
{

 if ((VAR_4 & VAR_1) &&
     (FUNC_0(VAR_3->snd_wl1, VAR_5->th_seq) ||
     (VAR_3->snd_wl1 == VAR_5->th_seq && (FUNC_0(VAR_3->snd_wl2, VAR_5->th_ack) ||
     (VAR_3->snd_wl2 == VAR_5->th_ack && VAR_6 > VAR_3->snd_wnd))))) {

  if (VAR_7 == 0 &&
      VAR_3->snd_wl2 == VAR_5->th_ack && VAR_6 > VAR_3->snd_wnd)
   VAR_2.tcps_rcvwinupd++;
  VAR_3->snd_wnd = VAR_6;
  VAR_3->snd_wl1 = VAR_5->th_seq;
  VAR_3->snd_wl2 = VAR_5->th_ack;
  if (VAR_3->snd_wnd > VAR_3->max_sndwnd)
   VAR_3->max_sndwnd = VAR_3->snd_wnd;

  if (VAR_3->t_inpcb->inp_socket->so_flags & VAR_0)
   FUNC_1(VAR_3);
  return (1);
 }
 return (0);
}
