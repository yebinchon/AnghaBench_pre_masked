
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int SessionList; int Name; } ;
struct TYPE_7__ {int UniqueId; scalar_t__ InProcMode; int Name; int ref; } ;
typedef TYPE_1__ SESSION ;
typedef TYPE_2__ HUB ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(HUB *VAR_0, SESSION *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0->SessionList);
 {
  FUNC_3(VAR_0->SessionList, VAR_1);
  FUNC_0(VAR_1->ref);
  FUNC_1("Session %s Inserted to %s.\n", VAR_1->Name, VAR_0->Name);

  if (VAR_1->InProcMode)
  {
   VAR_1->UniqueId = FUNC_2(VAR_0);
  }
 }
 FUNC_5(VAR_0->SessionList);
}
