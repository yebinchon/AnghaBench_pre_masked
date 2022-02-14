
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_13__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
typedef int user_addr_t ;
struct vnode_attr {int dummy; } ;
struct TYPE_22__ {int cn_nameptr; } ;
struct nameidata {TYPE_1__* ni_vp; TYPE_13__ ni_cnd; TYPE_1__* ni_dvp; int ni_flag; } ;
struct TYPE_24__ {int mode; } ;
typedef TYPE_2__ fse_info ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
typedef int caddr_t ;
struct TYPE_23__ {int v_flag; } ;


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
 int FUNC_0 (char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct nameidata*,int ,int ,int,int,int ,int ) ;
 TYPE_1__* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (char*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_3 (int ,int ,int ,int,char*,int ,TYPE_2__*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_6 (int ,int ,uintptr_t,uintptr_t) ;
 int FUNC_7 () ;
 int FUNC_8 (struct nameidata*,int) ;
 int FUNC_9 (struct nameidata*) ;
 int FUNC_10 (int ,TYPE_1__*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_1__*,int ,int*) ;
 int FUNC_13 (TYPE_1__*,int ,char*,int ,int*) ;
 int FUNC_14 (TYPE_1__*,int ,char*,int) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct vnode_attr*) ;
 int FUNC_18 (TYPE_1__*,TYPE_1__*,TYPE_13__*,int ,int *) ;
 int FUNC_19 (TYPE_1__*,TYPE_1__**,struct nameidata*,struct vnode_attr*,int ) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*,TYPE_2__*,struct vnode_attr*) ;
 scalar_t__ FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (TYPE_1__*,int *,int *,int ,int ,int ) ;
 int FUNC_25 (int ) ;

__attribute__((used)) static int
FUNC_26(vfs_context_t VAR_24, int VAR_25, user_addr_t VAR_26,
    enum uio_seg VAR_27)
{
 vnode_t VAR_28, VAR_29;
 int VAR_30;
 struct nameidata VAR_31;
 char *VAR_32 = ((void*)0);
 int VAR_33=0;
 int VAR_34 = 0;
 int VAR_35 = 0;
 int VAR_36 = 0;



 struct vnode_attr *VAR_37 = ((void*)0);
 int VAR_38 = 0;
 int VAR_39;

 int VAR_40;






 do {
  FUNC_1(&VAR_31, VAR_1, VAR_19, VAR_14 | VAR_0,
      VAR_27, VAR_26, VAR_24);
  VAR_31.ni_flag = VAR_17;
continue_lookup:
  VAR_40 = 0;
  VAR_37 = ((void*)0);

  VAR_30 = FUNC_8(&VAR_31, VAR_25);
  if (VAR_30)
   return (VAR_30);

  VAR_29 = VAR_31.ni_dvp;
  VAR_28 = VAR_31.ni_vp;

  if (VAR_28) {
   VAR_39 = FUNC_20(VAR_28);

   if (VAR_28->v_flag & VAR_23) {



    VAR_30 = VAR_2;
    goto out;
   }
   if (FUNC_22(VAR_28) && (VAR_24 != FUNC_15())) {
    VAR_30 = VAR_7;
    goto out;
   }
   if (!VAR_39) {
    VAR_30 = FUNC_18(VAR_29, VAR_28, &VAR_31.ni_cnd, VAR_24, ((void*)0));
    if (VAR_30) {
     if (VAR_30 == VAR_4) {
      FUNC_4(VAR_38 < VAR_16);
      if (VAR_38 < VAR_16) {
       VAR_40 = 1;
       VAR_38 += 1;
      }
     }
     goto out;
    }
   }
  } else {
   VAR_39 = 1;

   if (!FUNC_20(VAR_29)) {
    FUNC_11("No error, but no compound rmdir?");
   }
  }
  VAR_34 = FUNC_7();
  if (VAR_35 || VAR_34) {
   if (VAR_32 == ((void*)0)) {
    FUNC_0(VAR_32);
    if (VAR_32 == ((void*)0)) {
     VAR_30 = VAR_5;
     goto out;
    }
   }

   VAR_33 = FUNC_13(VAR_29, VAR_31.ni_cnd.cn_nameptr, VAR_32, VAR_15, &VAR_36);





  }

  VAR_30 = FUNC_19(VAR_29, &VAR_28, &VAR_31, VAR_37, VAR_24);
  VAR_31.ni_vp = VAR_28;
  if (VAR_28 == VAR_18) {

   goto out;
  }

  if (VAR_30 == VAR_3) {
   goto continue_lookup;
  } else if (VAR_39 && VAR_30 == VAR_4) {
   FUNC_4(VAR_38 < VAR_16);
   if (VAR_38 < VAR_16) {





    VAR_40 = 1;
    VAR_38 += 1;
    goto out;
   }
  }
  if (!VAR_30) {
   if (VAR_34) {
    FUNC_6(FUNC_16(VAR_24),
      VAR_13,
      (uintptr_t)VAR_28,
      (uintptr_t)VAR_32);
   }

   if (VAR_28->v_flag & VAR_21) {


    FUNC_24(VAR_28, ((void*)0), ((void*)0), 0, 0, VAR_22);
   }
  }

out:
  if (VAR_32 != ((void*)0)) {
   FUNC_2(VAR_32);
   VAR_32 = ((void*)0);
  }




  FUNC_9(&VAR_31);
  FUNC_23(VAR_29);

  if (VAR_28)
   FUNC_23(VAR_28);

  if (VAR_40 == 0) {
   FUNC_25((caddr_t)VAR_28);
   return (VAR_30);
  }
  FUNC_14(VAR_28, VAR_20, "rm AD", 1);

 } while (VAR_40 != 0);

 return (VAR_30);

}
