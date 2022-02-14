
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vfs_context_t ;
struct vnop_mknod_args {struct vnode** a_vpp; struct vnode_attr* a_vap; struct vnode* a_dvp; struct componentname* a_cnp; } ;
struct vnode_attr {scalar_t__ va_type; int va_mode; int va_gid; int va_uid; int va_rdev; } ;
struct vnode {int dummy; } ;
struct proc {int dummy; } ;
struct componentname {int cn_nameptr; int cn_context; } ;
struct TYPE_9__ {int dev; } ;
typedef TYPE_1__ devnode_type_t ;
struct TYPE_10__ {int dn_mode; int dn_gid; int dn_uid; } ;
typedef TYPE_2__ devnode_t ;
struct TYPE_11__ {TYPE_2__* de_dnp; } ;
typedef TYPE_3__ devdirent_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct vnode_attr*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_3 (struct vnode*) ;
 int FUNC_4 (int ,TYPE_2__*,int ,TYPE_1__*,int *,int *,TYPE_3__**) ;
 int FUNC_5 (TYPE_2__*,struct vnode**,struct proc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct proc* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct vnop_mknod_args *VAR_8)







{
     struct componentname * VAR_9 = VAR_8->a_cnp;
 vfs_context_t VAR_10 = VAR_9->cn_context;
 struct proc *VAR_11 = FUNC_6(VAR_10);
 devnode_t * VAR_12;
 devdirent_t * VAR_13;
 devnode_t * VAR_14;
     struct vnode * VAR_15 = VAR_8->a_dvp;
 int VAR_16 = 0;
 devnode_type_t VAR_17;
 struct vnode_attr * VAR_18 = VAR_8->a_vap;
 struct vnode ** VAR_19 = VAR_8->a_vpp;

 *VAR_19 = ((void*)0);
 if (!(VAR_18->va_type == VAR_3) && !(VAR_18->va_type == VAR_4)) {
         return (VAR_2);
 }
 VAR_17.dev = VAR_18->va_rdev;

 FUNC_0();

 VAR_14 = FUNC_3(VAR_15);

 VAR_16 = FUNC_4(VAR_9->cn_nameptr, VAR_14,
         (VAR_18->va_type == VAR_3) ? VAR_0 : VAR_1,
         &VAR_17, ((void*)0), ((void*)0), &VAR_13);
 if (VAR_16) {
         goto failure;
 }
 VAR_12 = VAR_13->de_dnp;
 VAR_16 = FUNC_5(VAR_12, VAR_19, VAR_11);
 if (VAR_16)
         goto failure;
 VAR_12->dn_uid = VAR_18->va_uid;
 VAR_12->dn_gid = VAR_18->va_gid;
 VAR_12->dn_mode = VAR_18->va_mode;
 FUNC_2(VAR_18, VAR_7);
 FUNC_2(VAR_18, VAR_5);
 FUNC_2(VAR_18, VAR_6);
failure:
 FUNC_1();

 return (VAR_16);
}
