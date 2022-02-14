
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vfs_context_t ;
typedef int uint32_t ;
struct vnode_attr {int va_dataprotect_flags; } ;
struct vnode {int v_flag; struct vnode* v_parent; } ;
struct TYPE_3__ {scalar_t__ cn_context; int cn_flags; int cn_nameiop; } ;
struct nameidata {int ni_flag; struct vnode* ni_vp; TYPE_1__ ni_cnd; struct vnode* ni_dvp; int ni_op; } ;
typedef int boolean_t ;
struct TYPE_4__ {int p_flag; } ;


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
 int VAR_15 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int,int) ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 struct vnode* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ FUNC_3 (struct vnode_attr*,int ) ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_4 (struct vnode*,int,scalar_t__) ;
 int FUNC_5 (struct vnode*,struct vnode**,struct nameidata*,int ,int,int *,int *,scalar_t__) ;
 int FUNC_6 (struct vnode*,int,scalar_t__) ;
 int VAR_38 ;
 int VAR_39 ;
 TYPE_2__* FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_40 ;
 int FUNC_9 (struct nameidata*) ;
 int FUNC_10 (struct nameidata*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int*,int ,char*,int ) ;
 int VAR_41 ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (struct vnode*,TYPE_1__*,int,scalar_t__,int *) ;
 int FUNC_15 (struct nameidata*,struct vnode_attr*,int,int*,int*,scalar_t__) ;
 int FUNC_16 (struct vnode*,int,scalar_t__) ;
 int FUNC_17 (struct vnode*) ;
 scalar_t__ FUNC_18 (struct vnode*) ;
 scalar_t__ FUNC_19 (struct vnode*) ;
 scalar_t__ FUNC_20 (struct vnode*) ;
 int FUNC_21 (struct vnode*) ;
 scalar_t__ FUNC_22 (struct vnode*) ;
 int FUNC_23 (struct vnode*) ;
 int FUNC_24 (struct vnode*) ;

