
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tqh_first; } ;
struct TYPE_4__ {scalar_t__ sb_cc; scalar_t__ sb_lowat; } ;
struct socket {int so_state; scalar_t__ so_error; TYPE_1__ so_comp; TYPE_2__ so_rcv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

int
FUNC_1(struct socket *VAR_1)
{
 return (VAR_1->so_rcv.sb_cc >= VAR_1->so_rcv.sb_lowat ||
     ((VAR_1->so_state & VAR_0)



     ) ||
     VAR_1->so_comp.tqh_first || VAR_1->so_error);
}
