
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_2__* so_proto; } ;
struct rawcb {int dummy; } ;
typedef int lck_mtx_t ;
struct TYPE_4__ {TYPE_1__* pr_domain; int * (* pr_getlock ) (struct socket*,int ) ;} ;
struct TYPE_3__ {int * dom_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct rawcb*) ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*) ;
 struct rawcb* FUNC_4 (struct socket*) ;
 int * FUNC_5 (struct socket*,int ) ;

__attribute__((used)) static int
FUNC_6(struct socket *VAR_2)
{
 struct rawcb *VAR_3 = FUNC_4(VAR_2);

 lck_mtx_t * VAR_4;
 if (VAR_2->so_proto->pr_getlock != ((void*)0))
  VAR_4 = (*VAR_2->so_proto->pr_getlock)(VAR_2, 0);
 else
  VAR_4 = VAR_2->so_proto->pr_domain->dom_mtx;
 FUNC_0(VAR_4, VAR_1);

 if (VAR_3 == 0)
  return VAR_0;
 FUNC_1(VAR_3);
 FUNC_2(VAR_2);
 FUNC_3(VAR_2);
 return 0;
}
