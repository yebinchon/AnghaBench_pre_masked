
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int caddr_t ;
struct TYPE_5__ {int v_flag; int v_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(vnode_t VAR_1)
{
 FUNC_1(VAR_1);
 while ((VAR_1->v_flag & VAR_0) == VAR_0)
  FUNC_0((caddr_t)&VAR_1->v_flag, &VAR_1->v_lock, 0, 0, 0);
 FUNC_2(VAR_1);
}
