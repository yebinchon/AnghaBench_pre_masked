
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int so_flags; TYPE_3__* so_proto; } ;
typedef int lck_mtx_t ;
struct TYPE_6__ {TYPE_2__* pr_usrreqs; TYPE_1__* pr_domain; int * (* pr_getlock ) (struct socket*,int ) ;} ;
struct TYPE_5__ {int (* pru_abort ) (struct socket*) ;} ;
struct TYPE_4__ {int * dom_mtx; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct socket*) ;
 int * FUNC_2 (struct socket*,int ) ;
 int FUNC_3 (struct socket*) ;

int
FUNC_4(struct socket *VAR_2)
{
 int VAR_3;
 if ((VAR_2->so_flags & VAR_1) == 0) {
  VAR_2->so_flags |= VAR_1;
  VAR_3 = (*VAR_2->so_proto->pr_usrreqs->pru_abort)(VAR_2);
  if (VAR_3) {
   FUNC_1(VAR_2);
   return (VAR_3);
  }
 }
 return (0);
}
