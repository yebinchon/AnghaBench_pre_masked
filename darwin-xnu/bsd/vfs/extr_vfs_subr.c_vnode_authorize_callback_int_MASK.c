
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_20__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_18__ ;


typedef TYPE_1__* vnode_t ;
typedef TYPE_2__* vfs_context_t ;
typedef struct _vnode_authorize_context* vauth_ctx ;
struct vnode_attr {int va_mode; int * va_acl; } ;
struct _vnode_authorize_context {TYPE_1__* dvp; TYPE_1__* vp; struct vnode_attr* dvap; scalar_t__ flags_valid; scalar_t__ flags; struct vnode_attr* vap; TYPE_2__* ctx; } ;
typedef int * kauth_cred_t ;
typedef int kauth_action_t ;
typedef int kauth_ace_rights_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_28__ {int * vc_ucred; } ;
struct TYPE_27__ {int p_comm; } ;
struct TYPE_26__ {char* v_name; scalar_t__ v_type; TYPE_18__* v_mount; struct TYPE_26__* v_parent; } ;
struct TYPE_25__ {int mnt_flag; int mnt_kern_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,TYPE_1__*,...) ;
 int VAR_3 ;
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
 TYPE_1__* VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_1 (struct vnode_attr*) ;
 scalar_t__ FUNC_2 (struct vnode_attr*,int ) ;
 int FUNC_3 (struct vnode_attr*,int ,int ) ;
 int FUNC_4 (struct vnode_attr*,int ) ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,...) ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 TYPE_20__* FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ,int) ;
 int FUNC_10 (struct _vnode_authorize_context*,TYPE_18__*,int,scalar_t__,scalar_t__*,int,scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int*,int,TYPE_2__*) ;
 int FUNC_12 (TYPE_1__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_13 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_14 (TYPE_1__*,struct vnode_attr*,TYPE_2__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_19(kauth_action_t VAR_43, vfs_context_t VAR_44,
    vnode_t VAR_45, vnode_t VAR_46, int *VAR_47)
{
 struct _vnode_authorize_context VAR_48;
 vauth_ctx VAR_49;
 kauth_cred_t VAR_50;
 kauth_ace_rights_t VAR_51;
 struct vnode_attr VAR_52, VAR_53;
 int VAR_54;
 int VAR_55;
 boolean_t VAR_56 = VAR_2;
 boolean_t VAR_57 = VAR_2;
 boolean_t VAR_58= VAR_2;
 boolean_t VAR_59 = VAR_2;

 VAR_49 = &VAR_48;
 VAR_49->ctx = VAR_44;
 VAR_49->vp = VAR_45;
 VAR_49->dvp = VAR_46;




 VAR_50 = VAR_44->vc_ucred;

 FUNC_1(&VAR_52);
 VAR_49->vap = &VAR_52;
 FUNC_1(&VAR_53);
 VAR_49->dvap = &VAR_53;

 VAR_49->flags = VAR_49->flags_valid = 0;






 FUNC_0("%p  AUTH - %s %s%s%s%s%s%s%s%s%s%s%s%s%s%s%s on %s '%s' (0x%x:%p/%p)",
     VAR_45, FUNC_8(VAR_44)->p_comm,
     (VAR_43 & VAR_5) ? "access" : "auth",
     (VAR_43 & VAR_13) ? FUNC_15(VAR_45) ? " LIST_DIRECTORY" : " READ_DATA" : "",
     (VAR_43 & VAR_19) ? FUNC_15(VAR_45) ? " ADD_FILE" : " WRITE_DATA" : "",
     (VAR_43 & VAR_10) ? FUNC_15(VAR_45) ? " SEARCH" : " EXECUTE" : "",
     (VAR_43 & VAR_8) ? " DELETE" : "",
     (VAR_43 & VAR_6) ? FUNC_15(VAR_45) ? " ADD_SUBDIRECTORY" : " APPEND_DATA" : "",
     (VAR_43 & VAR_9) ? " DELETE_CHILD" : "",
     (VAR_43 & VAR_12) ? " READ_ATTRIBUTES" : "",
     (VAR_43 & VAR_18) ? " WRITE_ATTRIBUTES" : "",
     (VAR_43 & VAR_14) ? " READ_EXTATTRIBUTES" : "",
     (VAR_43 & VAR_20) ? " WRITE_EXTATTRIBUTES" : "",
     (VAR_43 & VAR_15) ? " READ_SECURITY" : "",
     (VAR_43 & VAR_22) ? " WRITE_SECURITY" : "",
     (VAR_43 & VAR_7) ? " CHANGE_OWNER" : "",
     (VAR_43 & VAR_11) ? " (noimmutable)" : "",
     FUNC_15(VAR_45) ? "directory" : "file",
     VAR_45->v_name ? VAR_45->v_name : "<NULL>", VAR_43, VAR_45, VAR_46);





 VAR_55 = (VAR_43 & VAR_11) ? 1 : 0;
 VAR_51 = VAR_43 & ~(VAR_5 | VAR_11);

 if (VAR_51 & VAR_8) {
  if (FUNC_13(VAR_46, VAR_44, VAR_9) == VAR_30)
          VAR_56 = VAR_30;
 } else {
  VAR_49->dvp = VAR_26;
  VAR_49->dvap = ((void*)0);
 }




 if ((VAR_51 & VAR_21) &&
     (VAR_45->v_mount->mnt_flag & VAR_25) &&
     ((VAR_45->v_type == VAR_36) || (VAR_45->v_type == VAR_32) ||
      (VAR_45->v_type == VAR_33) || (VAR_45->v_type == VAR_31) ||
      (VAR_51 & VAR_8) || (VAR_51 & VAR_9))) {
  VAR_54 = VAR_1;
  goto out;
 }




 if ((VAR_51 & VAR_10) && (VAR_45->v_type == VAR_36) && (VAR_45->v_mount->mnt_flag & VAR_24)) {
  VAR_54 = VAR_0;
  goto out;
 }







 if ((VAR_45->v_mount->mnt_kern_flag & VAR_23) && FUNC_11(VAR_45, &VAR_54, VAR_43, VAR_44))
  goto out;





 if (FUNC_16(VAR_45)) {
  if (VAR_51 & VAR_13) {
   VAR_51 &= ~VAR_13;
   VAR_51 |= VAR_14;
  }
  if (VAR_51 & VAR_19) {
   VAR_51 &= ~VAR_19;
   VAR_51 |= VAR_20;
  }




  if ((VAR_45->v_parent != ((void*)0)) &&
      (FUNC_9(VAR_45->v_parent, 0, VAR_35 | VAR_34) == 0)) {
   VAR_58 = VAR_30;
   VAR_49->vp = VAR_45 = VAR_45->v_parent;
  }
 }

 if (FUNC_7(VAR_44)) {




  if (!(VAR_51 & (VAR_10 | VAR_21)))
   goto success;

  VAR_59 = VAR_30;
 }
 FUNC_4(&VAR_52, VAR_40);
 FUNC_4(&VAR_52, VAR_38);
 if (!VAR_59) {
  FUNC_4(&VAR_52, VAR_42);
  FUNC_4(&VAR_52, VAR_39);
  FUNC_4(&VAR_52, VAR_37);
 }
 if ((VAR_54 = FUNC_14(VAR_45, &VAR_52, VAR_44)) != 0) {
  FUNC_0("%p    ERROR - failed to get vnode attributes - %d", VAR_45, VAR_54);
  goto out;
 }
 FUNC_4(&VAR_52, VAR_41);
 FUNC_3(&VAR_52, VAR_41, FUNC_18(VAR_45));

 if (VAR_49->dvp) {
  FUNC_4(&VAR_53, VAR_40);
  FUNC_4(&VAR_53, VAR_38);
  if (!VAR_59) {
   FUNC_4(&VAR_53, VAR_42);
   FUNC_4(&VAR_53, VAR_39);
   FUNC_4(&VAR_53, VAR_37);
  }
  if ((VAR_54 = FUNC_14(VAR_49->dvp, &VAR_53, VAR_44)) != 0) {
   FUNC_0("%p    ERROR - failed to get directory vnode attributes - %d", VAR_45, VAR_54);
   goto out;
  }
  FUNC_4(&VAR_53, VAR_41);
  FUNC_3(&VAR_53, VAR_41, FUNC_18(VAR_49->dvp));
 }

 VAR_54 = FUNC_10(VAR_49, VAR_45->v_mount, VAR_51, VAR_59,
     &VAR_57, VAR_55, VAR_56);
out:
 if (FUNC_2(&VAR_52, VAR_37) && (VAR_52.va_acl != ((void*)0)))
  FUNC_5(VAR_52.va_acl);
 if (FUNC_2(&VAR_53, VAR_37) && (VAR_53.va_acl != ((void*)0)))
  FUNC_5(VAR_53.va_acl);

 if (VAR_54) {
  if (VAR_58)
   FUNC_17(VAR_45);
  *VAR_47 = VAR_54;
  FUNC_0("%p    DENIED - auth denied", VAR_45);
  return(VAR_4);
 }
 if ((VAR_51 & VAR_16) && VAR_57 == VAR_2 && VAR_45->v_type == VAR_32) {
         if (!FUNC_2(&VAR_52, VAR_40) ||
      ((VAR_52.va_mode & (VAR_29 | VAR_27 | VAR_28)) ==
       (VAR_29 | VAR_27 | VAR_28))) {
          FUNC_12(VAR_45, VAR_44, VAR_17);
  }
 }
success:
 if (VAR_58)
  FUNC_17(VAR_45);





 FUNC_0("%p    ALLOWED - auth granted", VAR_45);
 return(VAR_3);
}
