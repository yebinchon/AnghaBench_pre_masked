
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_2__* so_proto; } ;
typedef int lck_mtx_t ;
struct TYPE_4__ {TYPE_1__* pr_domain; int * (* pr_getlock ) (struct socket*,int ) ;} ;
struct TYPE_3__ {int * dom_mtx; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (struct socket*,int ) ;

int
FUNC_2(struct socket *VAR_0)
{
 lck_mtx_t *VAR_1;

 if (VAR_0->so_proto->pr_getlock != ((void*)0))
  VAR_1 = (*VAR_0->so_proto->pr_getlock)(VAR_0, 0);
 else
  VAR_1 = VAR_0->so_proto->pr_domain->dom_mtx;

 return (FUNC_0(VAR_1));
}
