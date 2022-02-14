
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_label; } ;
struct mount {int * mnt_mntlabel; } ;


 int FUNC_0 (int ,struct mount*,int *,struct vnode*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_1(struct mount *VAR_3, struct vnode *VAR_4)
{





 if (!VAR_0)
  return;

 FUNC_0(VAR_2, VAR_3,
     VAR_3 ? VAR_3->mnt_mntlabel : ((void*)0), VAR_4, VAR_4->v_label);
}
