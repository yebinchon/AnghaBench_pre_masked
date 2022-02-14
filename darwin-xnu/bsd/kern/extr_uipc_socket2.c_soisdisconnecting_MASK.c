
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_state; int so_timeo; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct socket*,int ,int *) ;
 int VAR_5 ;
 int FUNC_1 (struct socket*,int ) ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct socket *VAR_6)
{
 VAR_6->so_state &= ~VAR_3;
 VAR_6->so_state |= (VAR_4|VAR_1|VAR_2);
 FUNC_1(VAR_6, VAR_0);
 FUNC_0(VAR_6, VAR_5, ((void*)0));
 FUNC_4((caddr_t)&VAR_6->so_timeo);
 FUNC_3(VAR_6);
 FUNC_2(VAR_6);
}
