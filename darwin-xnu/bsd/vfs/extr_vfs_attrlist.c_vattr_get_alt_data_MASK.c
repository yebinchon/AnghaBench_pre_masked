
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vnode_t ;
typedef int vfs_context_t ;
struct vnode_attr {int va_fileid; int va_parentid; } ;
struct attrlist {int commonattr; int fileattr; int dirattr; } ;


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
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct vnode_attr*,int ) ;
 int FUNC_1 (struct vnode_attr*) ;
 scalar_t__ FUNC_2 (struct vnode_attr*,int ) ;
 int FUNC_3 (struct vnode_attr*,int ,int) ;
 int FUNC_4 (struct vnode_attr*,int ) ;
 int FUNC_5 (struct vnode_attr*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_6 (scalar_t__,struct vnode_attr*,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void
FUNC_9(vnode_t VAR_19, struct attrlist *VAR_20, struct vnode_attr *VAR_21,
    int VAR_22, int VAR_23, vfs_context_t VAR_24)
{




 if ((VAR_20->commonattr &
     (VAR_2 | VAR_3 | VAR_0)) &&
     !FUNC_2(VAR_21, VAR_16)) {

  FUNC_0(VAR_21, VAR_16);
 }





 if ((VAR_20->commonattr & (VAR_5 | VAR_4)) &&
     !FUNC_2(VAR_21, VAR_18) && VAR_19 && !VAR_23) {
  vnode_t VAR_25;

  if ((VAR_25 = FUNC_7(VAR_19)) != VAR_10) {
   struct vnode_attr VAR_26;

   FUNC_1(&VAR_26);
   FUNC_5(&VAR_26, VAR_15);
   if (FUNC_6(VAR_25, &VAR_26, VAR_24) == 0 &&
       FUNC_2(VAR_21, VAR_15)) {
    VAR_21->va_parentid = VAR_26.va_fileid;
    FUNC_4(VAR_21, VAR_18);
   }
   FUNC_8(VAR_25);
  }
 }



 if ((VAR_20->fileattr & VAR_9) &&
     !FUNC_2(VAR_21, VAR_12)) {
  FUNC_0(VAR_21, VAR_12);
 }

 if ((VAR_20->fileattr & VAR_8) &&
     !FUNC_2(VAR_21, VAR_11)) {
  FUNC_0(VAR_21, VAR_11);
 }




 if ((VAR_20->commonattr & VAR_6) &&
     !FUNC_2(VAR_21, VAR_14) && !VAR_22) {
  FUNC_3(VAR_21, VAR_14,
      0x7e );
 }





 if ((VAR_20->commonattr & VAR_1) &&
     !FUNC_2(VAR_21, VAR_17)) {
  FUNC_0(VAR_21, VAR_17);
 }


 if ((VAR_20->dirattr & VAR_7) &&
     !FUNC_2(VAR_21, VAR_13)) {
  FUNC_3(VAR_21, VAR_13, 1);
 }
}
