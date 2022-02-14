
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int errno_t ;
struct TYPE_5__ {int v_lflag; scalar_t__ v_owner; int v_iocount; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

errno_t
FUNC_4(vnode_t VAR_1)
{
 if ((VAR_1->v_lflag & VAR_0) && VAR_1->v_owner == FUNC_0()) {

  FUNC_1(VAR_1);
         VAR_1->v_lflag &= ~VAR_0;
  VAR_1->v_owner = ((void*)0);
  FUNC_2(VAR_1);

  FUNC_3(&VAR_1->v_iocount);
 }
 return(0);
}
