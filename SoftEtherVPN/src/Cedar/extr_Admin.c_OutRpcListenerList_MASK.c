
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {size_t NumPort; int * Errors; int * Enables; int * Ports; } ;
typedef TYPE_1__ RPC_LISTENER_LIST ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ,size_t,size_t) ;
 int FUNC_1 (int *,char*,int ,size_t,size_t) ;
 int FUNC_2 (int *,char*) ;

void FUNC_3(PACK *VAR_0, RPC_LISTENER_LIST *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, "ListenerList");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumPort;VAR_2++)
 {
  FUNC_1(VAR_0, "Ports", VAR_1->Ports[VAR_2], VAR_2, VAR_1->NumPort);
  FUNC_0(VAR_0, "Enables", VAR_1->Enables[VAR_2], VAR_2, VAR_1->NumPort);
  FUNC_0(VAR_0, "Errors", VAR_1->Errors[VAR_2], VAR_2, VAR_1->NumPort);
 }
 FUNC_2(VAR_0, ((void*)0));
}
