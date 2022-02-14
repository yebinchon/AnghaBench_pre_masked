
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_label; } ;
struct mount {int mnt_mntlabel; } ;


 int FUNC_0 (int ,struct mount*,int ,struct vnode*,int ,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*) ;

void
FUNC_4(struct mount *VAR_3, struct vnode *VAR_4,
    const char *VAR_5)
{
 int VAR_6 = 0;






 if (!VAR_0)
  return;

 FUNC_0(VAR_2, VAR_3, VAR_3->mnt_mntlabel, VAR_4,
      VAR_4->v_label, VAR_5);
 if (VAR_6 == 0)
  return;

 FUNC_1(VAR_4);
 FUNC_2(VAR_4);
 FUNC_3(VAR_4);
 return;
}
