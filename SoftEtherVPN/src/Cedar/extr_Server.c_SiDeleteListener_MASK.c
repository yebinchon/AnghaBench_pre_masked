
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_10__ {int ServerListenerList; } ;
struct TYPE_9__ {int * Listener; } ;
typedef TYPE_1__ SERVER_LISTENER ;
typedef TYPE_2__ SERVER ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 TYPE_1__* FUNC_4 (TYPE_2__*,scalar_t__) ;

bool FUNC_5(SERVER *VAR_0, UINT VAR_1)
{
 SERVER_LISTENER *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  return 0;
 }

 VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
 {
  return 0;
 }


 FUNC_3(VAR_0, VAR_1);

 if (VAR_2->Listener != ((void*)0))
 {
  FUNC_2(VAR_2->Listener);
 }

 FUNC_0(VAR_0->ServerListenerList, VAR_2);
 FUNC_1(VAR_2);

 return 1;
}
