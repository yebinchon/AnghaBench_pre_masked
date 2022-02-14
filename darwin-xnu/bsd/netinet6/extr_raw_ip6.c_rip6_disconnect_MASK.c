
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_state; } ;
struct inpcb {int in6p_faddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct socket*) ;
 struct inpcb* FUNC_1 (struct socket*) ;

__attribute__((used)) static int
FUNC_2(struct socket *VAR_3)
{
 struct inpcb *VAR_4 = FUNC_1(VAR_3);

 if ((VAR_3->so_state & VAR_1) == 0)
  return VAR_0;
 VAR_4->in6p_faddr = VAR_2;
 return FUNC_0(VAR_3);
}
