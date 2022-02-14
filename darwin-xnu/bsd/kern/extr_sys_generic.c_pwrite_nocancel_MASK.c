
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
typedef scalar_t__ user_ssize_t ;
struct vfs_context {int vc_ucred; } ;
struct pwrite_nocancel_args {int fd; int offset; int nbyte; int buf; } ;
struct proc {int dummy; } ;
struct fileproc {int f_flag; scalar_t__ f_type; TYPE_1__* f_fglob; } ;
typedef int off_t ;
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
 scalar_t__ FUNC_2 (struct fileproc*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int,int,int ,unsigned int,unsigned int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct vfs_context*,struct fileproc*,int ,int ,int,int ,scalar_t__*) ;
 int FUNC_5 (struct proc*,int,struct fileproc*,int ) ;
 int FUNC_6 (struct proc*,int,struct fileproc*) ;
 int FUNC_7 (struct proc*,int,struct fileproc*,int ) ;
 int FUNC_8 (struct proc*,int,struct fileproc**,int ) ;
 int VAR_12 ;
 int FUNC_9 (struct proc*) ;
 int FUNC_10 (struct proc*) ;
 struct vfs_context* FUNC_11 () ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;

int
FUNC_13(struct proc *VAR_13, struct pwrite_nocancel_args *VAR_14, user_ssize_t *VAR_15)
{
        struct fileproc *VAR_16;
        int VAR_17;
 int VAR_18 = VAR_14->fd;
 vnode_t VAR_19 = (vnode_t)0;
 bool VAR_20 = 0;

 FUNC_0(VAR_18, VAR_18);

 VAR_17 = FUNC_8(VAR_13,VAR_18,&VAR_16,0);
 if (VAR_17)
  return(VAR_17);

 if ((VAR_16->f_flag & VAR_8) == 0) {
  VAR_17 = VAR_3;
 } else if (FUNC_2(VAR_16, VAR_9)) {
  FUNC_9(VAR_13);
  VAR_17 = FUNC_7(VAR_13, VAR_18, VAR_16, VAR_12);
  FUNC_10(VAR_13);
 } else {
  struct vfs_context VAR_21 = *FUNC_11();
  VAR_21.vc_ucred = VAR_16->f_fglob->fg_cred;

  if (VAR_16->f_type != VAR_2) {
   VAR_17 = VAR_6;
   goto errout;
  }
  VAR_19 = (vnode_t)VAR_16->f_fglob->fg_data;
  if (FUNC_12(VAR_19)) {
   VAR_17 = VAR_6;
   goto errout;
  }
  if ((VAR_19->v_flag & VAR_11)) {
   VAR_17 = VAR_5;
   goto errout;
  }
  if (VAR_14->offset == (off_t)-1) {
   VAR_17 = VAR_4;
   goto errout;
  }

      VAR_17 = FUNC_4(&VAR_21, VAR_16, VAR_14->buf, VAR_14->nbyte,
   VAR_14->offset, VAR_7, VAR_15);
   VAR_20 = *VAR_15 > 0;
        }
errout:
 if (VAR_20)
         FUNC_6(VAR_13, VAR_18, VAR_16);
 else
         FUNC_5(VAR_13, VAR_18, VAR_16, 0);

 FUNC_3((FUNC_1(VAR_0, VAR_10) | VAR_1),
       VAR_14->fd, VAR_14->nbyte, (unsigned int)((VAR_14->offset >> 32)), (unsigned int)(VAR_14->offset), 0);

        return(VAR_17);
}
