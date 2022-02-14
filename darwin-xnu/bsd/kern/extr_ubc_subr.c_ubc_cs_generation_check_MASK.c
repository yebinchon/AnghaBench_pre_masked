
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {TYPE_1__* v_ubcinfo; } ;
struct TYPE_2__ {scalar_t__ cs_add_gen; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vnode*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*) ;

int
FUNC_3(
 struct vnode *VAR_2)
{
 int VAR_3 = VAR_0;

 FUNC_1(VAR_2);

 if (FUNC_0(VAR_2) && VAR_2->v_ubcinfo->cs_add_gen == VAR_1) {
  VAR_3 = 0;
 }

 FUNC_2(VAR_2);
 return VAR_3;
}
