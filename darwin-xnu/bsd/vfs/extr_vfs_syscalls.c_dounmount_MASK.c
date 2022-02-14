
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef struct vnode* vnode_t ;
typedef int vfs_context_t ;
typedef int uint32_t ;
struct vnode {scalar_t__ v_resolve; int v_flag; struct mount* v_mountedhere; } ;
struct mount {int mnt_lflag; int mnt_flag; int mnt_rwlock; int mnt_triggerdata; int (* mnt_triggercallback ) (struct mount*,int ,int ,int ) ;TYPE_1__* mnt_vtable; int mnt_crossref; struct vnode* mnt_vnodecovered; struct vnode* mnt_devvp; int mnt_kern_flag; struct vnode* mnt_realrootvp; } ;
typedef TYPE_2__* proc_t ;
typedef int caddr_t ;
struct TYPE_6__ {int p_flag; } ;
struct TYPE_5__ {int vfc_vfsflags; int vfc_refcount; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct mount*,int ) ;
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
 struct vnode* VAR_18 ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int,int *) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_6 (struct mount*,int ,int ) ;
 int FUNC_7 (struct mount*,int,int ) ;
 int VAR_24 ;
 int FUNC_8 (struct vnode*,int,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_9 (struct mount*) ;
 int FUNC_10 (struct mount*) ;
 int FUNC_11 (struct mount*,int,int ) ;
 int FUNC_12 (struct mount*,int ) ;
 int VAR_28 ;
 TYPE_2__* VAR_29 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct vnode*,int ) ;
 int FUNC_16 (struct mount*) ;
 int FUNC_17 (struct mount*,int) ;
 int FUNC_18 (struct mount*,struct vnode*,int ) ;
 int VAR_30 ;
 int FUNC_19 (struct mount*) ;
 int FUNC_20 (struct mount*) ;
 int FUNC_21 () ;
 int FUNC_22 (struct mount*) ;
 int FUNC_23 () ;
 int FUNC_24 (struct mount*) ;
 int FUNC_25 (struct mount*) ;
 int FUNC_26 (struct mount*) ;
 int FUNC_27 (struct mount*) ;
 int FUNC_28 () ;
 int FUNC_29 () ;
 int FUNC_30 (char*) ;
 int FUNC_31 (struct mount*,int ,int ,int ) ;
 int FUNC_32 (struct mount*,int ,int ,int ) ;
 int FUNC_33 (struct mount*) ;
 int FUNC_34 (struct mount*,struct vnode*,int) ;
 TYPE_2__* FUNC_35 (int ) ;
 int FUNC_36 (int *,int ,intptr_t) ;
 int FUNC_37 (struct mount*,int,int ) ;
 int VAR_31 ;
 int FUNC_38 (struct vnode*) ;
 int FUNC_39 (struct vnode*) ;
 struct vnode* FUNC_40 (struct vnode*) ;
 int FUNC_41 (struct vnode*) ;
 int FUNC_42 (struct vnode*) ;
 int FUNC_43 (struct vnode*) ;
 int FUNC_44 (struct vnode*) ;
 int FUNC_45 (struct vnode*,int ) ;
 int FUNC_46 (struct vnode*) ;
 int FUNC_47 (int ) ;

