
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Traffic; struct TYPE_4__* Policy; int AuthData; int AuthType; int * Group; struct TYPE_4__* GroupName; struct TYPE_4__* Note; struct TYPE_4__* RealName; struct TYPE_4__* Name; int lock; } ;
typedef TYPE_1__ USER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(USER *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0->lock);
 FUNC_1(VAR_0->Name);
 FUNC_1(VAR_0->RealName);
 FUNC_1(VAR_0->Note);
 FUNC_1(VAR_0->GroupName);
 if (VAR_0->Group != ((void*)0))
 {
  FUNC_4(VAR_0->Group);
 }


 FUNC_2(VAR_0->AuthType, VAR_0->AuthData);

 if (VAR_0->Policy)
 {

  FUNC_1(VAR_0->Policy);
 }

 FUNC_3(VAR_0->Traffic);

 FUNC_1(VAR_0);
}
