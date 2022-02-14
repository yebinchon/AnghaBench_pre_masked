
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct socket*,int ,int *) ;
 int VAR_3 ;

void
FUNC_1(struct socket *VAR_4)
{
 VAR_4->so_state &= ~(VAR_0|VAR_2);
 VAR_4->so_state |= VAR_1;

 FUNC_0(VAR_4, VAR_3, ((void*)0));
}
