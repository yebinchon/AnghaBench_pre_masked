
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
typedef scalar_t__ user_ssize_t ;
typedef int uguard ;
struct vfs_context {int vc_ucred; } ;
struct proc {int dummy; } ;
struct guarded_pwrite_np_args {int fd; int offset; int nbyte; int buf; int guard; } ;
struct guarded_fileproc {int dummy; } ;
struct fileproc {int f_flag; scalar_t__ f_type; TYPE_1__* f_fglob; } ;
typedef int off_t ;
typedef int guardid_t ;
struct TYPE_5__ {int v_flag; } ;
struct TYPE_4__ {scalar_t__ fg_data; int fg_cred; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct fileproc* FUNC_2 (struct guarded_fileproc*) ;
 int FUNC_3 (int,int,int ,unsigned int,unsigned int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (struct vfs_context*,struct fileproc*,int ,int ,int,int ,scalar_t__*) ;
 int FUNC_6 (struct proc*,int,struct fileproc*,int ) ;
 int FUNC_7 (struct proc*,int,struct fileproc*) ;
 int FUNC_8 (struct proc*,int,int ,struct guarded_fileproc**,int ) ;
 struct vfs_context* FUNC_9 () ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;

int
 FUNC_11(struct proc *VAR_11, struct guarded_pwrite_np_args *VAR_12, user_ssize_t *VAR_13)
 {
 struct fileproc *VAR_14;
 int VAR_15;
 int VAR_16 = VAR_12->fd;
 vnode_t VAR_17 = (vnode_t)0;
 guardid_t VAR_18;
 struct guarded_fileproc *VAR_19;
 bool VAR_20 = 0;

 FUNC_0(VAR_16, VAR_16);

 if ((VAR_15 = FUNC_4(VAR_12->guard, &VAR_18, sizeof (VAR_18))) != 0)
  return (VAR_15);

 VAR_15 = FUNC_8(VAR_11, VAR_16, VAR_18, &VAR_19, 0);
 if (VAR_15)
  return(VAR_15);

 VAR_14 = FUNC_2(VAR_19);
 if ((VAR_14->f_flag & VAR_8) == 0) {
  VAR_15 = VAR_3;
 } else {
  struct vfs_context VAR_21 = *FUNC_9();
  VAR_21.vc_ucred = VAR_14->f_fglob->fg_cred;

  if (VAR_14->f_type != VAR_2) {
   VAR_15 = VAR_6;
   goto errout;
  }
  VAR_17 = (vnode_t)VAR_14->f_fglob->fg_data;
  if (FUNC_10(VAR_17)) {
   VAR_15 = VAR_6;
   goto errout;
  }
  if ((VAR_17->v_flag & VAR_10)) {
   VAR_15 = VAR_5;
   goto errout;
  }
  if (VAR_12->offset == (off_t)-1) {
   VAR_15 = VAR_4;
   goto errout;
  }

  VAR_15 = FUNC_5(&VAR_21, VAR_14, VAR_12->buf, VAR_12->nbyte,
   VAR_12->offset, VAR_7, VAR_13);
  VAR_20 = *VAR_13 > 0;
 }
errout:
 if (VAR_20)
         FUNC_7(VAR_11, VAR_16, VAR_14);
 else
         FUNC_6(VAR_11, VAR_16, VAR_14, 0);

 FUNC_3((FUNC_1(VAR_0, VAR_9) | VAR_1),
       VAR_12->fd, VAR_12->nbyte, (unsigned int)((VAR_12->offset >> 32)), (unsigned int)(VAR_12->offset), 0);

        return(VAR_15);
}
