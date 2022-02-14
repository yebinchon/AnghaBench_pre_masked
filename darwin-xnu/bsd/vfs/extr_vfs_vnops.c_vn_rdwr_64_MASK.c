
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uio_t ;
typedef int uio_buf ;
typedef int uint64_t ;
struct vnode {int dummy; } ;
struct vfs_context {int vc_ucred; int vc_thread; } ;
typedef int proc_t ;
typedef int off_t ;
typedef int kauth_cred_t ;
typedef scalar_t__ int64_t ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
typedef enum uio_rw { ____Placeholder_uio_rw } uio_rw ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct vnode*,int ,int,struct vfs_context*) ;
 int FUNC_3 (struct vnode*,int ,int,struct vfs_context*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct vfs_context*,int ,struct vnode*) ;
 int FUNC_6 (struct vfs_context*,int ,struct vnode*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (int,int ,int,int,char*,int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct vnode*,int ) ;
 scalar_t__ FUNC_12 (struct vnode*) ;

int
FUNC_13(
 enum uio_rw VAR_9,
 struct vnode *VAR_10,
 uint64_t VAR_11,
 int64_t VAR_12,
 off_t VAR_13,
 enum uio_seg VAR_14,
 int VAR_15,
 kauth_cred_t VAR_16,
 int64_t *VAR_17,
 proc_t VAR_18)
{
 uio_t VAR_19;
 int VAR_20;
 struct vfs_context VAR_21;
 int VAR_22=0;
 char VAR_23[ FUNC_1(1) ];

 VAR_21.vc_thread = FUNC_4();
 VAR_21.vc_ucred = VAR_16;

 if (FUNC_0(VAR_14)) {
  VAR_20 = FUNC_7(VAR_18) ? VAR_8 : VAR_7;
 }
 else {
  VAR_20 = VAR_6;
 }
 VAR_19 = FUNC_9(1, VAR_13, VAR_20, VAR_9,
          &VAR_23[0], sizeof(VAR_23));
 FUNC_8(VAR_19, VAR_11, VAR_12);
 if (VAR_22 == 0) {
  if (VAR_9 == VAR_5) {
   if (FUNC_12(VAR_10) && ((VAR_15 & VAR_4) == 0)) {
    VAR_22 = FUNC_11(VAR_10, VAR_19);
   } else {
    VAR_22 = FUNC_2(VAR_10, VAR_19, VAR_15, &VAR_21);
   }
  } else {
   if (FUNC_12(VAR_10) && ((VAR_15 & (VAR_4 | VAR_3)) == 0)) {
    VAR_22 = VAR_1;
   } else {
    VAR_22 = FUNC_3(VAR_10, VAR_19, VAR_15, &VAR_21);
   }

  }
 }

 if (VAR_17)
  *VAR_17 = FUNC_10(VAR_19);
 else
  if (FUNC_10(VAR_19) && VAR_22 == 0)
   VAR_22 = VAR_0;
 return (VAR_22);
}
