
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ user_ssize_t ;
typedef int uio_t ;
struct vfs_context {int vc_ucred; } ;
struct proc {int dummy; } ;
struct fileproc {scalar_t__ f_type; TYPE_1__* f_fglob; int f_cred; } ;
struct TYPE_2__ {int fg_lflags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct fileproc*,int ,int ,struct vfs_context*) ;
 int FUNC_1 (struct proc*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct vfs_context* FUNC_3 () ;

int
FUNC_4(struct proc *VAR_7, struct fileproc *VAR_8, uio_t VAR_9, user_ssize_t *VAR_10)
{
 int VAR_11;
 user_ssize_t VAR_12;
 struct vfs_context VAR_13 = *FUNC_3();

 VAR_12 = FUNC_2(VAR_9);

 VAR_13.vc_ucred = VAR_8->f_cred;
 VAR_11 = FUNC_0(VAR_8, VAR_9, 0, &VAR_13);
 if (VAR_11) {
  if (FUNC_2(VAR_9) != VAR_12 && (VAR_11 == VAR_3 ||
      VAR_11 == VAR_1 || VAR_11 == VAR_4))
          VAR_11 = 0;

  if (VAR_11 == VAR_2 && VAR_8->f_type != VAR_0 &&
      (VAR_8->f_fglob->fg_lflags & VAR_5) == 0)
          FUNC_1(VAR_7, VAR_6);
 }
 *VAR_10 = VAR_12 - FUNC_2(VAR_9);

 return(VAR_11);
}
