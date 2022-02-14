
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_rcv; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct socket*,int *) ;

void
FUNC_2(struct socket *VAR_0)
{
 if (FUNC_0(&VAR_0->so_rcv))
  FUNC_1(VAR_0, &VAR_0->so_rcv);
}
