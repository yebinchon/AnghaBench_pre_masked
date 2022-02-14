
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {int DisableDos; } ;
struct TYPE_8__ {int Cedar; } ;
struct TYPE_7__ {int Enabled; int DisableDos; TYPE_6__* Listener; int Port; } ;
typedef TYPE_1__ SERVER_LISTENER ;
typedef TYPE_2__ SERVER ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (int ,int ,int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,scalar_t__) ;

bool FUNC_2(SERVER *VAR_1, UINT VAR_2)
{
 SERVER_LISTENER *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == 0)
 {
  return 0;
 }


 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (VAR_3->Enabled)
 {

  return 1;
 }


 VAR_3->Listener = FUNC_0(VAR_1->Cedar, VAR_0, VAR_3->Port);
 if (VAR_3->Listener == ((void*)0))
 {

  return 0;
 }

 VAR_3->Listener->DisableDos = VAR_3->DisableDos;

 VAR_3->Enabled = 1;

 return 1;
}
