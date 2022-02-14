
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {void* UnicastCount; void* UnicastBytes; void* BroadcastCount; void* BroadcastBytes; } ;
struct TYPE_6__ {void* UnicastCount; void* UnicastBytes; void* BroadcastCount; void* BroadcastBytes; } ;
struct TYPE_8__ {TYPE_2__ Send; TYPE_1__ Recv; } ;
typedef TYPE_3__ TRAFFIC ;
typedef int PACK ;


 void* FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;

void FUNC_2(TRAFFIC *VAR_0, PACK *VAR_1, UINT VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0, sizeof(TRAFFIC));
 VAR_0->Recv.BroadcastBytes = FUNC_0(VAR_1, "Ex.Recv.BroadcastBytes", VAR_2);
 VAR_0->Recv.BroadcastCount = FUNC_0(VAR_1, "Ex.Recv.BroadcastCount", VAR_2);
 VAR_0->Recv.UnicastBytes = FUNC_0(VAR_1, "Ex.Recv.UnicastBytes", VAR_2);
 VAR_0->Recv.UnicastCount = FUNC_0(VAR_1, "Ex.Recv.UnicastCount", VAR_2);
 VAR_0->Send.BroadcastBytes = FUNC_0(VAR_1, "Ex.Send.BroadcastBytes", VAR_2);
 VAR_0->Send.BroadcastCount = FUNC_0(VAR_1, "Ex.Send.BroadcastCount", VAR_2);
 VAR_0->Send.UnicastBytes = FUNC_0(VAR_1, "Ex.Send.UnicastBytes", VAR_2);
 VAR_0->Send.UnicastCount = FUNC_0(VAR_1, "Ex.Send.UnicastCount", VAR_2);
}
