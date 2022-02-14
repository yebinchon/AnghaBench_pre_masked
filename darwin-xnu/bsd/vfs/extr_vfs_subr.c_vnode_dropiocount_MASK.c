
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct TYPE_5__ {int v_iocount; int v_lflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static void
FUNC_3 (vnode_t VAR_2)
{
 if (VAR_2->v_iocount < 1)
  FUNC_0("vnode_dropiocount(%p): v_iocount < 1", VAR_2);

 VAR_2->v_iocount--;



 if ((VAR_2->v_lflag & (VAR_0 | VAR_1)) && (VAR_2->v_iocount <= 1))
  FUNC_2(&VAR_2->v_iocount);
}
