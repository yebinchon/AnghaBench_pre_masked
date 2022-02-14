
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpcb {int request_r_scale; } ;
struct TYPE_2__ {int sb_flags; int sb_hiwat; } ;
struct socket {TYPE_1__ so_rcv; } ;
struct ifnet {int if_eflags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ifnet*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_3(struct tcpcb *VAR_7, struct socket *VAR_8, struct ifnet *VAR_9)
{
 uint32_t VAR_10;
 uint32_t VAR_11;

 if (!VAR_5) {
  VAR_7->request_r_scale = 0;
  return;
 }





 if (!VAR_9 || (FUNC_0(VAR_9) && (VAR_9->if_eflags & VAR_0)))
  VAR_11 = (VAR_4 << 1);
 else
  VAR_11 = VAR_4;

 VAR_7->request_r_scale = FUNC_1(VAR_6, VAR_7->request_r_scale);
 VAR_10 = ((VAR_8->so_rcv.sb_flags & VAR_1) != 0) ?
  VAR_8->so_rcv.sb_hiwat : VAR_11;

 while (VAR_7->request_r_scale < VAR_3 &&
  (VAR_2 << VAR_7->request_r_scale) < VAR_10)
  VAR_7->request_r_scale++;
 VAR_7->request_r_scale = FUNC_2(VAR_7->request_r_scale, VAR_3);

}
