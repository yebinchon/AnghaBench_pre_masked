
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_rename_flags_t ;
typedef int vfs_context_t ;
struct vnode {scalar_t__ v_type; struct vnode* v_parent; } ;
struct componentname {int cn_namelen; char* cn_nameptr; int cn_flags; int cn_ndp; } ;
typedef int kauth_action_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct vnode* VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,uintptr_t,uintptr_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct vnode*,struct vnode*,struct componentname*,struct vnode*,struct vnode*,struct componentname*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct vnode*,struct vnode*,int,int ) ;
 scalar_t__ FUNC_6 (struct vnode*) ;
 scalar_t__ FUNC_7 (struct vnode*) ;

int
FUNC_8(struct vnode *VAR_11, struct vnode *VAR_12, struct componentname *VAR_13, const char *VAR_14,
      struct vnode *VAR_15, struct vnode *VAR_16, struct componentname *VAR_17, const char *VAR_18,
      vfs_context_t VAR_19, vfs_rename_flags_t VAR_20, void *VAR_21)
{
 int VAR_22 = 0;
 int VAR_23 = 0;
 bool VAR_24 = VAR_20 & VAR_10;

 if (VAR_21 != ((void*)0)) {
  FUNC_3("Passed something other than NULL as reserved field!");
 }







 if (VAR_12->v_type == VAR_9 &&
     ((VAR_11 == VAR_12) ||
      (VAR_13->cn_namelen == 1 && VAR_13->cn_nameptr[0] == '.') ||
      ((VAR_13->cn_flags | VAR_17->cn_flags) & VAR_3)) ) {
  VAR_22 = VAR_0;
  goto out;
 }

 if (VAR_16 == VAR_8 && FUNC_6(VAR_15)) {
  VAR_22 = FUNC_1(VAR_17->cn_ndp);
  if (VAR_22)
   goto out;
 }
 if (VAR_16 != ((void*)0)) {
  if (!VAR_24) {
   if (VAR_12->v_type == VAR_9 && VAR_16->v_type != VAR_9) {
    VAR_22 = VAR_2;
    goto out;
   } else if (VAR_12->v_type != VAR_9 && VAR_16->v_type == VAR_9) {
    VAR_22 = VAR_1;
    goto out;
   }
  }
 } else if (VAR_24) {






  VAR_22 = VAR_0;
  goto out;
 }

 if (VAR_12 == VAR_15) {
  VAR_22 = VAR_0;
  goto out;
 }
 if (VAR_15->v_parent == VAR_12) {
  VAR_22 = VAR_0;
  goto out;
 }

 if (VAR_24 && VAR_11->v_parent == VAR_16) {
  VAR_22 = VAR_0;
  goto out;
 }
 if (VAR_24) {
  kauth_action_t VAR_25 = 0, VAR_26 = 0;





  if (VAR_11 != VAR_15) {
   if (FUNC_7(VAR_12))
    VAR_25 = VAR_6;
   if (FUNC_7(VAR_16))
    VAR_26 = VAR_6;
  }
  if (VAR_18 != ((void*)0))
   FUNC_0(FUNC_4(VAR_19),
     VAR_4,
     (uintptr_t)VAR_12,
     (uintptr_t)VAR_18);
  VAR_22 = FUNC_5(VAR_12, VAR_11, VAR_7 | VAR_25, VAR_19);
  if (VAR_22)
   goto out;
  if (VAR_14 != ((void*)0))
   FUNC_0(FUNC_4(VAR_19),
     VAR_4,
     (uintptr_t)VAR_16,
     (uintptr_t)VAR_14);
  VAR_22 = FUNC_5(VAR_16, VAR_15, VAR_7 | VAR_26, VAR_19);
  if (VAR_22)
   goto out;
  VAR_25 = FUNC_7(VAR_12) ? VAR_6 : VAR_5;
  VAR_26 = FUNC_7(VAR_16) ? VAR_6 : VAR_5;
  if (VAR_11 == VAR_15)
   VAR_22 = FUNC_5(VAR_11, ((void*)0), VAR_25 | VAR_26, VAR_19);
  else {
   VAR_22 = FUNC_5(VAR_11, ((void*)0), VAR_26, VAR_19);
   if (VAR_22)
    goto out;
   VAR_22 = FUNC_5(VAR_15, ((void*)0), VAR_25, VAR_19);
  }
  if (VAR_22)
   goto out;
 } else {
  VAR_22 = 0;
  if ((VAR_16 != ((void*)0)) && FUNC_7(VAR_16)) {
   if (VAR_16 != VAR_11)
    VAR_23 = 1;
  } else if (VAR_15 != VAR_11) {
   VAR_23 = 1;
  }
  if (VAR_18 != ((void*)0))
   FUNC_0(FUNC_4(VAR_19),
     VAR_4,
     (uintptr_t)VAR_12,
     (uintptr_t)VAR_18);
  if (FUNC_7(VAR_12)) {
   if ((VAR_22 = FUNC_5(VAR_12, VAR_11, VAR_7 | VAR_6, VAR_19)) != 0)
    goto out;
  } else {
   if ((VAR_22 = FUNC_5(VAR_12, VAR_11, VAR_7, VAR_19)) != 0)
    goto out;
  }
  if (VAR_23) {

   if ((VAR_22 = FUNC_5(((VAR_16 != ((void*)0)) && FUNC_7(VAR_16)) ? VAR_16 : VAR_15,
       ((void*)0),
       FUNC_7(VAR_12) ? VAR_6 : VAR_5,
       VAR_19)) != 0) {
    goto out;
   }
  } else {

   if ((VAR_22 = FUNC_5(VAR_11, ((void*)0),
       FUNC_7(VAR_12) ? VAR_6 : VAR_5, VAR_19)) != 0)
    goto out;
  }

  if ((VAR_16 != ((void*)0)) && !FUNC_7(VAR_16) &&
    ((VAR_22 = FUNC_5(VAR_16, VAR_15, VAR_7, VAR_19)) != 0)) {
   goto out;
  }
 }




out:
 return VAR_22;
}
