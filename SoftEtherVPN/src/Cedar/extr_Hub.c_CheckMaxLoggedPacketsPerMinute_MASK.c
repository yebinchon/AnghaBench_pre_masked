
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_5__ {scalar_t__ MaxLoggedPacketsPerMinuteStartTick; scalar_t__ CurrentNumPackets; scalar_t__ L3SwitchMode; scalar_t__ LinkModeClient; scalar_t__ LinkModeServer; scalar_t__ BridgeMode; scalar_t__ SecureNATMode; TYPE_1__* Policy; } ;
struct TYPE_4__ {scalar_t__ NoBroadcastLimiter; } ;
typedef TYPE_2__ SESSION ;



bool FUNC_0(SESSION *VAR_0, UINT VAR_1, UINT64 VAR_2)
{
 UINT64 VAR_3 = 60 * 1000;

 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  return 1;
 }

 if ((VAR_0->Policy != ((void*)0) && VAR_0->Policy->NoBroadcastLimiter) ||
  VAR_0->SecureNATMode || VAR_0->BridgeMode || VAR_0->LinkModeServer || VAR_0->LinkModeClient ||
  VAR_0->L3SwitchMode)
 {
  return 1;
 }

 if (VAR_0->MaxLoggedPacketsPerMinuteStartTick == 0 ||
  ((VAR_0->MaxLoggedPacketsPerMinuteStartTick + VAR_3) <= VAR_2))
 {
  VAR_0->MaxLoggedPacketsPerMinuteStartTick = VAR_2;
  VAR_0->CurrentNumPackets = 0;
 }

 VAR_0->CurrentNumPackets++;
 if (VAR_0->CurrentNumPackets > VAR_1)
 {
  return 0;
 }

 return 1;
}
