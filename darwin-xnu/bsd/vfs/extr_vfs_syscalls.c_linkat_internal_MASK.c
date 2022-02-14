
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_13__ ;


typedef TYPE_2__* vnode_t ;
typedef int vfs_context_t ;
typedef int user_addr_t ;
struct vnode_attr {scalar_t__ va_uid; } ;
struct TYPE_23__ {int cn_flags; int cn_nameptr; int cn_nameiop; } ;
struct nameidata {TYPE_13__ ni_cnd; TYPE_2__* ni_vp; TYPE_2__* ni_dvp; int ni_dirp; int ni_op; } ;
struct TYPE_26__ {int mode; } ;
typedef TYPE_3__ fse_info ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
struct TYPE_25__ {scalar_t__ v_type; int v_parent; TYPE_1__* v_mount; } ;
struct TYPE_24__ {int mnt_kern_flag; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_2 (struct nameidata*,int ,int ,int,int,int ,int ) ;
 int VAR_25 ;
 TYPE_2__* VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct vnode_attr*) ;
 int FUNC_5 (struct vnode_attr*,int ) ;
 int FUNC_6 (struct vnode_attr*,int ) ;
 scalar_t__ VAR_29 ;
 int FUNC_7 (TYPE_2__*,TYPE_2__*,TYPE_13__*,int ) ;
 int FUNC_8 (int ,int ,int ,int,char*,...) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_3__*,int ) ;
 int FUNC_10 (int ,int ,uintptr_t,uintptr_t) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,TYPE_2__*,TYPE_2__*,TYPE_13__*) ;
 int FUNC_15 (int ,TYPE_2__*,TYPE_2__*,TYPE_13__*) ;
 int FUNC_16 (struct nameidata*,int) ;
 int FUNC_17 (struct nameidata*) ;
 int FUNC_18 (int ,TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*,int ,char*,int,int*) ;
 int VAR_30 ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (TYPE_2__*,char*,int*) ;
 int FUNC_22 (TYPE_2__*,int *,int ,int ) ;
 scalar_t__ FUNC_23 (TYPE_2__*,struct vnode_attr*,int ) ;
 scalar_t__ FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_26(vfs_context_t VAR_31, int VAR_32, user_addr_t VAR_33, int VAR_34,
    user_addr_t VAR_35, int VAR_36, enum uio_seg VAR_37)
{
 vnode_t VAR_38, VAR_39, VAR_40;
 struct nameidata VAR_41;
 int VAR_42;
 int VAR_43;



 int VAR_44, VAR_45;
 char *VAR_46 = ((void*)0);
 int VAR_47=0;

 VAR_38 = VAR_39 = VAR_40 = VAR_26;


 VAR_42 = (VAR_36 & VAR_0) ? VAR_10 : VAR_25;
 FUNC_2(&VAR_41, VAR_22, VAR_28, VAR_1 | VAR_42,
     VAR_37, VAR_33, VAR_31);

 VAR_43 = FUNC_16(&VAR_41, VAR_32);
 if (VAR_43)
  return (VAR_43);
 VAR_38 = VAR_41.ni_vp;

 FUNC_17(&VAR_41);





 if (VAR_38->v_type == VAR_29) {
  if (!FUNC_1(VAR_38->v_mount->mnt_kern_flag, VAR_24)) {
   VAR_43 = VAR_8;
   goto out;
  }


  if (!FUNC_13(FUNC_20(VAR_31))) {
   struct vnode_attr VAR_48;

   FUNC_4(&VAR_48);
   FUNC_6(&VAR_48, VAR_30);
   if (FUNC_23(VAR_38, &VAR_48, VAR_31) != 0 ||
       !FUNC_5(&VAR_48, VAR_30) ||
       (VAR_48.va_uid != FUNC_12(FUNC_20(VAR_31)))) {
    VAR_43 = VAR_5;
    goto out;
   }
  }
 }





 VAR_41.ni_cnd.cn_nameiop = VAR_4;
 VAR_41.ni_cnd.cn_flags = VAR_21 | VAR_2 | VAR_3;
 VAR_41.ni_dirp = VAR_35;
 VAR_43 = FUNC_16(&VAR_41, VAR_34);
 if (VAR_43 != 0)
  goto out;
 VAR_39 = VAR_41.ni_dvp;
 VAR_40 = VAR_41.ni_vp;







   if ((VAR_43 = FUNC_22(VAR_38, ((void*)0), VAR_20, VAR_31)) != 0)
   goto out2;


 if (VAR_40 != VAR_26) {
  VAR_43 = VAR_6;
  goto out2;
 }

   if (FUNC_24(VAR_38) != FUNC_24(VAR_39)) {
    VAR_43 = VAR_9;
    goto out2;
   }


   if ((VAR_43 = FUNC_22(VAR_39, ((void*)0), VAR_19, VAR_31)) != 0)
    goto out2;


 VAR_43 = FUNC_7(VAR_38, VAR_39, &VAR_41.ni_cnd, VAR_31);
 if (VAR_43)
  goto out2;
 VAR_44 = 0;

 VAR_45 = FUNC_11();

 if (VAR_44 || VAR_45) {
  char *VAR_49 = ((void*)0);
  int VAR_50, VAR_51;


  FUNC_0(VAR_46);
  if (VAR_46 == ((void*)0)) {
   VAR_43 = VAR_7;
   goto out2;
  }

  VAR_50 = FUNC_19(VAR_39, VAR_41.ni_cnd.cn_nameptr, VAR_46, VAR_23, &VAR_47);

  if (VAR_45) {

   FUNC_0(VAR_49);
   if (VAR_49 == ((void*)0)) {
    VAR_43 = VAR_7;
    goto out2;
   }

   VAR_51 = VAR_23;
   if (FUNC_21(VAR_38, VAR_49, &VAR_51) == 0) {




    FUNC_10(FUNC_20(VAR_31), VAR_18,
             (uintptr_t)VAR_49,
             (uintptr_t)VAR_46);
   }
   if (VAR_49 != ((void*)0)) {
    FUNC_3(VAR_49);
   }
  }
 }
out2:




 FUNC_17(&VAR_41);
 if (VAR_46 != ((void*)0)) {
  FUNC_3(VAR_46);
 }
out:
 if (VAR_40)
  FUNC_25(VAR_40);
 if (VAR_39)
  FUNC_25(VAR_39);
 FUNC_25(VAR_38);
 return (VAR_43);
}
