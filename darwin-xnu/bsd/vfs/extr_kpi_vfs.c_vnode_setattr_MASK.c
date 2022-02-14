
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef scalar_t__ vfs_context_t ;
typedef int uint64_t ;
struct vnode_attr {int va_active; int va_flags; int va_supported; } ;
struct TYPE_11__ {int mnt_flag; } ;
struct TYPE_10__ {int v_flag; int v_type; TYPE_6__* v_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct vnode_attr*) ;
 int FUNC_2 (struct vnode_attr*,int ) ;
 scalar_t__ FUNC_3 (struct vnode_attr*,int ) ;

 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (TYPE_1__*,struct vnode_attr*,scalar_t__) ;

 int FUNC_6 (int ,scalar_t__,int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (TYPE_6__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,struct vnode_attr*,scalar_t__) ;

int
FUNC_14(vnode_t VAR_26, struct vnode_attr *VAR_27, vfs_context_t VAR_28)
{
 int VAR_29;
 if (VAR_27->va_active & ~VAR_14)
  return (VAR_0);





 if (FUNC_10(VAR_26->v_mount)) {
  VAR_29 = VAR_4;
  goto out;
 }
 if (FUNC_11(VAR_26) && (VAR_28 != FUNC_8())) {
  VAR_29 = VAR_3;
  goto out;
 }
 if(FUNC_3(VAR_27, VAR_20)) {
  switch(VAR_26->v_type) {
  case 128:

   break;
  case 129:

   VAR_29 = VAR_1;
   goto out;
  default:

   FUNC_2(VAR_27, VAR_20);
   if (VAR_27->va_active)
    break;

   return (0);
  }
 }





 if (VAR_26->v_mount->mnt_flag & VAR_9) {
  FUNC_2(VAR_27, VAR_24);
  FUNC_2(VAR_27, VAR_22);
 }





 if (!FUNC_9(FUNC_12(VAR_26)) &&
     (FUNC_3(VAR_27, VAR_18) || FUNC_3(VAR_27, VAR_25) || FUNC_3(VAR_27, VAR_23))) {
  FUNC_0("SETATTR - returning ENOTSUP to request to set extended security");
  VAR_29 = VAR_2;
  goto out;
 }


 if (FUNC_3(VAR_27, VAR_21)) {
     VAR_27->va_flags &= (VAR_11 | VAR_12);
 }
 VAR_29 = FUNC_5(VAR_26, VAR_27, VAR_28);

 if ((VAR_29 == 0) && !FUNC_1(VAR_27))
  VAR_29 = FUNC_13(VAR_26, VAR_27, VAR_28);
out:
 return(VAR_29);
}
