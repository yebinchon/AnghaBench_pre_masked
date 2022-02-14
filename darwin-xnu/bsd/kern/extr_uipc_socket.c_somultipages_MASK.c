
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_flags; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;

void
FUNC_0(struct socket *VAR_1, boolean_t VAR_2)
{
 if (VAR_2)
  VAR_1->so_flags |= VAR_0;
 else
  VAR_1->so_flags &= ~VAR_0;
}
