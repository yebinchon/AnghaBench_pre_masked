
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct vnode {int v_label; } ;
struct mount {int mnt_mntlabel; } ;
struct componentname {int dummy; } ;
typedef int kauth_cred_t ;


 int FUNC_0 (int ,int ,struct mount*,int ,struct vnode*,int ,struct vnode*,int ,struct componentname*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

int
FUNC_3(vfs_context_t VAR_2, struct mount *VAR_3,
    struct vnode *VAR_4, struct vnode *VAR_5, struct componentname *VAR_6)
{
 kauth_cred_t VAR_7;
 int VAR_8;






 VAR_7 = FUNC_2(VAR_2);
 if (!FUNC_1(VAR_7))
  return (0);
 FUNC_0(VAR_1, VAR_7, VAR_3, VAR_3->mnt_mntlabel,
     VAR_4, VAR_4->v_label, VAR_5, VAR_5->v_label, VAR_6);

 return (VAR_8);
}
