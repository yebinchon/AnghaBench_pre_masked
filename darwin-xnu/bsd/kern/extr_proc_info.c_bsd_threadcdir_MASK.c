
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct uthread {TYPE_1__* uu_cdir; } ;
struct TYPE_3__ {int v_id; } ;


 TYPE_1__* VAR_0 ;

void
FUNC_0(void * VAR_1, void *VAR_2, int *VAR_3)
{
 struct uthread * VAR_4 = (struct uthread *)VAR_1;
 vnode_t VAR_5;
 vnode_t *VAR_6 = (vnode_t *)VAR_2;

 VAR_5 = VAR_4->uu_cdir;
 if (VAR_5 != VAR_0) {
  if (VAR_6 != ((void*)0)) {
   *VAR_6 = VAR_5;
   if (VAR_3 != ((void*)0))
    *VAR_3 = VAR_5->v_id;
  }
 }
}
