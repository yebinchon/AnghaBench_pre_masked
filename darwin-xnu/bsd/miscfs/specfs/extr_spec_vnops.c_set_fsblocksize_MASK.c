
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct vnode {scalar_t__ v_type; int v_rdev; } ;
typedef int dev_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct vnode*,int ) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*) ;

void
FUNC_4(struct vnode *VAR_2)
{

 if (VAR_2->v_type == VAR_0) {
  dev_t VAR_3 = (dev_t)VAR_2->v_rdev;
  int VAR_4 = FUNC_0(VAR_3);

  if ((u_int)VAR_4 >= (u_int)VAR_1)
   return;

  FUNC_2(VAR_2);
  FUNC_1(VAR_2, VAR_3);
  FUNC_3(VAR_2);
 }

}
