
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct tcpcb {int t_flagsext; scalar_t__ t_rttcur; scalar_t__ t_recv_throttle_ts; scalar_t__ acc_iaj; TYPE_2__* t_inpcb; } ;
struct sockbuf {int sb_idealsize; } ;
struct TYPE_4__ {TYPE_1__* inp_socket; } ;
struct TYPE_3__ {struct sockbuf so_rcv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tcpcb*) ;
 scalar_t__ FUNC_1 (struct tcpcb*) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_3 (struct tcpcb *VAR_6)
{
 uint32_t VAR_7, VAR_8;
 struct sockbuf *VAR_9 = &VAR_6->t_inpcb->inp_socket->so_rcv;

 if (VAR_5 == 1 &&
     FUNC_0(VAR_6)) {
  if (VAR_6->t_flagsext & VAR_0)
   return (1);

  VAR_7 = FUNC_1(VAR_6);

  if (VAR_7 != 0 && VAR_6->t_rttcur != 0) {




   if (VAR_6->t_rttcur > (VAR_7 + VAR_1)) {
    VAR_6->t_flagsext |= VAR_0;
    if (VAR_6->t_recv_throttle_ts == 0)
     VAR_6->t_recv_throttle_ts = VAR_3;




    if (VAR_9->sb_idealsize >
        VAR_4) {
     VAR_8 = VAR_9->sb_idealsize >> 1;

     VAR_8 =
         FUNC_2(VAR_8,
         VAR_4);
     VAR_9->sb_idealsize = VAR_8;
    }
    return (1);
   } else {
    return (0);
   }
  }
 }





 if (VAR_6->acc_iaj > VAR_2)
  return (1);

 return (0);
}
