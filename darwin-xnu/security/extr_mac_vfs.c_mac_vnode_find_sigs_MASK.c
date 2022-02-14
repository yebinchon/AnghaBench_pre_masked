
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_label; } ;
struct proc {int dummy; } ;
typedef int off_t ;


 int FUNC_0 (int ,struct proc*,struct vnode*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_1(struct proc *VAR_3, struct vnode *VAR_4, off_t VAR_5)
{
 int VAR_6;







 FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_4->v_label);

 return (VAR_6);
}
