
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* so_proto; } ;
struct TYPE_2__ {int pr_flags; } ;


 int VAR_0 ;

int
FUNC_0(struct socket *VAR_1)
{
 return (VAR_1->so_proto->pr_flags & VAR_0);
}
