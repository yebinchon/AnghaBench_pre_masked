
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int sb_flags; } ;
struct TYPE_7__ {int sb_flags; } ;
struct socket {int so_flags; int so_upcallusecount; TYPE_4__ so_snd; TYPE_3__ so_rcv; TYPE_2__* so_proto; } ;
typedef int lck_mtx_t ;
typedef int caddr_t ;
struct TYPE_6__ {TYPE_1__* pr_domain; int * (* pr_getlock ) (struct socket*,int ) ;} ;
struct TYPE_5__ {int * dom_mtx; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *,scalar_t__,char*,int *) ;
 int * FUNC_2 (struct socket*,int ) ;

void
FUNC_3(struct socket *VAR_6)
{
 lck_mtx_t *VAR_7;

 if (VAR_6->so_proto->pr_getlock != ((void*)0))
  VAR_7 = (*VAR_6->so_proto->pr_getlock)(VAR_6, VAR_1);
 else
  VAR_7 = VAR_6->so_proto->pr_domain->dom_mtx;
 FUNC_0(VAR_7, VAR_0);





 if (!VAR_6->so_upcallusecount || !(VAR_6->so_flags & VAR_5))
  return;
 VAR_6->so_rcv.sb_flags &= ~VAR_3;
 VAR_6->so_snd.sb_flags &= ~VAR_3;
 VAR_6->so_flags |= VAR_4;

 (void) FUNC_1((caddr_t)&VAR_6->so_upcallusecount, VAR_7, (VAR_2 - 1),
     "soclose_wait_locked", ((void*)0));
 FUNC_0(VAR_7, VAR_0);
 VAR_6->so_flags &= ~VAR_4;
}
