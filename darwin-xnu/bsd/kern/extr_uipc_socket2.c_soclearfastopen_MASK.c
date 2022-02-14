
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_flags1; } ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(struct socket *VAR_2)
{
 if (VAR_2->so_flags1 & VAR_1)
  VAR_2->so_flags1 &= ~VAR_1;

 if (VAR_2->so_flags1 & VAR_0)
  VAR_2->so_flags1 &= ~VAR_0;
}
