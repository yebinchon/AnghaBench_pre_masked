
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int dummy; } ;
struct tcpcb {TYPE_1__* t_inpcb; } ;
struct mbuf {int dummy; } ;
struct TYPE_2__ {int inp_socket; } ;


 int FUNC_0 (struct tcpcb*,struct mbuf*,struct tcphdr*) ;
 scalar_t__ FUNC_1 (int ,struct tcpcb*,struct mbuf*,int) ;

int
FUNC_2(struct tcpcb *VAR_0, struct mbuf *VAR_1, struct tcphdr *VAR_2,
      int VAR_3)
{
 FUNC_0(VAR_0, VAR_1, VAR_2);
 if (FUNC_1(VAR_0->t_inpcb->inp_socket, VAR_0, VAR_1,
     VAR_3) != 0)
  return -1;
 return 0;
}
