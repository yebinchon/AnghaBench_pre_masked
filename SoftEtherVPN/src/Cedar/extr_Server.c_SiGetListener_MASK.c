
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {int ServerListenerList; } ;
struct TYPE_6__ {scalar_t__ Port; } ;
typedef TYPE_1__ SERVER_LISTENER ;
typedef TYPE_2__ SERVER ;


 TYPE_1__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

SERVER_LISTENER *FUNC_2(SERVER *VAR_0, UINT VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  return ((void*)0);
 }

 for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_0->ServerListenerList);VAR_2++)
 {
  SERVER_LISTENER *VAR_3 = FUNC_0(VAR_0->ServerListenerList, VAR_2);
  if (VAR_3->Port == VAR_1)
  {
   return VAR_3;
  }
 }

 return ((void*)0);
}
