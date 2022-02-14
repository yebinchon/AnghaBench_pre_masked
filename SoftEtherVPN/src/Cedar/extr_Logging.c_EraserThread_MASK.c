
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bs ;
struct TYPE_4__ {int Halt; int HaltEvent; int DirName; int MinFreeSpace; } ;
typedef int THREAD ;
typedef TYPE_1__ ERASER ;


 int FUNC_0 (TYPE_1__*,char*,int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(THREAD *VAR_0, void *VAR_1)
{
 ERASER *VAR_2 = (ERASER *)VAR_1;
 char VAR_3[64];

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }


 FUNC_3(VAR_3, sizeof(VAR_3), VAR_2->MinFreeSpace);
 FUNC_0(VAR_2, "LE_START", VAR_2->DirName, VAR_3);

 while (VAR_2->Halt == 0)
 {

  FUNC_1(VAR_2);

  FUNC_4(VAR_2->HaltEvent, FUNC_2());
 }
}
