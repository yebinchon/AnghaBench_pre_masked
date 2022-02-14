
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
typedef int user_addr_t ;
struct vnode_attr {int va_mode; } ;
struct TYPE_12__ {int cn_hash; int cn_namelen; int cn_nameptr; int cn_flags; } ;
struct nameidata {TYPE_9__ ni_cnd; TYPE_1__* ni_vp; TYPE_1__* ni_dvp; int ni_flag; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
struct TYPE_11__ {scalar_t__ v_parent; int * v_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
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
 int FUNC_1 (struct nameidata*,int ,int ,int,int,int ,int ) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct vnode_attr*,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int ,int ,int ,TYPE_1__*,int ) ;
 int VAR_18 ;
 int FUNC_4 (struct nameidata*,int) ;
 int FUNC_5 (struct nameidata*) ;
 int VAR_19 ;
 int FUNC_6 (TYPE_1__*,TYPE_9__*,struct vnode_attr*,int ,int *) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__**,struct nameidata*,struct vnode_attr*,int ,int ,int *,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_11(vfs_context_t VAR_20, user_addr_t VAR_21, struct vnode_attr *VAR_22, int VAR_23,
    enum uio_seg VAR_24)
{
 vnode_t VAR_25, VAR_26;
 int VAR_27;
 int VAR_28 = 0;
 int VAR_29;
 struct nameidata VAR_30;

 FUNC_0(VAR_18, VAR_22->va_mode);
 FUNC_1(&VAR_30, VAR_1, VAR_13, VAR_9 | VAR_0, VAR_24,
        VAR_21, VAR_20);
 VAR_30.ni_cnd.cn_flags |= VAR_17;
 VAR_30.ni_flag = VAR_11;

continue_lookup:
 VAR_27 = FUNC_4(&VAR_30, VAR_23);
 if (VAR_27)
  return (VAR_27);
 VAR_26 = VAR_30.ni_dvp;
 VAR_25 = VAR_30.ni_vp;

 if (VAR_25 != ((void*)0)) {
  VAR_27 = VAR_3;
  goto out;
 }

 VAR_29 = FUNC_8(VAR_26);

 FUNC_2(VAR_22, VAR_19, VAR_14);
 if ((VAR_27 = FUNC_6(VAR_26, &VAR_30.ni_cnd, VAR_22, VAR_20, ((void*)0))) != 0) {
  if (VAR_27 == VAR_2 || VAR_27 == VAR_5) {
   int VAR_31;

   FUNC_5(&VAR_30);
   FUNC_9(VAR_26);
   VAR_26 = VAR_12;





   FUNC_1(&VAR_30, VAR_10, VAR_13, VAR_0, VAR_24,
            VAR_21, VAR_20);
   VAR_31 = FUNC_4(&VAR_30, VAR_23);
   if (VAR_31) {
    goto out;
   } else {
    VAR_25 = VAR_30.ni_vp;
    VAR_27 = VAR_3;
    goto out;
   }
  }

  goto out;
 }




 if ((VAR_27 = FUNC_7(VAR_26, &VAR_25, &VAR_30, VAR_22, 0, 0, ((void*)0), VAR_20)) != 0) {
  if (VAR_27 == VAR_4) {
   VAR_30.ni_vp = VAR_25;
   goto continue_lookup;
  }

  goto out;
 }


 if (VAR_25->v_name == ((void*)0))
         VAR_28 |= VAR_15;
 if (VAR_25->v_parent == VAR_12)
         VAR_28 |= VAR_16;

 if (VAR_28)
         FUNC_10(VAR_25, VAR_26, VAR_30.ni_cnd.cn_nameptr, VAR_30.ni_cnd.cn_namelen, VAR_30.ni_cnd.cn_hash, VAR_28);





out:




 FUNC_5(&VAR_30);

 if (VAR_25)
  FUNC_9(VAR_25);
 if (VAR_26)
  FUNC_9(VAR_26);

 return (VAR_27);
}
