
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int UnicastCount; int UnicastBytes; int BroadcastCount; int BroadcastBytes; } ;
struct TYPE_5__ {int UnicastCount; int UnicastBytes; int BroadcastCount; int BroadcastBytes; } ;
struct TYPE_7__ {TYPE_2__ Send; TYPE_1__ Recv; } ;
typedef TYPE_3__ TRAFFIC ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ,int ,int ) ;

void FUNC_1(TRAFFIC *VAR_0, PACK *VAR_1, UINT VAR_2, UINT VAR_3)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_1, "Ex.Recv.BroadcastBytes", VAR_0->Recv.BroadcastBytes, VAR_2, VAR_3);
 FUNC_0(VAR_1, "Ex.Recv.BroadcastCount", VAR_0->Recv.BroadcastCount, VAR_2, VAR_3);
 FUNC_0(VAR_1, "Ex.Recv.UnicastBytes", VAR_0->Recv.UnicastBytes, VAR_2, VAR_3);
 FUNC_0(VAR_1, "Ex.Recv.UnicastCount", VAR_0->Recv.UnicastCount, VAR_2, VAR_3);
 FUNC_0(VAR_1, "Ex.Send.BroadcastBytes", VAR_0->Send.BroadcastBytes, VAR_2, VAR_3);
 FUNC_0(VAR_1, "Ex.Send.BroadcastCount", VAR_0->Send.BroadcastCount, VAR_2, VAR_3);
 FUNC_0(VAR_1, "Ex.Send.UnicastBytes", VAR_0->Send.UnicastBytes, VAR_2, VAR_3);
 FUNC_0(VAR_1, "Ex.Send.UnicastCount", VAR_0->Send.UnicastCount, VAR_2, VAR_3);
}
