
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; int Traffic; struct TYPE_4__* Policy; struct TYPE_4__* Note; struct TYPE_4__* RealName; struct TYPE_4__* Name; } ;
typedef TYPE_1__ USERGROUP ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(USERGROUP *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0->Name);
 FUNC_1(VAR_0->RealName);
 FUNC_1(VAR_0->Note);

 if (VAR_0->Policy)
 {

  FUNC_1(VAR_0->Policy);
 }


 FUNC_2(VAR_0->Traffic);

 FUNC_0(VAR_0->lock);
 FUNC_1(VAR_0);
}
