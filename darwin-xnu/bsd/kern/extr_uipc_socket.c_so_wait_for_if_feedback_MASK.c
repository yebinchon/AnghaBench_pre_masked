
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_state; } ;
struct inpcb {int dummy; } ;


 scalar_t__ FUNC_0 (struct inpcb*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct socket*) ;
 int VAR_2 ;
 struct inpcb* FUNC_2 (struct socket*) ;

int
FUNC_3(struct socket *VAR_3)
{
 if ((FUNC_1(VAR_3) == VAR_0 || FUNC_1(VAR_3) == VAR_1) &&
     (VAR_3->so_state & VAR_2)) {
  struct inpcb *VAR_4 = FUNC_2(VAR_3);
  if (FUNC_0(VAR_4))
   return (1);
 }
 return (0);
}
