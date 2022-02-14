
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
typedef int user_addr_t ;
struct vnode_attr {int dummy; } ;
struct componentname {int cn_flags; int cn_nameptr; } ;
struct nameidata {int ni_flag; TYPE_1__* ni_vp; struct componentname ni_cnd; TYPE_1__* ni_dvp; } ;
struct TYPE_26__ {int mode; } ;
typedef TYPE_2__ fse_info ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
struct TYPE_25__ {int v_flag; scalar_t__ v_parent; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (struct nameidata*,int ,int ,int,int,int ,int ) ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_2 (char*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_3 (int ,int ,int ,int,char*,int ,TYPE_2__*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_6 (int ,int ,uintptr_t,uintptr_t) ;
 int FUNC_7 () ;
 int FUNC_8 (struct nameidata*,int) ;
 int FUNC_9 (struct nameidata*) ;
 int FUNC_10 (int ,TYPE_1__*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_1__*,int ,char*,int ,int*) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct vnode_attr*) ;
 int FUNC_16 (TYPE_1__*,TYPE_1__*,struct componentname*,int ,int *) ;
 int FUNC_17 (TYPE_1__*,TYPE_1__**,struct nameidata*,int,struct vnode_attr*,int ) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*,TYPE_2__*,struct vnode_attr*) ;
 scalar_t__ FUNC_20 (TYPE_1__*) ;
 scalar_t__ FUNC_21 (TYPE_1__*) ;
 scalar_t__ FUNC_22 (TYPE_1__*) ;
 scalar_t__ FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (TYPE_1__*) ;
 int FUNC_25 (TYPE_1__*) ;
 int FUNC_26 (TYPE_1__*,TYPE_1__*,int ,int ,int ) ;
 int FUNC_27 (TYPE_1__*,int *,int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_28(vfs_context_t VAR_31, int VAR_32, vnode_t VAR_33,
    user_addr_t VAR_34, enum uio_seg VAR_35, int VAR_36)
{
 struct nameidata VAR_37;
 vnode_t VAR_38, VAR_39;
 int VAR_40;
 struct componentname *VAR_41;
 char *VAR_42 = ((void*)0);
 int VAR_43=0;




 int VAR_44;
 int VAR_45;
 int VAR_46;
 int VAR_47;
 int VAR_48;
 struct vnode_attr *VAR_49;
 int VAR_50;
 int VAR_51 = 0;
 int VAR_52;

 VAR_52 = VAR_16;
 if (!(VAR_36 & VAR_26))
  VAR_52 |= VAR_0;

 if (VAR_33)
  VAR_52 |= VAR_23;






retry:
 VAR_50 = 0;
 VAR_44 = 0;
 VAR_45 = 0;
 VAR_46 = 0;
 VAR_47 = 0;
 VAR_49 = ((void*)0);

 FUNC_1(&VAR_37, VAR_3, VAR_22, VAR_52, VAR_35, VAR_34, VAR_31);

 VAR_37.ni_dvp = VAR_33;
 VAR_37.ni_flag |= VAR_19;
 VAR_41 = &VAR_37.ni_cnd;

continue_lookup:
 VAR_40 = FUNC_8(&VAR_37, VAR_32);
 if (VAR_40)
  return (VAR_40);

 VAR_39 = VAR_37.ni_dvp;
 VAR_38 = VAR_37.ni_vp;



 if (VAR_36 & VAR_25) {
  VAR_44 |= VAR_25;
 }


 if (VAR_36 & VAR_27) {
  VAR_44 |= VAR_27;
 }

 if (VAR_38) {
  VAR_48 = FUNC_18(VAR_38);



  if (VAR_38->v_flag & VAR_29) {
   VAR_40 = VAR_4;
  }
  if (FUNC_23(VAR_38) && (VAR_31 != FUNC_13())) {
   VAR_40 = VAR_9;
   goto out;
  }


  if (!VAR_48) {
   VAR_40 = FUNC_16(VAR_39, VAR_38, VAR_41, VAR_31, ((void*)0));
   if (VAR_40) {
    if (VAR_40 == VAR_7) {
     FUNC_4(VAR_51 < VAR_18);
     if (VAR_51 < VAR_18) {
      VAR_50 = 1;
      VAR_51++;
     }
    }
    goto out;
   }
  }
 } else {
  VAR_48 = 1;

  if (!FUNC_18(VAR_39)) {
   FUNC_11("No vp, but no compound remove?");
  }
 }
 VAR_46 = FUNC_7();
 if (VAR_45 || VAR_46) {
  if (VAR_42 == ((void*)0)) {
   FUNC_0(VAR_42);
   if (VAR_42 == ((void*)0)) {
    VAR_40 = VAR_8;
    goto out;
   }
  }
  VAR_43 = FUNC_12(VAR_39, VAR_37.ni_cnd.cn_nameptr, VAR_42, VAR_17, &VAR_47);
 }






 {
  VAR_40 = FUNC_17(VAR_39, &VAR_37.ni_vp, &VAR_37, VAR_44, VAR_49, VAR_31);
  VAR_38 = VAR_37.ni_vp;
  if (VAR_40 == VAR_6) {
   if (!VAR_48) {
    FUNC_11("EKEEPLOOKING, but not a filesystem that supports compound VNOPs?");
   }

   if ((VAR_37.ni_flag & VAR_20) == 0) {
    FUNC_11("EKEEPLOOKING, but continue flag not set?");
   }

   if (FUNC_20(VAR_38)) {
    VAR_40 = VAR_5;
    goto out;
   }
   goto continue_lookup;
  } else if (VAR_40 == VAR_7 && VAR_48) {
   FUNC_4(VAR_51 < VAR_18);
   if (VAR_51 < VAR_18) {





    VAR_50 = 1;
    VAR_51 += 1;
    goto out;
   }
  }
 }





 if (!VAR_40) {
  if (VAR_46) {
   FUNC_6(FUNC_14(VAR_31),
    VAR_15,
    (uintptr_t)VAR_38,
    (uintptr_t)VAR_42);
  }

  if (VAR_38->v_flag & VAR_24) {







      FUNC_27(VAR_38, ((void*)0), ((void*)0), 0, 0, VAR_28);
  }
 }

out:
 if (VAR_42 != ((void*)0))
  FUNC_2(VAR_42);
 FUNC_9(&VAR_37);
 FUNC_24(VAR_39);
 if (VAR_38) {
  FUNC_24(VAR_38);
 }

 if (VAR_50) {
  goto retry;
 }

 return (VAR_40);
}
