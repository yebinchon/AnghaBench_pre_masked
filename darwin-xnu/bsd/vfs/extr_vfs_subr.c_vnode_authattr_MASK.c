
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
typedef int uint32_t ;
typedef scalar_t__ uid_t ;
struct vnode_attr {int va_active; int va_vaflags; int va_mode; scalar_t__ va_uid; int va_flags; TYPE_6__* va_acl; int va_guuid; int va_gid; int va_uuuid; } ;
struct kauth_ace {int dummy; } ;
typedef int mode_t ;
typedef int kauth_cred_t ;
typedef int kauth_action_t ;
typedef int guid_t ;
typedef int gid_t ;
struct TYPE_8__ {int acl_entrycount; int * acl_ace; } ;
struct TYPE_7__ {int v_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct vnode_attr*) ;
 scalar_t__ FUNC_2 (struct vnode_attr*,int ) ;
 scalar_t__ FUNC_3 (struct vnode_attr*,int ) ;
 int FUNC_4 (struct vnode_attr*,int ,int) ;
 int FUNC_5 (struct vnode_attr*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int ,int*) ;
 int FUNC_11 (int ,int *,int*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (scalar_t__,int *) ;
 scalar_t__ FUNC_14 (int *,int *) ;
 int VAR_16 ;
 scalar_t__ FUNC_15 (int *,int *,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ FUNC_16 (struct vnode_attr*,int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (TYPE_1__*,struct vnode_attr*,int ) ;
 scalar_t__ FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;

int
FUNC_22(vnode_t VAR_32, struct vnode_attr *VAR_33, kauth_action_t *VAR_34, vfs_context_t VAR_35)
{
 struct vnode_attr VAR_36;
 kauth_action_t VAR_37;
 int VAR_38, VAR_39, VAR_40, VAR_41, VAR_42, VAR_43, VAR_44;
 guid_t VAR_45;
 gid_t VAR_46;
 uid_t VAR_47;
 mode_t VAR_48;
 kauth_cred_t VAR_49;
 uint32_t VAR_50;

 FUNC_1(&VAR_36);
 VAR_37 = 0;
 VAR_38 = 0;




 if (FUNC_17(VAR_32->v_mount))
  goto out;




 if (VAR_33->va_active & VAR_15) {
  FUNC_0("ATTR - ERROR: attempt to set readonly attribute(s)");
  VAR_38 = VAR_1;
  goto out;
 }




 VAR_49 = FUNC_18(VAR_35);
 VAR_39 = FUNC_12(VAR_49);
 if (FUNC_2(VAR_33, VAR_30) ||
     FUNC_2(VAR_33, VAR_26) ||
     FUNC_2(VAR_33, VAR_28) ||
     FUNC_2(VAR_33, VAR_31) ||
     FUNC_2(VAR_33, VAR_27)) {
  FUNC_5(&VAR_36, VAR_28);
  FUNC_5(&VAR_36, VAR_30);
  FUNC_5(&VAR_36, VAR_26);
  FUNC_5(&VAR_36, VAR_31);
  FUNC_5(&VAR_36, VAR_27);
  FUNC_0("ATTR - security information changing, fetching existing attributes");
 }





 if (FUNC_2(VAR_33, VAR_22) ||
     FUNC_2(VAR_33, VAR_21) ||
     FUNC_2(VAR_33, VAR_29) ||
     FUNC_2(VAR_33, VAR_17) ||
     FUNC_2(VAR_33, VAR_20) ||
     FUNC_2(VAR_33, VAR_19)) {

  FUNC_5(&VAR_36, VAR_30);



  FUNC_0("ATTR - timestamps changing, fetching uid and GUID");
 }




 if (FUNC_2(VAR_33, VAR_25)) {
  FUNC_0("ATTR - flags changing, fetching old flags");
  FUNC_5(&VAR_36, VAR_25);
 }




 if (FUNC_2(VAR_33, VAR_18)) {
  FUNC_0("ATTR - acl changing, fetching old flags");
  FUNC_5(&VAR_36, VAR_18);
 }




 if (FUNC_2(VAR_33, VAR_23)) {

  if (!FUNC_21(VAR_32)) {
   FUNC_0("ATTR - ERROR: size change requested on non-file");
   VAR_38 = FUNC_20(VAR_32) ? VAR_2 : VAR_1;
   goto out;
  }
 }




 FUNC_0("ATTR - fetching old attributes %016llx", VAR_36.va_active);
 if ((VAR_38 = FUNC_19(VAR_32, &VAR_36, VAR_35)) != 0) {
  FUNC_0("  ERROR - got %d trying to get attributes", VAR_38);
  goto out;
 }




 if (FUNC_2(VAR_33, VAR_23)) {

   FUNC_0("ATTR - size change, requiring WRITE_DATA");
   VAR_37 |= VAR_8;
 }
 if (FUNC_2(VAR_33, VAR_22) ||
     FUNC_2(VAR_33, VAR_21) ||
     FUNC_2(VAR_33, VAR_29) ||
     FUNC_2(VAR_33, VAR_17) ||
     FUNC_2(VAR_33, VAR_20) ||
     FUNC_2(VAR_33, VAR_19)) {





  if (VAR_39 || FUNC_16(&VAR_36, VAR_49)) {
   FUNC_0("ATTR - root or owner changing timestamps");
   VAR_37 |= VAR_4 | VAR_7;
  } else {

   if (VAR_33->va_vaflags & VAR_14) {
    FUNC_0("ATTR - non-root/owner changing timestamps, requiring WRITE_ATTRIBUTES");
    VAR_37 |= VAR_7;
   } else {
    FUNC_0("ATTR - ERROR: illegal timestamp modification attempted");
    VAR_38 = VAR_0;
    goto out;
   }
  }
 }




 if (FUNC_2(VAR_33, VAR_28) && FUNC_3(&VAR_36, VAR_28) && (VAR_36.va_mode != VAR_33->va_mode)) {
  FUNC_0("ATTR - mode change from %06o to %06o", VAR_36.va_mode, VAR_33->va_mode);




  if (VAR_39) {
   FUNC_0("ATTR - superuser mode change, requiring immutability check");
   VAR_37 |= VAR_4;
  } else {

   FUNC_0("ATTR - non-superuser mode change, requiring WRITE_SECURITY");
   VAR_37 |= VAR_9;
  }





  if (VAR_33->va_mode & VAR_11) {
   VAR_37 |= VAR_4;
   if (!VAR_39) {
    if (FUNC_2(VAR_33, VAR_26)) {
     VAR_46 = VAR_33->va_gid;
    } else if (FUNC_3(&VAR_36, VAR_26)) {
     VAR_46 = VAR_36.va_gid;
    } else {
     FUNC_0("ATTR - ERROR: setgid but no gid available");
     VAR_38 = VAR_1;
     goto out;
    }




    if ((VAR_38 = FUNC_10(VAR_49, VAR_46, &VAR_40)) != 0) {
     FUNC_0("ATTR - ERROR: got %d checking for membership in %d", VAR_38, VAR_33->va_gid);
     goto out;
    }
    if (!VAR_40) {
     FUNC_0("  DENIED - can't set SGID bit, not a member of %d", VAR_46);
     VAR_38 = VAR_3;
     goto out;
    }
   }
  }




  if (VAR_33->va_mode & VAR_12) {
   VAR_37 |= VAR_4;
   if (!VAR_39) {
    if (FUNC_2(VAR_33, VAR_30)) {
     VAR_47 = VAR_33->va_uid;
    } else if (FUNC_3(&VAR_36, VAR_30)) {
     VAR_47 = VAR_36.va_uid;
    } else {
     FUNC_0("ATTR - ERROR: setuid but no uid available");
     VAR_38 = VAR_1;
     goto out;
    }
    if (VAR_47 != FUNC_8(VAR_49)) {



     FUNC_0("ATTR - ERROR: illegal attempt to set the setuid bit");
     VAR_38 = VAR_3;
     goto out;
    }
   }
  }
 }
 if (FUNC_2(VAR_33, VAR_25)) {

  if (FUNC_3(&VAR_36, VAR_25)) {
   VAR_50 = VAR_33->va_flags ^ VAR_36.va_flags;
  } else {
   VAR_50 = VAR_33->va_flags;
  }

  if (VAR_50 != 0) {
   FUNC_0("ATTR - flags changing, requiring WRITE_SECURITY");
   VAR_37 |= VAR_9;


   if (VAR_39) {





    if (VAR_50 & ~(VAR_13 | VAR_10)) {
     VAR_38 = VAR_3;
     FUNC_0("  DENIED - superuser attempt to set illegal flag(s)");
     goto out;
    }
   } else {
    if (VAR_50 & ~VAR_13) {
     VAR_38 = VAR_3;
     FUNC_0("  DENIED - user attempt to set illegal flag(s)");
     goto out;
    }
   }
   VAR_37 |= VAR_5;
  }
 }




 VAR_41 = 0;
 VAR_42 = 0;
 VAR_43 = 0;
 VAR_44 = 0;







 if (FUNC_2(VAR_33, VAR_30)) {
  if (FUNC_3(&VAR_36, VAR_30) && (VAR_33->va_uid != VAR_36.va_uid)) {
  if (!VAR_39 && (FUNC_8(VAR_49) != VAR_33->va_uid)) {
   FUNC_0("  DENIED - non-superuser cannot change ownershipt to a third party");
   VAR_38 = VAR_3;
   goto out;
  }
  VAR_41 = 1;
 }
  VAR_43 = 1;
 }







 if (FUNC_2(VAR_33, VAR_26)) {
  if (FUNC_3(&VAR_36, VAR_26) && (VAR_33->va_gid != VAR_36.va_gid)) {
  if (!VAR_39) {
   if ((VAR_38 = FUNC_10(VAR_49, VAR_33->va_gid, &VAR_40)) != 0) {
    FUNC_0("  ERROR - got %d checking for membership in %d", VAR_38, VAR_33->va_gid);
    goto out;
   }
   if (!VAR_40) {
    FUNC_0("  DENIED - group change from %d to %d but not a member of target group",
        VAR_36.va_gid, VAR_33->va_gid);
    VAR_38 = VAR_3;
    goto out;
   }
  }
  VAR_42 = 1;
 }
  VAR_44 = 1;
 }




 if (FUNC_2(VAR_33, VAR_31)) {

  if (FUNC_3(&VAR_36, VAR_31)) {
   if (FUNC_14(&VAR_33->va_uuuid, &VAR_36.va_uuuid))
    goto no_uuuid_change;





   if (FUNC_14(&VAR_36.va_uuuid, &VAR_16) &&
       FUNC_3(&VAR_36, VAR_30)) {
    guid_t VAR_51;

    if (FUNC_13(VAR_36.va_uid, &VAR_51) == 0 &&
        FUNC_14(&VAR_33->va_uuuid, &VAR_51))
         goto no_uuuid_change;
   }
  }
  if (!VAR_39) {
   if ((VAR_38 = FUNC_7(VAR_49, &VAR_45)) != 0) {
    FUNC_0("  ERROR - got %d trying to get caller UUID", VAR_38);

    goto out;
   }
   if (!FUNC_14(&VAR_33->va_uuuid, &VAR_45) &&
       !FUNC_14(&VAR_33->va_uuuid, &VAR_16)) {
    FUNC_0("  ERROR - cannot set supplied owner UUID - not us / null");
    VAR_38 = VAR_3;
    goto out;
   }
  }
  VAR_41 = 1;
  VAR_43 = 1;
 }
no_uuuid_change:



 if (FUNC_2(VAR_33, VAR_27)) {

  if (FUNC_3(&VAR_36, VAR_27)) {
   if (FUNC_14(&VAR_33->va_guuid, &VAR_36.va_guuid))
    goto no_guuid_change;





   if (FUNC_14(&VAR_36.va_guuid, &VAR_16) &&
       FUNC_3(&VAR_36, VAR_26)) {
    guid_t VAR_52;

    if (FUNC_9(VAR_36.va_gid, &VAR_52) == 0 &&
        FUNC_14(&VAR_33->va_guuid, &VAR_52))
         goto no_guuid_change;
   }
  }
  if (!VAR_39) {
   if (FUNC_14(&VAR_33->va_guuid, &VAR_16))
    VAR_40 = 1;
   else if ((VAR_38 = FUNC_11(VAR_49, &VAR_33->va_guuid, &VAR_40)) != 0) {
    FUNC_0("  ERROR - got %d trying to check group membership", VAR_38);
    goto out;
   }
   if (!VAR_40) {
    FUNC_0("  ERROR - cannot set supplied group UUID - not a member / null");
    VAR_38 = VAR_3;
    goto out;
   }
  }
  VAR_42 = 1;
 }
no_guuid_change:




 if (VAR_41 || VAR_42 || VAR_43 || VAR_44) {
  if (VAR_39) {
   FUNC_0("ATTR - superuser changing file owner/group, requiring immutability check");
   VAR_37 |= VAR_4;
  } else {
   if (VAR_41) {
    FUNC_0("ATTR - ownership change, requiring TAKE_OWNERSHIP");
    VAR_37 |= VAR_6;
   }
   if (VAR_42 && !VAR_41) {
    FUNC_0("ATTR - group change, requiring WRITE_SECURITY");
    VAR_37 |= VAR_9;
   }

  }





  if (FUNC_2(VAR_33, VAR_28)) {
   VAR_48 = VAR_33->va_mode;
  } else if (FUNC_3(&VAR_36, VAR_28)) {
   VAR_48 = VAR_36.va_mode;
  } else {
   FUNC_0("CHOWN - trying to change owner but cannot get mode from filesystem to mask setugid bits");
   VAR_48 = 0;
  }






  if (VAR_48 & (VAR_12 | VAR_11)) {
   if (!FUNC_2(VAR_33, VAR_28) || !VAR_39) {
    FUNC_0("CHOWN - masking setugid bits from mode %o to %o",
     VAR_48, VAR_48 & ~(VAR_12 | VAR_11));
    VAR_48 &= ~(VAR_12 | VAR_11);
   }
   FUNC_4(VAR_33, VAR_28, VAR_48);
  }
 }




 if (FUNC_2(VAR_33, VAR_18)) {


  if (!FUNC_2(&VAR_36, VAR_18) || (VAR_36.va_acl == ((void*)0))) {


   if (VAR_33->va_acl != ((void*)0)) {
    VAR_37 |= VAR_9;
    FUNC_0("CHMOD - adding ACL");
   }


  } else if (VAR_33->va_acl == ((void*)0)) {
   VAR_37 |= VAR_9;
   FUNC_0("CHMOD - removing ACL");


  } else {
   if (VAR_33->va_acl->acl_entrycount != VAR_36.va_acl->acl_entrycount) {

    VAR_37 |= VAR_9;
    FUNC_0("CHMOD - adding/removing ACL entries");
   } else if (VAR_33->va_acl->acl_entrycount > 0) {

    if (FUNC_15(&VAR_33->va_acl->acl_ace[0], &VAR_36.va_acl->acl_ace[0],
     sizeof(struct kauth_ace) * VAR_33->va_acl->acl_entrycount)) {
     VAR_37 |= VAR_9;
     FUNC_0("CHMOD - changing ACL entries");
    }
   }
  }
 }




 if (FUNC_2(VAR_33, VAR_24))
  VAR_37 |= VAR_7;

out:
 if (FUNC_3(&VAR_36, VAR_18) && (VAR_36.va_acl != ((void*)0)))
  FUNC_6(VAR_36.va_acl);
 if (VAR_38 == 0)
  *VAR_34 = VAR_37;
 return(VAR_38);
}
