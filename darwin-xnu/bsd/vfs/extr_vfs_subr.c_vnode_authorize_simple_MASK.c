
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_3__* vauth_ctx ;
struct vnode_attr {TYPE_2__* va_acl; } ;
struct kauth_acl_eval {int ae_requested; int ae_result; int ae_residual; int ae_found_deny; int ae_exp_gexec; int ae_exp_gwrite; int ae_exp_gread; int ae_exp_gall; int ae_options; int ae_count; int * ae_acl; } ;
typedef int mode_t ;
typedef int kauth_cred_t ;
typedef int kauth_ace_rights_t ;
typedef int boolean_t ;
struct TYPE_10__ {int vp; TYPE_1__* ctx; struct vnode_attr* vap; } ;
struct TYPE_9__ {int acl_entrycount; int * acl_ace; } ;
struct TYPE_8__ {int vc_ucred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,...) ;



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
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_1 (struct vnode_attr*,int ,int *) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_2 (int ,struct kauth_acl_eval*) ;
 int FUNC_3 (char*) ;
 int VAR_31 ;
 int FUNC_4 (TYPE_3__*,int*,int) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(vauth_ctx VAR_32, kauth_ace_rights_t VAR_33, kauth_ace_rights_t VAR_34, boolean_t *VAR_35)
{
 struct vnode_attr *VAR_36 = VAR_32->vap;
 kauth_cred_t VAR_37 = VAR_32->ctx->vc_ucred;
 struct kauth_acl_eval VAR_38;
 int VAR_39, VAR_40;
 mode_t VAR_41;






 if (FUNC_5(VAR_32))
  VAR_33 &= ~(VAR_27);
 if ((VAR_33 & VAR_23) &&
     (VAR_33 & VAR_27))
  VAR_33 &= ~VAR_27;

 if (VAR_33 == 0) {
  FUNC_0("%p    ALLOWED - implicit or no rights required", VAR_32->vp);
  return(0);
 }


 if (FUNC_1(VAR_36, VAR_31, ((void*)0))) {
  VAR_38.ae_requested = VAR_33;
  VAR_38.ae_acl = &VAR_36->va_acl->acl_ace[0];
  VAR_38.ae_count = VAR_36->va_acl->acl_entrycount;
  VAR_38.ae_options = 0;
  if (FUNC_5(VAR_32))
   VAR_38.ae_options |= VAR_4;






  if ((VAR_39 = FUNC_4(VAR_32, &VAR_40, VAR_1)) != 0 && VAR_39 != VAR_1)
   return(VAR_39);
  if (VAR_39 == VAR_1)
   VAR_38.ae_options |= VAR_3;
  else if (VAR_40)
   VAR_38.ae_options |= VAR_2;
  VAR_38.ae_exp_gall = VAR_13;
  VAR_38.ae_exp_gread = VAR_15;
  VAR_38.ae_exp_gwrite = VAR_16;
  VAR_38.ae_exp_gexec = VAR_14;

  if ((VAR_39 = FUNC_2(VAR_37, &VAR_38)) != 0) {
   FUNC_0("%p    ERROR during ACL processing - %d", VAR_32->vp, VAR_39);
   return(VAR_39);
  }

  switch(VAR_38.ae_result) {
  case 128:
   FUNC_0("%p    DENIED - by ACL", VAR_32->vp);
   return(VAR_0);
  case 130:
   FUNC_0("%p    ALLOWED - all rights granted by ACL", VAR_32->vp);
   return(0);
  case 129:
  default:

   FUNC_0("%p    DEFERRED - directory ACL", VAR_32->vp);
   break;
  }

  *VAR_35 = VAR_38.ae_found_deny;


 } else {

  VAR_38.ae_residual = VAR_33;
 }




 VAR_38.ae_residual &= ~VAR_34;




 if (FUNC_5(VAR_32))
  VAR_38.ae_residual &= ~VAR_24;

 if (VAR_38.ae_residual == 0) {
  FUNC_0("%p    ALLOWED - rights already authorized", VAR_32->vp);
  return(0);
 }







 if (VAR_38.ae_residual & VAR_8) {
  FUNC_0("%p    DENIED - CHANGE_OWNER not permitted", VAR_32->vp);
  return(VAR_0);
 }
 if (VAR_38.ae_residual & VAR_27) {
  FUNC_0("%p    DENIED - WRITE_SECURITY not permitted", VAR_32->vp);
  return(VAR_0);
 }
 VAR_41 = 0;
 if (VAR_38.ae_residual & (VAR_19 |
  VAR_17 |
  VAR_20))
  VAR_41 |= VAR_29;
 if (VAR_38.ae_residual & (VAR_25 |
  VAR_5 |
  VAR_6 |
  VAR_11 |
  VAR_24 |
  VAR_26))
  VAR_41 |= VAR_30;
 if (VAR_38.ae_residual & (VAR_12 |
  VAR_22))
  VAR_41 |= VAR_28;

 if (VAR_41 != 0) {
  return(FUNC_6(VAR_32, VAR_41, 0 ));
 } else {
  FUNC_0("%p    ALLOWED - residual rights %s%s%s%s%s%s%s%s%s%s%s%s%s%s granted due to no posix mapping",
      VAR_32->vp,
      (VAR_38.ae_residual & VAR_19)
      ? FUNC_7(VAR_32->vp) ? " LIST_DIRECTORY" : " READ_DATA" : "",
      (VAR_38.ae_residual & VAR_25)
      ? FUNC_7(VAR_32->vp) ? " ADD_FILE" : " WRITE_DATA" : "",
      (VAR_38.ae_residual & VAR_12)
      ? FUNC_7(VAR_32->vp) ? " SEARCH" : " EXECUTE" : "",
      (VAR_38.ae_residual & VAR_10)
      ? " DELETE" : "",
      (VAR_38.ae_residual & VAR_7)
      ? FUNC_7(VAR_32->vp) ? " ADD_SUBDIRECTORY" : " APPEND_DATA" : "",
      (VAR_38.ae_residual & VAR_11)
      ? " DELETE_CHILD" : "",
      (VAR_38.ae_residual & VAR_18)
      ? " READ_ATTRIBUTES" : "",
      (VAR_38.ae_residual & VAR_24)
      ? " WRITE_ATTRIBUTES" : "",
      (VAR_38.ae_residual & VAR_20)
      ? " READ_EXTATTRIBUTES" : "",
      (VAR_38.ae_residual & VAR_26)
      ? " WRITE_EXTATTRIBUTES" : "",
      (VAR_38.ae_residual & VAR_21)
      ? " READ_SECURITY" : "",
      (VAR_38.ae_residual & VAR_27)
      ? " WRITE_SECURITY" : "",
      (VAR_38.ae_residual & VAR_9)
      ? " CHECKIMMUTABLE" : "",
      (VAR_38.ae_residual & VAR_8)
      ? " CHANGE_OWNER" : "");
 }




 return(0);
}
