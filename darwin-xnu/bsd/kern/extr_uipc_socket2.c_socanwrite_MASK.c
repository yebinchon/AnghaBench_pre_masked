
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int so_state; int so_flags1; TYPE_1__* so_proto; } ;
typedef int boolean_t ;
struct TYPE_2__ {int pr_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

boolean_t
FUNC_0(struct socket *VAR_3)
{
 return ((VAR_3->so_state & VAR_2) ||
        !(VAR_3->so_proto->pr_flags & VAR_0) ||
        (VAR_3->so_flags1 & VAR_1));
}
