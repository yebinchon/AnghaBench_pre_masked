
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Unlocked; int Lock; } ;
typedef int THREAD ;
typedef TYPE_1__ DEADCHECK ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(THREAD *VAR_0, void *VAR_1)
{
 DEADCHECK *VAR_2 = (DEADCHECK *)VAR_1;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0);

 FUNC_0(VAR_2->Lock);
 FUNC_2(VAR_2->Lock);
 VAR_2->Unlocked = 1;
}
