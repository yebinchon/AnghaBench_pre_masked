
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_lflag; int v_lock; int v_label; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int ,char*,int ) ;

void
FUNC_1(struct vnode *VAR_4)
{


 while (VAR_4->v_lflag & VAR_1) {
  VAR_4->v_lflag |= VAR_3;
  (void)FUNC_0(&VAR_4->v_label, &VAR_4->v_lock, VAR_0, "vnode_relabel", 0);
 }


 VAR_4->v_lflag &= ~VAR_2;

 return;
}
