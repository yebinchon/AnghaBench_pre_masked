
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int so_incomp; int so_flags1; TYPE_1__* so_proto; } ;
typedef int lck_mtx_t ;
typedef int caddr_t ;
struct TYPE_2__ {int * (* pr_getlock ) (struct socket*,int ) ;} ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (struct socket*,int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct socket *VAR_2)
{
 if (VAR_2->so_proto->pr_getlock != ((void*)0)) {
  lck_mtx_t *VAR_3;

  VAR_3 = (*VAR_2->so_proto->pr_getlock)(VAR_2, 0);
  FUNC_0(VAR_3, VAR_0);

  VAR_2->so_flags1 &= ~VAR_1;
  FUNC_2((caddr_t)&VAR_2->so_incomp);
 }
}
