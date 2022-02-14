
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
struct TYPE_8__ {int EnableUdpRecovery; scalar_t__ MaxConnection; scalar_t__ NextConnectionTime; TYPE_2__* ClientOption; TYPE_1__* Connection; scalar_t__ Halt; scalar_t__ IsRUDPSession; scalar_t__ ServerMode; } ;
struct TYPE_7__ {scalar_t__ AdditionalConnectionInterval; } ;
struct TYPE_6__ {scalar_t__ Protocol; scalar_t__ AdditionalConnectionFailedCounter; int CurrentNumConnection; } ;
typedef TYPE_3__ SESSION ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 () ;

void FUNC_3(SESSION *VAR_2)
{

 if (VAR_2 == ((void*)0))
 {
  return;
 }

 if (VAR_2->ServerMode)
 {

  return;
 }
 if (VAR_2->Connection->Protocol != VAR_0)
 {

  return;
 }
 if (VAR_2->IsRUDPSession && VAR_2->EnableUdpRecovery == 0)
 {

  return;
 }

 if (VAR_2->IsRUDPSession && (VAR_2->Connection->AdditionalConnectionFailedCounter > VAR_1))
 {

  return;
 }

 while (1)
 {
  if (VAR_2->Halt)
  {
   return;
  }


  if (FUNC_0(VAR_2->Connection->CurrentNumConnection) < VAR_2->MaxConnection)
  {

   UINT64 VAR_3 = FUNC_2();



   if (VAR_2->NextConnectionTime == 0 ||
    VAR_2->ClientOption->AdditionalConnectionInterval == 0 ||
    (VAR_2->NextConnectionTime <= VAR_3))
   {

    VAR_2->NextConnectionTime = VAR_3 + VAR_2->ClientOption->AdditionalConnectionInterval * (UINT64)1000U;
    FUNC_1(VAR_2);
   }
   else
   {
    break;
   }
  }
  else
  {
   break;
  }
 }
}
