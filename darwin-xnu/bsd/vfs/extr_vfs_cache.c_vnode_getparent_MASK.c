
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct TYPE_6__ {int v_id; struct TYPE_6__* v_parent; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;

vnode_t
FUNC_3(vnode_t VAR_1)
{
        vnode_t VAR_2 = VAR_0;
 int VAR_3;

 FUNC_0();







 if ( (VAR_2 = VAR_1->v_parent) != VAR_0 ) {
         VAR_3 = VAR_2->v_id;

  FUNC_1();

  if (FUNC_2(VAR_2, VAR_3) != 0)
          VAR_2 = ((void*)0);
 } else
         FUNC_1();
 return (VAR_2);
}
