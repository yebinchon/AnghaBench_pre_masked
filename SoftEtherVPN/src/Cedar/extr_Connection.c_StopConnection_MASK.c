
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Halt; int Thread; int FirstSock; int Name; } ;
typedef TYPE_1__ CONNECTION ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(CONNECTION *VAR_1, bool VAR_2)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0("Stop Connection: %s\n", VAR_1->Name);


 VAR_1->Halt = 1;
 FUNC_1(VAR_1->FirstSock);

 if (VAR_2 == 0)
 {

  FUNC_2(VAR_1->Thread, VAR_0);
 }
}
