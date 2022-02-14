
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef struct _vnode_authorize_context* vauth_ctx ;
struct vnode_attr {scalar_t__ va_type; } ;
struct _vnode_authorize_context {scalar_t__ flags_valid; scalar_t__ flags; struct vnode_attr* dvap; void* dvp; struct vnode_attr* vap; void* vp; int ctx; } ;
typedef TYPE_1__* mount_t ;
typedef int kauth_action_t ;
typedef int kauth_ace_rights_t ;
typedef int boolean_t ;
struct TYPE_5__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct vnode_attr*,int ) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct _vnode_authorize_context*,TYPE_1__*,int,int ,int *,int,int ) ;

int
FUNC_5(struct vnode_attr *VAR_20, struct vnode_attr *VAR_21, mount_t VAR_22,
    kauth_action_t VAR_23, vfs_context_t VAR_24)
{
 struct _vnode_authorize_context VAR_25;
 vauth_ctx VAR_26;
 kauth_ace_rights_t VAR_27;
 int VAR_28;
 boolean_t VAR_29;
 boolean_t VAR_30 = VAR_3;
 int VAR_31 = 0;

 VAR_26 = &VAR_25;
 VAR_26->ctx = VAR_24;
 VAR_26->vp = VAR_12;
 VAR_26->vap = VAR_20;
 VAR_26->dvp = VAR_12;
 VAR_26->dvap = VAR_21;
 VAR_26->flags = VAR_26->flags_valid = 0;

 VAR_28 = (VAR_23 & VAR_8) ? 1 : 0;
 VAR_27 = VAR_23 & ~(VAR_4 | VAR_8);




 if ((VAR_27 & VAR_9) &&
     VAR_22 && (VAR_22->mnt_flag & VAR_11) &&
     ((VAR_20->va_type == VAR_16) || (VAR_20->va_type == VAR_14) ||
     (VAR_20->va_type == VAR_15) || (VAR_27 & VAR_5) ||
     (VAR_27 & VAR_6))) {
  VAR_31 = VAR_2;
  goto out;
 }




 if ((VAR_27 & VAR_7) &&
     (VAR_20->va_type == VAR_16) && VAR_22 && (VAR_22->mnt_flag & VAR_10)) {
  VAR_31 = VAR_0;
  goto out;
 }

 if (FUNC_2(VAR_24)) {




  if (!(VAR_27 & (VAR_7 | VAR_9)))
   goto out;
  VAR_30 = VAR_13;
 } else {
  if (!FUNC_0(VAR_20, VAR_19) ||
      !FUNC_0(VAR_20, VAR_18) ||
      (VAR_22 && FUNC_3(VAR_22) && !FUNC_0(VAR_20, VAR_17))) {
   FUNC_1("vnode attrs not complete for vnode_attr_authorize\n");
  }
 }

 VAR_31 = FUNC_4(VAR_26, VAR_22, VAR_27, VAR_30,
     &VAR_29, VAR_28, VAR_3);

 if (VAR_31 == VAR_1)
  VAR_31 = VAR_0;
out:
 return (VAR_31);
}
