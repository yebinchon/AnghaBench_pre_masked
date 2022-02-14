
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


typedef TYPE_3__* vnode_t ;
typedef int vfs_context_t ;
typedef int uid_t ;
struct vnode_attr {int va_active; int va_uid; int va_gid; int va_data_size; int va_total_size; int va_modify_time; int va_guuid; int va_uuuid; int * va_acl; } ;
typedef TYPE_4__* kauth_filesec_t ;
typedef int * kauth_acl_t ;
typedef int gid_t ;
struct TYPE_16__ {int* val; } ;
struct TYPE_17__ {int f_iosize; scalar_t__ f_bsize; TYPE_1__ f_fsid; } ;
struct TYPE_20__ {int mnt_flag; int mnt_fsowner; int mnt_fsgroup; TYPE_2__ mnt_vfsstat; } ;
struct TYPE_15__ {scalar_t__ acl_entrycount; } ;
struct TYPE_19__ {int fsec_owner; int fsec_group; TYPE_11__ fsec_acl; } ;
struct TYPE_18__ {int v_type; TYPE_9__* v_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_11__*) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct vnode_attr*,int ) ;
 int FUNC_3 (struct vnode_attr*,int ) ;
 scalar_t__ FUNC_4 (struct vnode_attr*,int ) ;
 scalar_t__ FUNC_5 (struct vnode_attr*,int ) ;
 scalar_t__ FUNC_6 (struct vnode_attr*,int ) ;
 int FUNC_7 (struct vnode_attr*,int ,int) ;
 int FUNC_8 (struct vnode_attr*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (TYPE_3__*,struct vnode_attr*,int ) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_11__*,int *,int ) ;
 int * FUNC_12 (scalar_t__) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *,int*) ;
 int FUNC_17 (int *,int*) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (int *,int*) ;
 int VAR_8 ;
 int FUNC_20 (int,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (TYPE_9__*,int ,int ) ;
 int FUNC_25 (TYPE_3__*,TYPE_4__**,int ) ;
 int FUNC_26 (TYPE_3__*) ;

int
FUNC_27(vnode_t VAR_26, struct vnode_attr *VAR_27, vfs_context_t VAR_28)
{
 kauth_filesec_t VAR_29;
 kauth_acl_t VAR_30;
 int VAR_31;
 uid_t VAR_32;
 gid_t VAR_33;




 if (VAR_27->va_active & ~VAR_7)
  return (VAR_0);


 if (!FUNC_23(FUNC_26(VAR_26))) {
  FUNC_2(VAR_27, VAR_9);
  FUNC_2(VAR_27, VAR_25);
  FUNC_2(VAR_27, VAR_18);
 }





 if (FUNC_4(VAR_27, VAR_11) ||
     FUNC_4(VAR_27, VAR_22) ||
     FUNC_4(VAR_27, VAR_21)) {
  FUNC_8(VAR_27, VAR_12);
  FUNC_8(VAR_27, VAR_11);
  FUNC_8(VAR_27, VAR_22);
  FUNC_8(VAR_27, VAR_21);
 }

 VAR_31 = FUNC_9(VAR_26, VAR_27, VAR_28);
 if (VAR_31) {
  FUNC_1("ERROR - returning %d", VAR_31);
  goto out;
 }





 if (FUNC_6(VAR_27, VAR_9) || FUNC_6(VAR_27, VAR_25) || FUNC_6(VAR_27, VAR_18)) {
  VAR_29 = ((void*)0);

  if (FUNC_10(VAR_26)) {

   if ((VAR_31 = FUNC_25(VAR_26, &VAR_29, VAR_28)) != 0)
    goto out;
  }

  if (VAR_29 == ((void*)0)) {
   FUNC_7(VAR_27, VAR_9, ((void*)0));
   FUNC_7(VAR_27, VAR_25, VAR_8);
   FUNC_7(VAR_27, VAR_18, VAR_8);
  } else {


   FUNC_7(VAR_27, VAR_25, VAR_29->fsec_owner);
   FUNC_7(VAR_27, VAR_18, VAR_29->fsec_group);


   if (FUNC_4(VAR_27, VAR_9)) {
    if (VAR_29->fsec_acl.acl_entrycount == VAR_2) {
     FUNC_7(VAR_27, VAR_9, ((void*)0));
    } else {
     VAR_30 = FUNC_12(VAR_29->fsec_acl.acl_entrycount);
     if (VAR_30 == ((void*)0)) {
      FUNC_18(VAR_29);
      VAR_31 = VAR_1;
      goto out;
     }
     FUNC_11(&VAR_29->fsec_acl, VAR_30, FUNC_0(&VAR_29->fsec_acl));
     FUNC_7(VAR_27, VAR_9, *VAR_30);
    }
   }
   FUNC_18(VAR_29);
  }
 }





 if (FUNC_5(VAR_27, VAR_9) && !FUNC_4(VAR_27, VAR_9)) {
  if (VAR_27->va_acl != ((void*)0))
   FUNC_13(VAR_27->va_acl);
  FUNC_3(VAR_27, VAR_9);
 }
 if (FUNC_4(VAR_27, VAR_24)) {
  if (FUNC_21(VAR_28) && FUNC_5(VAR_27, VAR_24)) {
   VAR_32 = VAR_27->va_uid;
  } else if (VAR_26->v_mount->mnt_flag & VAR_5) {
   VAR_32 = VAR_26->v_mount->mnt_fsowner;
   if (VAR_32 == VAR_4)
    VAR_32 = 99;
  } else if (FUNC_5(VAR_27, VAR_24)) {
   VAR_32 = VAR_27->va_uid;
  } else {

   VAR_32 = VAR_26->v_mount->mnt_fsowner;
  }
  if ((VAR_32 == 99) && !FUNC_21(VAR_28))
   VAR_32 = FUNC_15(FUNC_22(VAR_28));
  FUNC_7(VAR_27, VAR_24, VAR_32);
 }
 if (FUNC_4(VAR_27, VAR_17)) {
  if (FUNC_21(VAR_28) && FUNC_5(VAR_27, VAR_17)) {
   VAR_33 = VAR_27->va_gid;
  } else if (VAR_26->v_mount->mnt_flag & VAR_5) {
   VAR_33 = VAR_26->v_mount->mnt_fsgroup;
   if (VAR_33 == VAR_3)
    VAR_33 = 99;
  } else if (FUNC_5(VAR_27, VAR_17)) {
   VAR_33 = VAR_27->va_gid;
  } else {

   VAR_33 = VAR_26->v_mount->mnt_fsgroup;
  }
  if ((VAR_33 == 99) && !FUNC_21(VAR_28))
   VAR_33 = FUNC_14(FUNC_22(VAR_28));
  FUNC_7(VAR_27, VAR_17, VAR_33);
 }




 if (!FUNC_5(VAR_27, VAR_19))
  FUNC_7(VAR_27, VAR_19, VAR_26->v_mount->mnt_vfsstat.f_iosize);

 if (!FUNC_5(VAR_27, VAR_14))
  FUNC_7(VAR_27, VAR_14, 0);

 if (!FUNC_5(VAR_27, VAR_13))
  FUNC_7(VAR_27, VAR_13, 0);

 if (!FUNC_5(VAR_27, VAR_16))
  FUNC_7(VAR_27, VAR_16, 0);




 if (!FUNC_5(VAR_27, VAR_12))
  FUNC_7(VAR_27, VAR_12, 0);


 if (FUNC_4(VAR_27, VAR_11) ||
     FUNC_4(VAR_27, VAR_22) ||
     FUNC_4(VAR_27, VAR_21)) {

                if (VAR_26->v_mount->mnt_vfsstat.f_bsize == 0) {
                    if ((VAR_31 = FUNC_24(VAR_26->v_mount, VAR_28, VAR_6)) != 0)
                        goto out;
                }


  if (!FUNC_5(VAR_27, VAR_11))
   FUNC_7(VAR_27, VAR_11, FUNC_20(VAR_27->va_data_size, VAR_26->v_mount->mnt_vfsstat.f_bsize));


  if (!FUNC_5(VAR_27, VAR_22))
   FUNC_7(VAR_27, VAR_22, VAR_27->va_data_size);


  if (!FUNC_5(VAR_27, VAR_21))
   FUNC_7(VAR_27, VAR_21, FUNC_20(VAR_27->va_total_size, VAR_26->v_mount->mnt_vfsstat.f_bsize));
 }




 if (!FUNC_5(VAR_27, VAR_10) && FUNC_5(VAR_27, VAR_20))
  FUNC_7(VAR_27, VAR_10, VAR_27->va_modify_time);





 FUNC_7(VAR_27, VAR_23, VAR_26->v_type);




 FUNC_7(VAR_27, VAR_15, VAR_26->v_mount->mnt_vfsstat.f_fsid.val[0]);

out:

 return(VAR_31);
}
