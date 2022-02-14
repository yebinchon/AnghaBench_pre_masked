
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_10__ {int DisableDos; } ;
struct TYPE_9__ {int ServerListenerList; int Cedar; } ;
struct TYPE_8__ {scalar_t__ Port; int Enabled; int DisableDos; TYPE_5__* Listener; } ;
typedef TYPE_1__ SERVER_LISTENER ;
typedef TYPE_2__ SERVER ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_5__* FUNC_3 (int ,int ,scalar_t__) ;
 TYPE_1__* FUNC_4 (int) ;

bool FUNC_5(SERVER *VAR_1, UINT VAR_2, bool VAR_3, bool VAR_4)
{
 SERVER_LISTENER *VAR_5;
 UINT VAR_6;

 if (VAR_1 == ((void*)0) || VAR_2 == 0)
 {
  return 0;
 }


 for (VAR_6 = 0;VAR_6 < FUNC_2(VAR_1->ServerListenerList);VAR_6++)
 {
  VAR_5 = FUNC_1(VAR_1->ServerListenerList, VAR_6);
  if (VAR_5->Port == VAR_2)
  {

   return 0;
  }
 }


 VAR_5 = FUNC_4(sizeof(SERVER_LISTENER));
 VAR_5->Enabled = VAR_3;
 VAR_5->Port = VAR_2;
 VAR_5->DisableDos = VAR_4;

 if (VAR_5->Enabled)
 {

  VAR_5->Listener = FUNC_3(VAR_1->Cedar, VAR_0, VAR_5->Port);
  if (VAR_5->Listener != ((void*)0))
  {
   VAR_5->Listener->DisableDos = VAR_5->DisableDos;
  }
 }

 FUNC_0(VAR_1->ServerListenerList, VAR_5);

 return 1;
}
