
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Halt; int NoMoreSave; int AutoSaveConfigSpan; int SaveHaltEvent; } ;
typedef int THREAD ;
typedef TYPE_1__ SERVER ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(THREAD *VAR_0, void *VAR_1)
{
 SERVER *VAR_2 = (SERVER *)VAR_1;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 while (VAR_2->Halt == 0)
 {

  if (VAR_2->NoMoreSave == 0)
  {
   FUNC_0(VAR_2);
  }

  FUNC_1(VAR_2->SaveHaltEvent, VAR_2->AutoSaveConfigSpan);
 }
}
