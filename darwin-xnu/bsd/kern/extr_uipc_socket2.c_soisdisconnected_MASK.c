
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct socket*,int ) ;
 int FUNC_1 (struct socket*,int ,int *) ;
 int VAR_10 ;
 int FUNC_2 (struct socket*,int) ;
 int FUNC_3 (struct socket*) ;
 int FUNC_4 (struct socket*) ;
 int FUNC_5 (int ) ;

void
FUNC_6(struct socket *VAR_11)
{
 VAR_11->so_state &= ~(VAR_7|VAR_6|VAR_9);
 VAR_11->so_state |= (VAR_4|VAR_5|VAR_8);
 FUNC_2(VAR_11, VAR_3 | VAR_2 |
     VAR_1);
 FUNC_1(VAR_11, VAR_10, ((void*)0));
 FUNC_5((caddr_t)&VAR_11->so_timeo);
 FUNC_4(VAR_11);
 FUNC_3(VAR_11);





}
