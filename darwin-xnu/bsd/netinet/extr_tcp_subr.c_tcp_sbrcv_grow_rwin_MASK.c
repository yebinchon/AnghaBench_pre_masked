
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct tcpcb {int t_maxseg; int t_flags; TYPE_1__* t_inpcb; } ;
struct socket {int so_flags; int so_flags1; TYPE_2__* so_msg_state; } ;
struct sockbuf {scalar_t__ sb_hiwat; scalar_t__ sb_cc; scalar_t__ sb_idealsize; } ;
struct TYPE_4__ {scalar_t__ msg_uno_bytes; } ;
struct TYPE_3__ {struct socket* inp_socket; } ;


 scalar_t__ FUNC_0 (struct socket*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct sockbuf*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (struct sockbuf*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_4(struct tcpcb *VAR_6, struct sockbuf *VAR_7)
{
 u_int32_t VAR_8 = VAR_6->t_maxseg << 4;
 u_int32_t VAR_9 = VAR_7->sb_hiwat;
 struct socket *VAR_10 = VAR_6->t_inpcb->inp_socket;

 if (VAR_5 == 1 || FUNC_0(VAR_10))
  return;




 if (VAR_10->so_flags & VAR_1)
  VAR_9 = VAR_9 - VAR_10->so_msg_state->msg_uno_bytes;

 if (VAR_4 == 1 &&
  FUNC_3(VAR_7) &&
  (VAR_6->t_flags & VAR_2) == 0 &&
  (VAR_10->so_flags1 & VAR_0) == 0 &&
  (VAR_9 - VAR_7->sb_cc) < VAR_8 &&
  VAR_9 < VAR_3 &&
  (VAR_7->sb_idealsize > 0 &&
  VAR_7->sb_hiwat <= (VAR_7->sb_idealsize + VAR_8))) {
  FUNC_2(VAR_7,
      FUNC_1((VAR_7->sb_hiwat + VAR_8), VAR_3));
 }
}
