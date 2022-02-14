
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct tcpcb {scalar_t__ t_maxseg; int t_flags; TYPE_1__* t_inpcb; } ;
struct sockbuf {scalar_t__ sb_hiwat; scalar_t__ sb_cc; scalar_t__ sb_mbmax; scalar_t__ sb_mbcnt; } ;
struct socket {int so_flags; TYPE_2__* so_msg_state; struct sockbuf so_rcv; } ;
typedef scalar_t__ int32_t ;
struct TYPE_4__ {scalar_t__ msg_uno_bytes; } ;
struct TYPE_3__ {struct socket* inp_socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sockbuf*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct tcpcb*,struct sockbuf*) ;

int32_t
FUNC_3(struct tcpcb *VAR_3)
{
 struct socket *VAR_4 = VAR_3->t_inpcb->inp_socket;
 struct sockbuf *VAR_5 = &VAR_4->so_rcv;
 u_int32_t VAR_6;
 int32_t VAR_7;
 int32_t VAR_8 = 0;

 FUNC_2(VAR_3, VAR_5);


 VAR_6 = VAR_5->sb_hiwat;
 if (VAR_4->so_flags & VAR_0)
  VAR_6 = VAR_6 - VAR_4->so_msg_state->msg_uno_bytes;

 VAR_7 = ((int32_t) FUNC_1((VAR_6 - VAR_5->sb_cc),
  (VAR_5->sb_mbmax - VAR_5->sb_mbcnt)));
 if (VAR_7 < 0)
  VAR_7 = 0;





 if (VAR_8 > VAR_7)
  VAR_7 = 0;
 else
  VAR_7 -= VAR_8;







 if (VAR_7 < VAR_3->t_maxseg)
  return (VAR_7);



 if (((VAR_3->t_flags & VAR_1) != 0) && VAR_2 > 0)
  return (FUNC_1(VAR_7, VAR_2));

 return (VAR_7);
}
