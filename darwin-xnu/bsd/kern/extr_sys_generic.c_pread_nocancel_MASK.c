
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int user_ssize_t ;
struct vfs_context {int vc_ucred; } ;
struct proc {int dummy; } ;
struct pread_nocancel_args {int fd; int offset; int nbyte; int buf; } ;
struct fileproc {TYPE_1__* f_fglob; } ;
struct TYPE_2__ {int fg_cred; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int,int ,unsigned int,unsigned int,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct vfs_context*,struct fileproc*,int ,int ,int,int ,int *) ;
 int FUNC_3 (struct proc*,struct fileproc*,int) ;
 int FUNC_4 (struct proc*,struct fileproc**,int,int) ;
 struct vfs_context* FUNC_5 () ;

int
FUNC_6(struct proc *VAR_4, struct pread_nocancel_args *VAR_5, user_ssize_t *VAR_6)
{
 struct fileproc *VAR_7 = ((void*)0);
 int VAR_8 = VAR_5->fd;
 int VAR_9;
 struct vfs_context VAR_10;

 if ( (VAR_9 = FUNC_4(VAR_4, &VAR_7, VAR_8, 1)) )
  goto out;

 VAR_10 = *(FUNC_5());
 VAR_10.vc_ucred = VAR_7->f_fglob->fg_cred;

 VAR_9 = FUNC_2(&VAR_10, VAR_7, VAR_5->buf, VAR_5->nbyte,
   VAR_5->offset, VAR_2, VAR_6);

 FUNC_3(VAR_4, VAR_7, VAR_8);

 FUNC_1((FUNC_0(VAR_0, VAR_3) | VAR_1),
       VAR_5->fd, VAR_5->nbyte, (unsigned int)((VAR_5->offset >> 32)), (unsigned int)(VAR_5->offset), 0);

out:
 return (VAR_9);
}
