
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vnode_t ;
typedef int vfs_context_t ;
typedef int uint32_t ;
struct vnode_attr {int va_type; int va_acl; int va_vaflags; } ;
struct componentname {int cn_nameptr; } ;
struct nameidata {struct componentname ni_cnd; } ;
typedef scalar_t__ errno_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct vnode_attr*) ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int FUNC_2 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__*,struct componentname*,struct vnode_attr*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 scalar_t__ VAR_10 ;
 int FUNC_4 (scalar_t__,struct componentname*) ;
 scalar_t__ FUNC_5 (scalar_t__,struct nameidata*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct vnode_attr*,int) ;
 scalar_t__ FUNC_8 (scalar_t__,struct vnode_attr*,int*,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__*,struct nameidata*,struct vnode_attr*,int,int,int*,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__*,struct nameidata*,struct vnode_attr*,int ) ;
 scalar_t__ FUNC_11 (int ,scalar_t__,scalar_t__,struct componentname*,int ,int ) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,struct vnode_attr*,int ) ;

errno_t
FUNC_15(vnode_t VAR_11, vnode_t *VAR_12, struct nameidata *VAR_13, struct vnode_attr *VAR_14, uint32_t VAR_15, int VAR_16, uint32_t *VAR_17, vfs_context_t VAR_18)
{
 errno_t VAR_19, VAR_20;
 vnode_t VAR_21 = (vnode_t)0;
 boolean_t VAR_22;
 struct componentname *VAR_23;
 uint32_t VAR_24;

 VAR_23 = &VAR_13->ni_cnd;
 VAR_19 = 0;
 VAR_22 = FUNC_5(VAR_11, VAR_13) ? VAR_2 : VAR_0;

 FUNC_0("%p    CREATE - '%s'", VAR_11, VAR_23->cn_nameptr);

 if (VAR_15 & VAR_8)
  VAR_14->va_vaflags |= VAR_4;
 if (VAR_15 & VAR_7)
  VAR_14->va_vaflags |= VAR_3;



 VAR_19 = FUNC_8(VAR_11, VAR_14, &VAR_24, VAR_18);
 if (VAR_19) {
  return VAR_19;
 }

 if (VAR_14->va_type != 129 && (VAR_16 != 0 || (VAR_15 & VAR_6) || VAR_17)) {
  FUNC_6("Open parameters, but not a regular file.");
 }
 if ((VAR_16 != 0) && ((VAR_15 & VAR_6) == 0)) {
  FUNC_6("Mode for open, but not trying to open...");
 }





 switch(VAR_14->va_type) {
 case 129:
  VAR_19 = FUNC_9(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18);
  break;
 case 131:
  VAR_19 = FUNC_10(VAR_11, VAR_12, VAR_13, VAR_14, VAR_18);
  break;
 case 128:
 case 130:
 case 133:
 case 132:
  VAR_19 = FUNC_3(VAR_11, VAR_12, VAR_23, VAR_14, VAR_18);
  break;
 default:
  FUNC_6("vnode_create: unknown vtype %d", VAR_14->va_type);
 }
 if (VAR_19 != 0) {
  FUNC_0("%p    CREATE - error %d returned by filesystem", VAR_11, VAR_19);
  goto out;
 }

 VAR_21 = *VAR_12;
 VAR_20 = VAR_19;
 if (!FUNC_1(VAR_14) && *VAR_12) {
  FUNC_0("     CREATE - doing fallback with ACL %p", VAR_14->va_acl);
  VAR_19 = FUNC_14(*VAR_12, VAR_14, VAR_18);
 }



 if ((VAR_19 != 0) && (VAR_21 != (vnode_t)0)) {


  if (VAR_22 && (VAR_20 == 0) && (VAR_14->va_type == 129)) {
   FUNC_2(VAR_21, VAR_16, VAR_18);
  }


  if (!VAR_22) {
   *VAR_12 = (vnode_t) 0;
   FUNC_13(VAR_21);
   VAR_21 = VAR_1;
  }
 }





 if (VAR_10 && *VAR_12)
  FUNC_4(*VAR_12, VAR_23);

out:
 FUNC_7(VAR_14, VAR_24);

 return(VAR_19);
}
