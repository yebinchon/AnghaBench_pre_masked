
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_lflag; scalar_t__ v_usecount; scalar_t__ v_iocount; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*,int,int ,int ) ;
 int FUNC_3 (struct vnode*) ;

int
FUNC_4(struct vnode *VAR_1)
{
 FUNC_1(VAR_1);

 if (VAR_1->v_iocount || VAR_1->v_usecount) {
  VAR_1->v_lflag |= VAR_0;
  FUNC_3(VAR_1);
  return(0);
 }
 FUNC_0(VAR_1);
 FUNC_2(VAR_1, 1, 0, 0);

 FUNC_3(VAR_1);

 return (1);
}
