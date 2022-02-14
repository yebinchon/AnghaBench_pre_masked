
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct waitq {int dummy; } ;
struct vfs_context {int vc_ucred; int vc_thread; } ;
struct fileproc {int f_flags; scalar_t__ f_wset; TYPE_2__* f_fglob; scalar_t__ f_iocount; } ;
typedef TYPE_3__* proc_t ;
struct TYPE_8__ {int p_fpdrainwait; int p_fdmlock; } ;
struct TYPE_7__ {TYPE_1__* fg_ops; int fg_cred; } ;
struct TYPE_6__ {int (* fo_drain ) (struct fileproc*,struct vfs_context*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int*,int *,int ,char*,int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_3__*) ;
 struct waitq VAR_7 ;
 int FUNC_4 (struct fileproc*,struct vfs_context*) ;
 scalar_t__ FUNC_5 (struct waitq*,int ,int ,int ) ;

void
FUNC_6(proc_t VAR_8, struct fileproc * VAR_9)
{
 struct vfs_context VAR_10;

 VAR_10.vc_thread = FUNC_3(VAR_8);
 VAR_10.vc_ucred = VAR_9->f_fglob->fg_cred;

 VAR_9->f_iocount-- ;

 while (VAR_9->f_iocount) {

         FUNC_0(&VAR_8->p_fdmlock);

  if (VAR_9->f_fglob->fg_ops->fo_drain) {
   (*VAR_9->f_fglob->fg_ops->fo_drain)(VAR_9, &VAR_10);
  }
  if ((VAR_9->f_flags & VAR_0) == VAR_0) {
   if (FUNC_5((struct waitq *)VAR_9->f_wset, VAR_3,
            VAR_5, VAR_6) == VAR_2)
    FUNC_2("bad wait queue for waitq_wakeup64_all %p (fp:%p)", VAR_9->f_wset, VAR_9);
  }
  if ((VAR_9->f_flags & VAR_1) == VAR_1) {
   if (FUNC_5(&VAR_7, VAR_3,
            VAR_5, VAR_6) == VAR_2)
    FUNC_2("bad select_conflict_queue");
  }
  VAR_8->p_fpdrainwait = 1;

  FUNC_1(&VAR_8->p_fpdrainwait, &VAR_8->p_fdmlock, VAR_4, "fpdrain", ((void*)0));

 }




 if ((VAR_9->f_flags & VAR_1) == VAR_1)
  VAR_9->f_flags &= ~VAR_1;
}