int
FUNC_48(struct mount *VAR_32, int VAR_33, int VAR_34, vfs_context_t VAR_35)
{
 vnode_t VAR_36 = (vnode_t)0;
 int VAR_37;
 int VAR_38 = 0;
 int VAR_39 = 0;
 int VAR_40 = 0;
 struct vnode *VAR_41 = VAR_18;
 FUNC_24(VAR_32);





 if (VAR_32->mnt_lflag & VAR_10) {
  if (VAR_34 != 0)
   FUNC_17(VAR_32, 1);
  FUNC_27(VAR_32);
  return (VAR_0);
 }

 if (VAR_33 & VAR_6) {
  VAR_39 = 1;
  VAR_32->mnt_lflag |= VAR_8;
 }






 VAR_32->mnt_kern_flag |= VAR_4;
 VAR_32->mnt_lflag |= VAR_10;
 VAR_32->mnt_flag &=~ VAR_5;






 VAR_32->mnt_realrootvp = VAR_18;
 FUNC_27(VAR_32);

 if (VAR_39 && (VAR_33 & VAR_9) == 0) {





  (void) FUNC_11(VAR_32, VAR_33 | VAR_9, VAR_35);
 }
 FUNC_28();
 VAR_30++;
 FUNC_29();


 FUNC_14(&VAR_32->mnt_rwlock);
 if (VAR_34 != 0)
  FUNC_17(VAR_32, 0);
 VAR_37 = 0;
 if (VAR_39 == 0) {
  FUNC_33(VAR_32);
  if ((VAR_32->mnt_flag & VAR_13) == 0) {
   VAR_37 = FUNC_6(VAR_32, VAR_15, VAR_35);
   if (VAR_37) {
    FUNC_24(VAR_32);
    VAR_32->mnt_kern_flag &= ~VAR_4;
    VAR_32->mnt_lflag &= ~VAR_10;
    VAR_32->mnt_lflag &= ~VAR_8;
    goto out;
   }
  }
 }


 FUNC_10(VAR_32);

 FUNC_2(VAR_32, VAR_28);





 if (VAR_39)
  VAR_40 |= VAR_1;
 VAR_37 = FUNC_34(VAR_32, VAR_18, VAR_21 | VAR_22 | VAR_20 | VAR_40);
 if ((VAR_39 == 0) && VAR_37) {
  FUNC_24(VAR_32);
  VAR_32->mnt_kern_flag &= ~VAR_4;
  VAR_32->mnt_lflag &= ~VAR_10;
  VAR_32->mnt_lflag &= ~VAR_8;
  goto out;
 }


 FUNC_19(VAR_32);

 VAR_37 = FUNC_7(VAR_32, VAR_33, VAR_35);
 if (VAR_37) {
  FUNC_20(VAR_32);
  FUNC_24(VAR_32);
  VAR_32->mnt_kern_flag &= ~VAR_4;
  VAR_32->mnt_lflag &= ~VAR_10;
  VAR_32->mnt_lflag &= ~VAR_8;
  goto out;
 }


 if (!VAR_37)
  FUNC_3(1, &VAR_31);

 if ( VAR_32->mnt_devvp && VAR_32->mnt_vtable->vfc_vfsflags & VAR_23) {

  VAR_41 = VAR_32->mnt_devvp;
  FUNC_39(VAR_41);
  FUNC_44(VAR_41);
  FUNC_8(VAR_41, VAR_32->mnt_flag & VAR_13 ? VAR_2 : VAR_2|VAR_3,
                       VAR_35);
  FUNC_38(VAR_41);
  FUNC_43(VAR_41);
 }
 FUNC_13(&VAR_32->mnt_rwlock);
 FUNC_22(VAR_32);
 FUNC_14(&VAR_32->mnt_rwlock);


 if ((VAR_36 = VAR_32->mnt_vnodecovered) != VAR_18) {







  FUNC_39(VAR_36);
  FUNC_42(VAR_36);

  VAR_32->mnt_crossref++;
  VAR_36->v_mountedhere = (struct mount *)0;
  FUNC_0(VAR_36->v_flag, VAR_24);

  FUNC_46(VAR_36);
  FUNC_43(VAR_36);
 }

 FUNC_21();
 VAR_32->mnt_vtable->vfc_refcount--;
 FUNC_23();

 FUNC_9(VAR_32);
 FUNC_36(((void*)0), VAR_25, (intptr_t)((void*)0));
 FUNC_24(VAR_32);
 VAR_32->mnt_lflag |= VAR_7;

 if (VAR_32->mnt_lflag & VAR_11) {







  VAR_32->mnt_lflag &= ~VAR_11;
  FUNC_47((caddr_t)VAR_32);
 }
 FUNC_26(VAR_32);
out:
 if (VAR_32->mnt_lflag & VAR_11) {
  VAR_32->mnt_lflag &= ~VAR_11;
  VAR_38 = 1;
 }
 FUNC_27(VAR_32);


 FUNC_13(&VAR_32->mnt_rwlock);

 if (VAR_38)
  FUNC_47((caddr_t)VAR_32);

 if (!VAR_37) {
  if ((VAR_36 != VAR_18)) {
   vnode_t VAR_42 = VAR_18;
   FUNC_39(VAR_36);

   FUNC_18(VAR_32, VAR_36, 0);







   if (!FUNC_41(VAR_36)) {
    VAR_42 = FUNC_40(VAR_36);





   }

   FUNC_44(VAR_36);
   FUNC_43(VAR_36);
   VAR_36 = VAR_18;

   if (VAR_42) {
    FUNC_15(VAR_42, VAR_17);
    FUNC_43(VAR_42);
   }
  } else if (VAR_32->mnt_flag & VAR_14) {
    FUNC_25(VAR_32);



    FUNC_1((caddr_t)VAR_32, sizeof (struct mount), VAR_16);
  } else
   FUNC_30("dounmount: no coveredvp");
 }
 return (VAR_37);
}
