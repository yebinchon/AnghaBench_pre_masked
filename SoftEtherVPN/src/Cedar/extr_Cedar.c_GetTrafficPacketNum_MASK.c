
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
struct TYPE_6__ {scalar_t__ UnicastCount; scalar_t__ BroadcastCount; } ;
struct TYPE_5__ {scalar_t__ UnicastCount; scalar_t__ BroadcastCount; } ;
struct TYPE_7__ {TYPE_2__ Send; TYPE_1__ Recv; } ;
typedef TYPE_3__ TRAFFIC ;



UINT64 FUNC_0(TRAFFIC *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 return VAR_0->Recv.BroadcastCount + VAR_0->Recv.UnicastCount +
  VAR_0->Send.BroadcastCount + VAR_0->Send.UnicastCount;
}
