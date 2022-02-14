
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int caddr_t ;
struct TYPE_5__ {int v_flag; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(vnode_t VAR_1, int VAR_2)
{
 if (!VAR_2)
  FUNC_0(VAR_1);
 if((VAR_1->v_flag & VAR_0) == VAR_0) {
  VAR_1->v_flag &= ~VAR_0;
  FUNC_2((caddr_t)&VAR_1->v_flag);
 }
 if (!VAR_2)
  FUNC_1(VAR_1);
}