int
FUNC_25(struct nameidata *VAR_42, int *VAR_43, struct vnode_attr *VAR_44)
{
 struct vnode *VAR_45;
 struct vnode *VAR_46;
 vfs_context_t VAR_47 = VAR_42->ni_cnd.cn_context;
 int VAR_48;
 int VAR_49;
 uint32_t VAR_50;
 boolean_t VAR_51;
 boolean_t VAR_52;
 boolean_t VAR_53;
 boolean_t VAR_54;
 boolean_t VAR_55;
 int VAR_56 = 0;

again:
 VAR_45 = ((void*)0);
 VAR_46 = ((void*)0);
 VAR_54 = VAR_11;
 VAR_51 = VAR_11;
 VAR_53 = VAR_34;
 VAR_55 = VAR_11;
 VAR_49 = *VAR_43;
 VAR_50 = VAR_42->ni_cnd.cn_flags;


 if (FUNC_3 (VAR_44, VAR_41)
  && FUNC_1(VAR_44->va_dataprotect_flags, VAR_36)) {
  VAR_49 |= VAR_12;
 }




 if (VAR_49 & VAR_24) {
         if ( (VAR_49 & VAR_25) ) {
          VAR_48 = VAR_6;
   goto out;
  }
  VAR_42->ni_cnd.cn_nameiop = VAR_4;




  VAR_42->ni_cnd.cn_flags &= (VAR_35 | VAR_21);
  VAR_42->ni_cnd.cn_flags |= VAR_17 | VAR_16 | VAR_0;
  VAR_42->ni_flag = VAR_19;




  if ((VAR_49 & VAR_27) == 0 && (VAR_49 & VAR_28) == 0 && (VAR_50 & VAR_13) != 0)
   VAR_42->ni_cnd.cn_flags |= VAR_13;

continue_create_lookup:
  if ( (VAR_48 = FUNC_9(VAR_42)) )
   goto out;

  VAR_46 = VAR_42->ni_dvp;
  VAR_45 = VAR_42->ni_vp;

  VAR_54 = FUNC_17(VAR_46);


  if (VAR_45 == ((void*)0)) {

   if (VAR_44 == ((void*)0)) {
    FUNC_23(VAR_46);
    VAR_48 = VAR_6;
    goto out;
   }





   VAR_48 = FUNC_15(VAR_42, VAR_44, VAR_49, &VAR_51, &VAR_52, VAR_47);

   VAR_46 = VAR_42->ni_dvp;
   VAR_45 = VAR_42->ni_vp;





   if (VAR_48 == VAR_7) {
    if (!VAR_54) {
     FUNC_11("EKEEPLOOKING from a filesystem that doesn't support compound VNOPs?");
    }
    goto continue_create_lookup;
   }

   FUNC_10(VAR_42);
   if (VAR_46) {
    FUNC_11("Shouldn't have a dvp here.");
   }

   if (VAR_48) {



    if ((VAR_48 == VAR_5) && !(VAR_49 & VAR_27)){
     if (VAR_45)
      FUNC_23(VAR_45);
     goto again;
    }
    goto bad;
   }

   VAR_53 = !VAR_52;
  }
  else {
   if (VAR_49 & VAR_27)
    VAR_48 = VAR_5;







   if (VAR_48 == 0 && VAR_54 && (FUNC_22(VAR_46) == FUNC_22(VAR_45))) {
    VAR_48 = FUNC_5(VAR_46, &VAR_42->ni_vp, VAR_42, 0, VAR_49, ((void*)0), ((void*)0), VAR_47);

    if (VAR_48 == 0) {
     VAR_45 = VAR_42->ni_vp;
     VAR_53 = VAR_11;
    } else if (VAR_48 == VAR_7) {
     if ((VAR_42->ni_flag & VAR_20) == 0) {
      FUNC_11("EKEEPLOOKING, but continue flag not set?");
     }
     goto continue_create_lookup;
    }
   }
   FUNC_10(VAR_42);
   FUNC_23(VAR_46);
   VAR_42->ni_dvp = VAR_22;

   if (VAR_48) {
    goto bad;
   }

   VAR_49 &= ~VAR_24;


  }
 }
    else {



  VAR_42->ni_cnd.cn_nameiop = VAR_18;

  VAR_42->ni_cnd.cn_flags &= (VAR_35 | VAR_21);
  VAR_42->ni_cnd.cn_flags |= VAR_13 | VAR_16 | VAR_0 | VAR_39;




  if (VAR_49 & VAR_12)
   VAR_42->ni_cnd.cn_flags |= VAR_2 | VAR_3;
  VAR_42->ni_flag = VAR_19;


  if (VAR_49 & VAR_28 || VAR_49 & VAR_29 || (VAR_50 & VAR_13) == 0) {
   VAR_42->ni_cnd.cn_flags &= ~VAR_13;
  }


  do {
   if ( (VAR_48 = FUNC_9(VAR_42)) )
    goto out;
   VAR_45 = VAR_42->ni_vp;
   VAR_46 = VAR_42->ni_dvp;


   VAR_54 = FUNC_17(VAR_46);
   if (VAR_54 && ((VAR_45 == VAR_22) || (FUNC_22(VAR_46) == FUNC_22(VAR_45)))) {
    VAR_48 = FUNC_5(VAR_46, &VAR_42->ni_vp, VAR_42, 0, VAR_49, ((void*)0), ((void*)0), VAR_47);
    VAR_45 = VAR_42->ni_vp;
    if (VAR_48 == 0) {
     VAR_53 = VAR_11;
    } else if (VAR_48 == VAR_7) {
     if ((VAR_42->ni_flag & VAR_20) == 0) {
      FUNC_11("EKEEPLOOKING, but continue flag not set?");
     }
    }
   }
  } while (VAR_48 == VAR_7);

  FUNC_10(VAR_42);
  FUNC_23(VAR_46);
  VAR_42->ni_dvp = VAR_22;

  if (VAR_48) {
   goto bad;
  }
 }





 if (VAR_42->ni_dvp != VAR_22) {
  FUNC_11("Haven't cleaned up adequately in vn_open_auth()");
 }
 if (FUNC_20(VAR_45) && (VAR_49 & (VAR_15 | VAR_30)) && (VAR_47 != FUNC_13())) {
  VAR_48 = VAR_9;
  goto bad;
 }







 if (VAR_53) {
  if (VAR_54 && !FUNC_21(VAR_45) && !FUNC_18(VAR_45)) {
   FUNC_11("Why am I trying to use VNOP_OPEN() on anything other than the root or a named stream?");
  }

  if (!VAR_51) {
   VAR_48 = FUNC_14(VAR_45, &VAR_42->ni_cnd, VAR_49, VAR_47, ((void*)0));
   if (VAR_48) {
    goto bad;
   }
  }

  if (FUNC_3 (VAR_44, VAR_41)
   && FUNC_1(VAR_44->va_dataprotect_flags, VAR_37)) {

   boolean_t VAR_57 = VAR_11;

   VAR_57 = FUNC_0(FUNC_8(), "com.apple.private.security.file-unencrypt-access");

   if (!VAR_57) {
    VAR_48 = VAR_9;
    goto bad;
   }
   VAR_49 |= VAR_14;
  }

  VAR_48 = FUNC_6(VAR_45, VAR_49, VAR_47);
  if (VAR_48) {
   goto bad;
  }
  VAR_53 = VAR_11;
 }
 if (!VAR_51 && (VAR_45->v_flag & VAR_38) && (FUNC_7()->p_flag & VAR_32)) {
  VAR_49 |= VAR_26;
 }




 VAR_48 = FUNC_16(VAR_45, VAR_49, VAR_47);
 if (VAR_48) {
  VAR_55 = VAR_34;
  goto bad;
 }


 if (VAR_54 || VAR_51)
  VAR_49 &= ~VAR_30;

 *VAR_43 = VAR_49;
 return (0);

bad:

 if (!VAR_53) {
  FUNC_4(VAR_45, VAR_49, VAR_47);
 }

 VAR_42->ni_vp = ((void*)0);
 if (VAR_45) {
  FUNC_23(VAR_45);







  if (((VAR_48 == VAR_8) && (*VAR_43 & VAR_24)) || (VAR_48 == VAR_10) || VAR_55) {
   VAR_56 += 1;
   if (VAR_56 > VAR_33) {

    FUNC_12(&VAR_56, VAR_31, "vn_open_auth_retry",
        FUNC_2((VAR_56 * (VAR_40/100)), VAR_40));
   }
   goto again;
  }
 }

out:
 return (VAR_48);
}
