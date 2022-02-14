
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vfs_context_t ;
struct vnop_mkdir_args {int a_dvp; struct vnode** a_vpp; struct vnode_attr* a_vap; struct componentname* a_cnp; } ;
struct vnode_attr {int va_mode; } ;
struct vnode {int dummy; } ;
struct proc {int dummy; } ;
struct componentname {int cn_nameptr; int cn_context; } ;
struct TYPE_9__ {int dn_mode; int dn_gid; int dn_uid; } ;
typedef TYPE_1__ devnode_t ;
struct TYPE_10__ {TYPE_1__* de_dnp; } ;
typedef TYPE_2__ devdirent_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*,int ,int *,int *,int *,TYPE_2__**) ;
 int FUNC_4 (TYPE_1__*,struct vnode**,struct proc*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 struct proc* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct vnop_mkdir_args *VAR_1)







{
 struct componentname * VAR_2 = VAR_1->a_cnp;
 vfs_context_t VAR_3 = VAR_2->cn_context;
 struct proc *VAR_4 = FUNC_6(VAR_3);
 int VAR_5 = 0;
 devnode_t * VAR_6;
 devdirent_t * VAR_7;
 devnode_t * VAR_8;
 struct vnode_attr * VAR_9 = VAR_1->a_vap;
 struct vnode * * VAR_10 = VAR_1->a_vpp;

 FUNC_0();

 VAR_6 = FUNC_2(VAR_1->a_dvp);
 VAR_5 = FUNC_3(VAR_2->cn_nameptr, VAR_6, VAR_0,
         ((void*)0), ((void*)0), ((void*)0), &VAR_7);
 if (VAR_5) {
     goto failure;
 }
 VAR_8 = VAR_7->de_dnp;
 VAR_8->dn_uid = VAR_6->dn_uid;
 VAR_8->dn_gid = VAR_6->dn_gid;
 VAR_8->dn_mode = VAR_9->va_mode;
 FUNC_5(VAR_8, VAR_6);

 VAR_5 = FUNC_4(VAR_8, VAR_10, VAR_4);
failure:
 FUNC_1();

 return VAR_5;
}
