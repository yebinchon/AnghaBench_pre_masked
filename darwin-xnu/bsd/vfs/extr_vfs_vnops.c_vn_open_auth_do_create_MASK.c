
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
typedef int uint32_t ;
struct vnode_attr {int va_vaflags; } ;
struct TYPE_14__ {int cn_flags; int cn_hash; int cn_namelen; int cn_nameptr; } ;
struct nameidata {int ni_flag; scalar_t__ ni_dvp; TYPE_11__ ni_cnd; TYPE_1__* ni_vp; } ;
typedef int boolean_t ;
struct TYPE_15__ {scalar_t__ v_parent; int * v_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct vnode_attr*,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ,int ,int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int VAR_17 ;
 int FUNC_4 (TYPE_1__*,TYPE_11__*,struct vnode_attr*,int ,int *) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__**,struct nameidata*,struct vnode_attr*,int ,int,int*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__**,int ,int ,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_10(struct nameidata *VAR_18, struct vnode_attr *VAR_19, int VAR_20, boolean_t *VAR_21, boolean_t *VAR_22, vfs_context_t VAR_23)
{
 uint32_t VAR_24 = 0;
 vnode_t VAR_25 = VAR_18->ni_dvp;
 int VAR_26;
 int VAR_27;
 vnode_t VAR_28;

 VAR_26 = FUNC_6(VAR_18->ni_dvp);
 *VAR_22 = VAR_3;

 FUNC_0(VAR_19, VAR_17, VAR_15);
 if (VAR_20 & VAR_9)
  VAR_19->va_vaflags |= VAR_11;
  if (!VAR_26) {
   if ((VAR_27 = FUNC_4(VAR_25, &VAR_18->ni_cnd, VAR_19, VAR_23, ((void*)0))) != 0)
    goto out;
  }

  VAR_27 = FUNC_5(VAR_25, &VAR_18->ni_vp, VAR_18, VAR_19, VAR_14, VAR_20, &VAR_24, VAR_23);
  if (VAR_27 != 0) {
   if (VAR_26) {
    *VAR_21 = (VAR_24 & VAR_1) ? VAR_10 : VAR_3;
   } else {
    *VAR_21 = VAR_3;
   }

   if (VAR_27 == VAR_2) {
    if (*VAR_21) {
     FUNC_3("EKEEPLOOKING, but we did a create?");
    }
    if (!VAR_26) {
     FUNC_3("EKEEPLOOKING from filesystem that doesn't support compound vnops?");
    }
    if ((VAR_18->ni_flag & VAR_7) == 0) {
     FUNC_3("EKEEPLOOKING, but continue flag not set?");
    }




    return VAR_27;
   }
  } else {
   if (VAR_26) {
    *VAR_21 = (VAR_24 & VAR_1) ? 1 : 0;
    *VAR_22 = VAR_10;
   } else {
    *VAR_21 = VAR_10;
   }
  }




 VAR_28 = VAR_18->ni_vp;

 if (*VAR_21) {
  int VAR_29 = 0;


  if (VAR_28->v_name == ((void*)0))
   VAR_29 |= VAR_12;
  if (VAR_28->v_parent == VAR_8)
   VAR_29 |= VAR_13;

  if (VAR_29)
   FUNC_9(VAR_28, VAR_25, VAR_18->ni_cnd.cn_nameptr, VAR_18->ni_cnd.cn_namelen, VAR_18->ni_cnd.cn_hash, VAR_29);

  FUNC_8(VAR_25);
  VAR_18->ni_dvp = VAR_8;
 }
out:
 if (VAR_18->ni_dvp != VAR_8) {
  FUNC_8(VAR_25);
  VAR_18->ni_dvp = VAR_8;
 }

 return VAR_27;
}
