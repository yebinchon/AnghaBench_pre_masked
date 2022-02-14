
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int errno_t ;
struct TYPE_5__ {int v_lflag; int * v_owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

errno_t
FUNC_3(vnode_t VAR_2)
{
 if (VAR_2->v_lflag & VAR_1) {
  return(VAR_0);
 }

 FUNC_1(VAR_2);






 if (VAR_2->v_owner == ((void*)0)) {
  VAR_2->v_lflag |= VAR_1;
  VAR_2->v_owner = FUNC_0();
 }
 FUNC_2(VAR_2);

 return(0);
}
