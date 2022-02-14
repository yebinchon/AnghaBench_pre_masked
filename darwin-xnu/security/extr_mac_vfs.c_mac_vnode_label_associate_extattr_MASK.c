
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_label; } ;
struct mount {int mnt_mntlabel; } ;


 int FUNC_0 (int ,struct mount*,int ,struct vnode*,int ) ;
 int VAR_0 ;

int
FUNC_1(struct mount *VAR_1, struct vnode *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0, VAR_1, VAR_1->mnt_mntlabel, VAR_2,
     VAR_2->v_label);

 return (VAR_3);
}
