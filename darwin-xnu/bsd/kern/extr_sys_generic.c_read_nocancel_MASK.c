
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int user_ssize_t ;
struct vfs_context {int vc_ucred; } ;
struct read_nocancel_args {int fd; int nbyte; int cbuf; } ;
struct proc {int dummy; } ;
struct fileproc {TYPE_1__* f_fglob; } ;
typedef int off_t ;
struct TYPE_2__ {int fg_cred; } ;


 int FUNC_0 (struct vfs_context*,struct fileproc*,int ,int ,int ,int ,int *) ;
 int FUNC_1 (struct proc*,struct fileproc*,int) ;
 int FUNC_2 (struct proc*,struct fileproc**,int,int ) ;
 struct vfs_context* FUNC_3 () ;

int
FUNC_4(struct proc *VAR_0, struct read_nocancel_args *VAR_1, user_ssize_t *VAR_2)
{
 struct fileproc *VAR_3;
 int VAR_4;
 int VAR_5 = VAR_1->fd;
 struct vfs_context VAR_6;

 if ( (VAR_4 = FUNC_2(VAR_0, &VAR_3, VAR_5, 0)) )
         return (VAR_4);

 VAR_6 = *(FUNC_3());
 VAR_6.vc_ucred = VAR_3->f_fglob->fg_cred;

 VAR_4 = FUNC_0(&VAR_6, VAR_3, VAR_1->cbuf, VAR_1->nbyte,
      (off_t)-1, 0, VAR_2);

 FUNC_1(VAR_0, VAR_3, VAR_5);

 return (VAR_4);
}
