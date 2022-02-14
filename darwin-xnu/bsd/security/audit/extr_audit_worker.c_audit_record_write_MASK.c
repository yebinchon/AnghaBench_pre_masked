
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ u_quad_t ;
struct vnode {TYPE_1__* v_mount; } ;
struct vfsstatfs {int f_bfree; int f_blocks; unsigned long f_bsize; } ;
struct vfs_context {int dummy; } ;
struct timeval {int dummy; } ;
typedef scalar_t__ off_t ;
struct TYPE_6__ {scalar_t__ af_filesz; scalar_t__ af_currsz; } ;
struct TYPE_5__ {int aq_minfree; } ;
struct TYPE_4__ {struct vfsstatfs mnt_vfsstat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct vnode*,int ,struct vfs_context*) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 TYPE_3__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_2__ VAR_19 ;
 int FUNC_2 (int ) ;
 int VAR_20 ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (struct timeval*,int*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct vfs_context*) ;
 int FUNC_7 (struct vfs_context*) ;
 int FUNC_8 (TYPE_1__*,struct vfs_context*,int ) ;
 int FUNC_9 (int ,struct vnode*,void*,size_t,scalar_t__,int ,int,int ,int *,int ) ;
 scalar_t__ FUNC_10 (struct vnode*) ;
 int FUNC_11 (struct vnode*) ;
 int FUNC_12 (struct vnode*,scalar_t__*,struct vfs_context*) ;

__attribute__((used)) static void
FUNC_13(struct vnode *VAR_21, struct vfs_context *VAR_22, void *VAR_23,
    size_t VAR_24)
{
 static struct timeval VAR_25;
 static struct timeval VAR_26;
 static int VAR_27;
 struct vfsstatfs *VAR_28;
 int VAR_29;
 static int VAR_30;
 uint64_t VAR_31;
 off_t VAR_32;

 FUNC_0();

 if (VAR_21 == ((void*)0))
  return;

 if (FUNC_10(VAR_21))
  return ;

 VAR_28 = &VAR_21->v_mount->mnt_vfsstat;






 VAR_29 = FUNC_8(VAR_21->v_mount, VAR_22, VAR_11);
 if (VAR_29)
  goto fail;
 VAR_29 = FUNC_12(VAR_21, &VAR_32, VAR_22);
 if (VAR_29)
  goto fail;
 VAR_14.af_currsz = (u_quad_t)VAR_32;
 if (VAR_28->f_bfree < VAR_0) {
  VAR_29 = VAR_4;
  goto fail_enospc;
 }






 if (VAR_19.aq_minfree != 0) {
  VAR_31 = VAR_28->f_blocks / (100 / VAR_19.aq_minfree);
  if (VAR_28->f_bfree < VAR_31 &&
      FUNC_4(&VAR_25,
      &VAR_27, 1))
    (void)FUNC_2(
        VAR_1);
 }






 if ((VAR_14.af_filesz != 0) && (VAR_13 == 0) &&
     ((u_quad_t)VAR_32 >= VAR_14.af_filesz)) {
  FUNC_0();

  VAR_13 = 1;
  (void)FUNC_2(VAR_3);
 }
 if (VAR_12) {
  if ((unsigned long)((VAR_18 + VAR_17 + 1) *
      VAR_7) / VAR_28->f_bsize >=
      (unsigned long)(VAR_28->f_bfree)) {
   if (FUNC_4(&VAR_26, &VAR_30, 1))
    FUNC_5("audit_record_write: free space "
        "below size of audit queue, failing "
        "stop\n");
   VAR_15 = 1;
  } else if (VAR_15) {





  }
 }

 VAR_29 = FUNC_9(VAR_10, VAR_21, VAR_23, VAR_24, (off_t)0, VAR_9,
     VAR_5|VAR_6, FUNC_7(VAR_22), ((void*)0),
     FUNC_6(VAR_22));
 if (VAR_29 == VAR_4)
  goto fail_enospc;
 else if (VAR_29)
  goto fail;
 if (VAR_15) {
  if (VAR_18 == 0 && VAR_17 == 0) {
   (void)FUNC_1(VAR_21, VAR_8, VAR_22);
   FUNC_3("Audit store overflow; record queue drained.");
  }
 }

 FUNC_11(VAR_21);
 return;

fail_enospc:





 if (VAR_12) {
  (void)FUNC_1(VAR_21, VAR_8, VAR_22);
  FUNC_3("Audit log space exhausted and fail-stop set.");
 }
 (void)FUNC_2(VAR_2);
 VAR_20 = 1;


fail:




 if (VAR_16) {
  (void)FUNC_1(VAR_21, VAR_8, VAR_22);
  FUNC_3("audit_worker: write error %d\n", VAR_29);
 } else if (FUNC_4(&VAR_26, &VAR_30, 1))
  FUNC_5("audit_worker: write error %d\n", VAR_29);
 FUNC_11(VAR_21);
}
