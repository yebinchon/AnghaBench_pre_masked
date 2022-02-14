
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int UnicastCount; int UnicastBytes; int BroadcastCount; int BroadcastBytes; } ;
struct TYPE_6__ {int UnicastCount; int UnicastBytes; int BroadcastCount; int BroadcastBytes; } ;
struct TYPE_7__ {TYPE_1__ Send; TYPE_2__ Recv; } ;
typedef TYPE_3__ TRAFFIC ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;

void FUNC_1(PACK *VAR_0, TRAFFIC *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "Recv.BroadcastBytes", VAR_1->Recv.BroadcastBytes);
 FUNC_0(VAR_0, "Recv.BroadcastCount", VAR_1->Recv.BroadcastCount);
 FUNC_0(VAR_0, "Recv.UnicastBytes", VAR_1->Recv.UnicastBytes);
 FUNC_0(VAR_0, "Recv.UnicastCount", VAR_1->Recv.UnicastCount);
 FUNC_0(VAR_0, "Send.BroadcastBytes", VAR_1->Send.BroadcastBytes);
 FUNC_0(VAR_0, "Send.BroadcastCount", VAR_1->Send.BroadcastCount);
 FUNC_0(VAR_0, "Send.UnicastBytes", VAR_1->Send.UnicastBytes);
 FUNC_0(VAR_0, "Send.UnicastCount", VAR_1->Send.UnicastCount);
}
