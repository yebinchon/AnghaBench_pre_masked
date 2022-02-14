
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ UnicastCount; scalar_t__ UnicastBytes; scalar_t__ BroadcastCount; scalar_t__ BroadcastBytes; } ;
struct TYPE_6__ {scalar_t__ UnicastCount; scalar_t__ UnicastBytes; scalar_t__ BroadcastCount; scalar_t__ BroadcastBytes; } ;
struct TYPE_8__ {TYPE_2__ Send; TYPE_1__ Recv; } ;
typedef TYPE_3__ TRAFFIC ;



void FUNC_0(TRAFFIC *VAR_0, TRAFFIC *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_0->Recv.BroadcastBytes += VAR_1->Recv.BroadcastBytes;
 VAR_0->Recv.BroadcastCount += VAR_1->Recv.BroadcastCount;
 VAR_0->Recv.UnicastBytes += VAR_1->Recv.UnicastBytes;
 VAR_0->Recv.UnicastCount += VAR_1->Recv.UnicastCount;

 VAR_0->Send.BroadcastBytes += VAR_1->Send.BroadcastBytes;
 VAR_0->Send.BroadcastCount += VAR_1->Send.BroadcastCount;
 VAR_0->Send.UnicastBytes += VAR_1->Send.UnicastBytes;
 VAR_0->Send.UnicastCount += VAR_1->Send.UnicastCount;
}
