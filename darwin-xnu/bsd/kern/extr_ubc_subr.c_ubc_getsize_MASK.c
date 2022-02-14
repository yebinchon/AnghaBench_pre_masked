
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {TYPE_1__* v_ubcinfo; } ;
typedef int off_t ;
struct TYPE_2__ {int ui_size; } ;


 int FUNC_0 (struct vnode*) ;

off_t
FUNC_1(struct vnode *VAR_0)
{



 if (!FUNC_0(VAR_0))
  return ((off_t)0);
 return (VAR_0->v_ubcinfo->ui_size);
}
