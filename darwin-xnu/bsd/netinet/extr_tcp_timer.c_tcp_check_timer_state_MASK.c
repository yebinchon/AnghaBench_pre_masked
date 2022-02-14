
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {TYPE_1__* t_inpcb; } ;
struct TYPE_2__ {int inp_flags2; int inp_socket; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tcpcb*) ;
 int FUNC_2 (struct tcpcb*) ;

void
FUNC_3(struct tcpcb *VAR_1)
{
 FUNC_0(VAR_1->t_inpcb->inp_socket);

 if (VAR_1->t_inpcb->inp_flags2 & VAR_0)
  return;

 FUNC_2(VAR_1);

 FUNC_1(VAR_1);
 return;
}
