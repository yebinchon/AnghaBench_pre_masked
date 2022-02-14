
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {int NumPort; void** Errors; void** Enables; int * Ports; } ;
typedef TYPE_1__ RPC_LISTENER_LIST ;
typedef int PACK ;


 void* FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (TYPE_1__*,int) ;
 void* FUNC_4 (int) ;

void FUNC_5(RPC_LISTENER_LIST *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0, sizeof(RPC_LISTENER_LIST));
 VAR_0->NumPort = FUNC_1(VAR_1, "Ports");
 VAR_0->Ports = FUNC_4(sizeof(UINT) * VAR_0->NumPort);
 VAR_0->Enables = FUNC_4(sizeof(UINT) * VAR_0->NumPort);
 VAR_0->Errors = FUNC_4(sizeof(UINT) * VAR_0->NumPort);
 for (VAR_2 = 0;VAR_2 < VAR_0->NumPort;VAR_2++)
 {
  VAR_0->Ports[VAR_2] = FUNC_2(VAR_1, "Ports", VAR_2);
  VAR_0->Enables[VAR_2] = FUNC_0(VAR_1, "Enables", VAR_2);
  VAR_0->Errors[VAR_2] = FUNC_0(VAR_1, "Errors", VAR_2);
 }
}
