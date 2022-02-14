
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
typedef int int32_t ;
struct TYPE_2__ {int flags; struct vnode* vp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

int
FUNC_2(struct vnode *VAR_4, int32_t *VAR_5)
{
 int VAR_6;

 FUNC_0(&VAR_2);
 for(VAR_6=0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_3[VAR_6].vp == VAR_4) {
   break;
  }
 }

 if (VAR_6 >= VAR_1) {
  FUNC_1(&VAR_2);
  return VAR_0;
 }

 *VAR_5 = VAR_3[VAR_6].flags;
 FUNC_1(&VAR_2);
 return 0;
}
