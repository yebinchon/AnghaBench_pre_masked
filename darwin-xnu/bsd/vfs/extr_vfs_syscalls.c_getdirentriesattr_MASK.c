
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef struct vnode* vnode_t ;
typedef int vfs_context_t ;
typedef scalar_t__ user_ssize_t ;
typedef int * uio_t ;
typedef int uio_buf ;
typedef scalar_t__ uint32_t ;
typedef int u_long ;
struct vnode {scalar_t__ v_type; TYPE_1__* v_mount; } ;
struct getdirentriesattr_args {int fd; int basep; int newstate; int count; scalar_t__ buffersize; scalar_t__ options; int buffer; int alist; } ;
struct fileproc {TYPE_2__* f_fglob; } ;
struct attrlist {int commonattr; scalar_t__ dirattr; scalar_t__ fileattr; } ;
typedef int proc_t ;
typedef int newstate ;
typedef int loff ;
typedef int kauth_action_t ;
typedef int int32_t ;
typedef int count ;
typedef scalar_t__ caddr_t ;
typedef int attributelist ;
struct TYPE_4__ {int fg_flag; scalar_t__ fg_offset; scalar_t__ fg_data; } ;
struct TYPE_3__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (struct vnode*,struct attrlist*,int *,scalar_t__,int ,scalar_t__*,int*,scalar_t__*,int ) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int,struct fileproc**,struct vnode**) ;
 scalar_t__ FUNC_7 (struct vnode*,struct vnode**,int ) ;
 int FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (int ,struct vnode*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,scalar_t__) ;
 int * FUNC_12 (int,scalar_t__,int,int ,char*,int) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct vnode*,int *,int ,int ) ;
 int FUNC_18 (struct vnode*) ;
 int FUNC_19 (struct vnode*) ;
 int FUNC_20 (struct vnode*,int,int ) ;
 int FUNC_21 (struct vnode*,int,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;

int
FUNC_22 (proc_t VAR_15, struct getdirentriesattr_args *VAR_16, int32_t *VAR_17)
{
 vnode_t VAR_18;
 struct fileproc *VAR_19;
 uio_t VAR_20 = ((void*)0);
 int VAR_21 = FUNC_10(VAR_15) ? VAR_11 : VAR_10;
 uint32_t VAR_22 = 0, VAR_23 = 0;
 uint32_t VAR_24 = 0;
 int VAR_25, VAR_26;
 uint32_t VAR_27 = 0;
 struct attrlist VAR_28;
 vfs_context_t VAR_29 = FUNC_15();
 int VAR_30 = VAR_16->fd;
 char VAR_31[ FUNC_1(1) ];
 kauth_action_t VAR_32;

 FUNC_0(VAR_30, VAR_30);


 if ((VAR_25 = FUNC_3(VAR_16->alist, (caddr_t)&VAR_28, sizeof(VAR_28)))) {
  return(VAR_25);
 }
 if ((VAR_25 = FUNC_3(VAR_16->count, (caddr_t)&VAR_22, sizeof(VAR_22)))) {
  return(VAR_25);
 }
 VAR_23 = VAR_22;
 if ( (VAR_25 = FUNC_6(VAR_15, VAR_30, &VAR_19, &VAR_18)) ) {
  return (VAR_25);
 }
 if ((VAR_19->f_fglob->fg_flag & VAR_4) == 0) {
  FUNC_0(VAR_14, VAR_18, VAR_0);
  VAR_25 = VAR_2;
  goto out;
 }
 if ( (VAR_25 = FUNC_18(VAR_18)) )
  goto out;

 FUNC_0(VAR_13, VAR_18, VAR_0);

unionread:
 if (VAR_18->v_type != VAR_12) {
  (void)FUNC_19(VAR_18);
  VAR_25 = VAR_3;
  goto out;
 }
 VAR_27 = VAR_19->f_fglob->fg_offset;
 VAR_20 = FUNC_12(1, VAR_27, VAR_21, VAR_9, &VAR_31[0], sizeof(VAR_31));
 FUNC_11(VAR_20, VAR_16->buffer, VAR_16->buffersize);






 VAR_32 = VAR_5;
 if ((VAR_28.commonattr & ~VAR_1) ||
     VAR_28.fileattr || VAR_28.dirattr)
  VAR_32 |= VAR_6;

 if ((VAR_25 = FUNC_17(VAR_18, ((void*)0), VAR_32, VAR_29)) == 0) {




  VAR_25 = FUNC_2(VAR_18, &VAR_28, VAR_20, VAR_22,
    (u_long)(uint32_t)VAR_16->options, &VAR_24, &VAR_26, &VAR_22, VAR_29);
 }

 if (VAR_25) {
  (void) FUNC_19(VAR_18);
  goto out;
 }
 if (VAR_26 && VAR_18->v_mount->mnt_flag & VAR_7) {
  if (FUNC_14(VAR_20) < (user_ssize_t) VAR_16->buffersize) {
   VAR_26 = 0;
  } else {
   struct vnode *VAR_33 = VAR_18;
   if (FUNC_7(VAR_33, &VAR_18, VAR_29) == 0) {
    FUNC_20(VAR_18, VAR_19->f_fglob->fg_flag & VAR_8, 0);
    VAR_19->f_fglob->fg_data = (caddr_t) VAR_18;
    VAR_19->f_fglob->fg_offset = 0;
    VAR_22 = VAR_23;
    FUNC_21(VAR_33, VAR_19->f_fglob->fg_flag & VAR_8, 0, 0);
    FUNC_19(VAR_33);
    goto unionread;
   }
   VAR_18 = VAR_33;
  }
 }

 (void)FUNC_19(VAR_18);

 if (VAR_25)
  goto out;
 VAR_19->f_fglob->fg_offset = FUNC_13(VAR_20);

 if ((VAR_25 = FUNC_4((caddr_t) &VAR_22, VAR_16->count, sizeof(VAR_22))))
  goto out;
 if ((VAR_25 = FUNC_4((caddr_t) &VAR_24, VAR_16->newstate, sizeof(VAR_24))))
  goto out;
 if ((VAR_25 = FUNC_4((caddr_t) &VAR_27, VAR_16->basep, sizeof(VAR_27))))
  goto out;

 *VAR_17 = VAR_26;
 VAR_25 = 0;
out:
 FUNC_5(VAR_30);
 return (VAR_25);

}
