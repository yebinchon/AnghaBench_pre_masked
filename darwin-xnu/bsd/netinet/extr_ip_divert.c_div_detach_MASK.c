
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct socket {int so_usecount; struct socket* so_pcb; } ;
struct inpcb {int inp_state; struct socket inpcb_mtx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct socket*) ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (char*,struct socket*) ;
 int FUNC_3 (char*,int ,int ,int ,int ) ;
 struct inpcb* FUNC_4 (struct socket*) ;

__attribute__((used)) static int
FUNC_5(struct socket *VAR_1)
{
 struct inpcb *VAR_2;
 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2 == 0)
  FUNC_2("div_detach: so=%p null inp\n", VAR_1);
 FUNC_1(VAR_2);
 VAR_2->inp_state = VAR_0;
 return 0;
}
