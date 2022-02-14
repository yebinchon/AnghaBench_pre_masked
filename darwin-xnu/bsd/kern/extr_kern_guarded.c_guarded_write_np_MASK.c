
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ user_ssize_t ;
typedef int uguard ;
struct vfs_context {int vc_ucred; } ;
struct proc {int dummy; } ;
struct guarded_write_np_args {int fd; int nbyte; int cbuf; int guard; } ;
struct guarded_fileproc {int dummy; } ;
struct fileproc {int f_flag; TYPE_1__* f_fglob; } ;
typedef int off_t ;
typedef int guardid_t ;
struct TYPE_2__ {int fg_cred; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct fileproc* FUNC_1 (struct guarded_fileproc*) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (struct vfs_context*,struct fileproc*,int ,int ,int ,int ,scalar_t__*) ;
 int FUNC_4 (struct proc*,int,struct fileproc*,int ) ;
 int FUNC_5 (struct proc*,int,struct fileproc*) ;
 int FUNC_6 (struct proc*,int,int ,struct guarded_fileproc**,int ) ;
 struct vfs_context* FUNC_7 () ;

int
FUNC_8(struct proc *VAR_2, struct guarded_write_np_args *VAR_3, user_ssize_t *VAR_4)
{
 int VAR_5;
 int VAR_6 = VAR_3->fd;
 guardid_t VAR_7;
 struct fileproc *VAR_8;
 struct guarded_fileproc *VAR_9;
 bool VAR_10 = 0;

 FUNC_0(VAR_6, VAR_6);

 if ((VAR_5 = FUNC_2(VAR_3->guard, &VAR_7, sizeof (VAR_7))) != 0)
  return (VAR_5);

 VAR_5 = FUNC_6(VAR_2, VAR_6, VAR_7, &VAR_9, 0);
 if (VAR_5)
  return(VAR_5);

 VAR_8 = FUNC_1(VAR_9);
 if ((VAR_8->f_flag & VAR_1) == 0) {
  VAR_5 = VAR_0;
 } else {

  struct vfs_context VAR_11 = *(FUNC_7());
  VAR_11.vc_ucred = VAR_8->f_fglob->fg_cred;

  VAR_5 = FUNC_3(&VAR_11, VAR_8, VAR_3->cbuf, VAR_3->nbyte,
   (off_t)-1, 0, VAR_4);
  VAR_10 = *VAR_4 > 0;
 }
 if (VAR_10)
         FUNC_5(VAR_2, VAR_6, VAR_8);
 else
         FUNC_4(VAR_2, VAR_6, VAR_8, 0);
 return(VAR_5);
}
