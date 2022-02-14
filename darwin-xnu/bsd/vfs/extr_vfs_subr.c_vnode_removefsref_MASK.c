
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct TYPE_5__ {int v_lflag; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(vnode_t VAR_1)
{
 FUNC_1(VAR_1);
 if ((VAR_1->v_lflag & VAR_0) == 0)
  FUNC_0("remove_fsref: no named reference");
 VAR_1->v_lflag &= ~VAR_0;
 FUNC_2(VAR_1);
 return(0);

}
