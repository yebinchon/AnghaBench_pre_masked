
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ user_ssize_t ;
struct write_nocancel_args {int fd; int nbyte; int cbuf; } ;
struct vfs_context {int vc_ucred; } ;
struct proc {int dummy; } ;
struct fileproc {int f_flag; TYPE_1__* f_fglob; } ;
typedef int off_t ;
struct TYPE_2__ {int fg_cred; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct fileproc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct vfs_context*,struct fileproc*,int ,int ,int ,int ,scalar_t__*) ;
 int FUNC_3 (struct proc*,int,struct fileproc*,int ) ;
 int FUNC_4 (struct proc*,int,struct fileproc*) ;
 int FUNC_5 (struct proc*,int,struct fileproc*,int ) ;
 int FUNC_6 (struct proc*,int,struct fileproc**,int ) ;
 int VAR_3 ;
 int FUNC_7 (struct proc*) ;
 int FUNC_8 (struct proc*) ;
 struct vfs_context* FUNC_9 () ;

int
FUNC_10(struct proc *VAR_4, struct write_nocancel_args *VAR_5, user_ssize_t *VAR_6)
{
 struct fileproc *VAR_7;
 int VAR_8;
 int VAR_9 = VAR_5->fd;
 bool VAR_10 = 0;

 FUNC_0(VAR_9, VAR_9);

 VAR_8 = FUNC_6(VAR_4,VAR_9,&VAR_7,0);
 if (VAR_8)
  return(VAR_8);
 if ((VAR_7->f_flag & VAR_1) == 0) {
  VAR_8 = VAR_0;
 } else if (FUNC_1(VAR_7, VAR_2)) {
  FUNC_7(VAR_4);
  VAR_8 = FUNC_5(VAR_4, VAR_9, VAR_7, VAR_3);
  FUNC_8(VAR_4);
 } else {
  struct vfs_context VAR_11 = *(FUNC_9());
  VAR_11.vc_ucred = VAR_7->f_fglob->fg_cred;

  VAR_8 = FUNC_2(&VAR_11, VAR_7, VAR_5->cbuf, VAR_5->nbyte,
   (off_t)-1, 0, VAR_6);

  VAR_10 = *VAR_6 > 0;
 }
 if (VAR_10)
         FUNC_4(VAR_4, VAR_9, VAR_7);
 else
         FUNC_3(VAR_4, VAR_9, VAR_7, 0);
 return(VAR_8);
}
