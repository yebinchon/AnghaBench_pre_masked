
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ so_pcb; } ;
struct inpcb {int in6p_faddr; int inp_faddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct socket*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct socket *VAR_2) {

 struct inpcb *VAR_3 = (struct inpcb *)VAR_2->so_pcb;

 if (FUNC_0(VAR_2) == VAR_0)
  return (FUNC_2(VAR_3->inp_faddr));
 else if (FUNC_0(VAR_2) == VAR_1)
  return (FUNC_1(&VAR_3->in6p_faddr));

 return (0);
}
