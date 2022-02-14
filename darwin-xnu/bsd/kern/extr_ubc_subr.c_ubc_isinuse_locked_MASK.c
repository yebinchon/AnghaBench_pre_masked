
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_usecount; int v_kusecount; } ;


 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;

int
FUNC_2(struct vnode *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = 0;


 if (!VAR_2)
  FUNC_0(VAR_0);

 if ((VAR_0->v_usecount - VAR_0->v_kusecount) > VAR_1)
  VAR_3 = 1;

 if (!VAR_2)
  FUNC_1(VAR_0);
 return (VAR_3);
}
