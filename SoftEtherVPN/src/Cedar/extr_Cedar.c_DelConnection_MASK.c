
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ConnectionList; } ;
struct TYPE_7__ {int Name; } ;
typedef TYPE_1__ CONNECTION ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

void FUNC_5(CEDAR *VAR_0, CONNECTION *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0->ConnectionList);
 {
  FUNC_0("Connection %s Deleted from Cedar.\n", VAR_1->Name);
  if (FUNC_1(VAR_0->ConnectionList, VAR_1))
  {
   FUNC_3(VAR_1);
  }
 }
 FUNC_4(VAR_0->ConnectionList);
}
