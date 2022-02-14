
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Access; int NoBridge; int NoRouting; int MonitorPort; int MaxConnection; int TimeOut; int FixPassword; } ;
typedef TYPE_1__ POLICY ;



void FUNC_0(POLICY *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_0->Access = 1;
 VAR_0->NoBridge = VAR_0->NoRouting = VAR_0->MonitorPort = 0;
 VAR_0->MaxConnection = 32;
 VAR_0->TimeOut = 20;
 VAR_0->FixPassword = 0;
}
