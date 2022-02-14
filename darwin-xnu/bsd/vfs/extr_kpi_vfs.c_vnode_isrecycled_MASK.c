
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct TYPE_5__ {int v_lflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(vnode_t VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2);
 VAR_3 = (VAR_2->v_lflag & (VAR_1|VAR_0))? 1 : 0;
 FUNC_1(VAR_2);
 return(VAR_3);
}
