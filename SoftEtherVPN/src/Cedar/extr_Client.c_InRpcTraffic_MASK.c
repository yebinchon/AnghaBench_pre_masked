
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* UnicastCount; void* UnicastBytes; void* BroadcastCount; void* BroadcastBytes; } ;
struct TYPE_6__ {void* UnicastCount; void* UnicastBytes; void* BroadcastCount; void* BroadcastBytes; } ;
struct TYPE_8__ {TYPE_2__ Send; TYPE_1__ Recv; } ;
typedef TYPE_3__ TRAFFIC ;
typedef int PACK ;


 void* FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_3__*,int) ;

void FUNC_2(TRAFFIC *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0, sizeof(TRAFFIC));
 VAR_0->Recv.BroadcastBytes = FUNC_0(VAR_1, "Recv.BroadcastBytes");
 VAR_0->Recv.BroadcastCount = FUNC_0(VAR_1, "Recv.BroadcastCount");
 VAR_0->Recv.UnicastBytes = FUNC_0(VAR_1, "Recv.UnicastBytes");
 VAR_0->Recv.UnicastCount = FUNC_0(VAR_1, "Recv.UnicastCount");
 VAR_0->Send.BroadcastBytes = FUNC_0(VAR_1, "Send.BroadcastBytes");
 VAR_0->Send.BroadcastCount = FUNC_0(VAR_1, "Send.BroadcastCount");
 VAR_0->Send.UnicastBytes = FUNC_0(VAR_1, "Send.UnicastBytes");
 VAR_0->Send.UnicastCount = FUNC_0(VAR_1, "Send.UnicastCount");
}
