
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct socket {int so_flags; TYPE_3__* so_cfil; TYPE_2__* so_proto; } ;
typedef int lck_mtx_t ;
typedef int caddr_t ;
struct TYPE_8__ {int cfs_close_wait_timeout; int cfs_close_wait; } ;
struct TYPE_7__ {int cfi_flags; } ;
struct TYPE_6__ {TYPE_1__* pr_domain; int * (* pr_getlock ) (struct socket*,int ) ;} ;
struct TYPE_5__ {int * dom_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,...) ;
 scalar_t__ FUNC_1 (struct socket*) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (struct socket*) ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (struct socket*) ;
 int FUNC_6 (struct socket*,int ) ;
 int FUNC_7 (struct socket*) ;
 TYPE_4__ VAR_11 ;
 int FUNC_8 (int ,int *,int,char*,struct timespec*) ;
 int * FUNC_9 (struct socket*,int ) ;

void
FUNC_10(struct socket *VAR_12)
{
 lck_mtx_t *VAR_13;
 struct timespec VAR_14;
 int VAR_15;

 if (FUNC_1(VAR_12)) {
  FUNC_7(VAR_12);
  return;
 }

 if ((VAR_12->so_flags & VAR_9) == 0 || VAR_12->so_cfil == ((void*)0))
  return;

 FUNC_0(VAR_2, "so %llx", (uint64_t)FUNC_4(VAR_12));

 if (VAR_12->so_proto->pr_getlock != ((void*)0))
  VAR_13 = (*VAR_12->so_proto->pr_getlock)(VAR_12, VAR_6);
 else
  VAR_13 = VAR_12->so_proto->pr_domain->dom_mtx;
 FUNC_2(VAR_13, VAR_1);

 while (FUNC_5(VAR_12)) {



  FUNC_6(VAR_12, VAR_8);





  if (FUNC_5(VAR_12) == 0)
   break;

  FUNC_0(VAR_2, "so %llx waiting",
   (uint64_t)FUNC_4(VAR_12));

  VAR_14.tv_sec = VAR_10 / 1000;
  VAR_14.tv_nsec = (VAR_10 % 1000) *
   VAR_4 * 1000;

  FUNC_3(&VAR_11.cfs_close_wait);
  VAR_12->so_cfil->cfi_flags |= VAR_0;
  VAR_15 = FUNC_8((caddr_t)VAR_12->so_cfil, VAR_13,
   VAR_7 | VAR_5, "cfil_sock_close_wait", &VAR_14);
  VAR_12->so_cfil->cfi_flags &= ~VAR_0;

  FUNC_0(VAR_3, "so %llx timed out %d",
   (uint64_t)FUNC_4(VAR_12), (VAR_15 != 0));




  if (VAR_15 != 0) {
   FUNC_3(&VAR_11.cfs_close_wait_timeout);
   break;
  }
 }

}
