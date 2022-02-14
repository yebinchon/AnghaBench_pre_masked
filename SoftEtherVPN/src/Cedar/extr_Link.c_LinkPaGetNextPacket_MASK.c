
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_11__ {scalar_t__ Size; void* Buf; } ;
struct TYPE_10__ {int SendPacketQueue; int CurrentSendPacketQueueSize; scalar_t__* StopAllLinkFlag; scalar_t__ Halting; } ;
struct TYPE_9__ {TYPE_1__* PacketAdapter; } ;
struct TYPE_8__ {scalar_t__ Param; } ;
typedef TYPE_2__ SESSION ;
typedef TYPE_3__ LINK ;
typedef TYPE_4__ BLOCK ;


 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

UINT FUNC_4(SESSION *VAR_1, void **VAR_2)
{
 LINK *VAR_3;
 UINT VAR_4 = 0;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || (VAR_3 = (LINK *)VAR_1->PacketAdapter->Param) == ((void*)0))
 {
  return VAR_0;
 }

 if (VAR_3->Halting || (*VAR_3->StopAllLinkFlag))
 {
  return VAR_0;
 }

 FUNC_2(VAR_3->SendPacketQueue);
 {
  BLOCK *VAR_5 = FUNC_1(VAR_3->SendPacketQueue);

  if (VAR_5 != ((void*)0))
  {

   *VAR_2 = VAR_5->Buf;
   VAR_4 = VAR_5->Size;

   VAR_3->CurrentSendPacketQueueSize -= VAR_5->Size;


   FUNC_0(VAR_5);
  }
 }
 FUNC_3(VAR_3->SendPacketQueue);

 return VAR_4;
}
