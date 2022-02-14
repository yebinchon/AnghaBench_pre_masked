
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct tcpcb {int t_flags; TYPE_1__* t_inpcb; } ;
struct sockbuf {int sb_flags; } ;
struct socket {struct sockbuf so_rcv; } ;
struct TYPE_2__ {struct socket* inp_socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tcpcb*,struct sockbuf*,int,int ,int) ;

__attribute__((used)) static inline void
FUNC_1(struct tcpcb *VAR_4)
{
 struct socket *VAR_5 = VAR_4->t_inpcb->inp_socket;
 u_int32_t VAR_6 = 2 * VAR_3;
 struct sockbuf *VAR_7 = &VAR_5->so_rcv;

 if ((VAR_4->t_flags & (VAR_2 | VAR_1)) !=
  (VAR_2 | VAR_1) &&
  (VAR_7->sb_flags & VAR_0) != 0) {
  FUNC_0(VAR_4, VAR_7, VAR_6, 0, VAR_6);
 }
}
