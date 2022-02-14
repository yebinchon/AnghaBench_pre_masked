
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_11__ {scalar_t__ Size; void* Buf; scalar_t__ IsFlooding; } ;
struct TYPE_10__ {int PacketQueue; } ;
struct TYPE_9__ {int Cedar; TYPE_1__* PacketAdapter; } ;
struct TYPE_8__ {scalar_t__ Param; } ;
typedef TYPE_2__ SESSION ;
typedef TYPE_3__ HUB_PA ;
typedef TYPE_4__ BLOCK ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

UINT FUNC_5(SESSION *VAR_0, void **VAR_1)
{
 UINT VAR_2 = 0;
 HUB_PA *VAR_3 = (HUB_PA *)VAR_0->PacketAdapter->Param;


 FUNC_3(VAR_3->PacketQueue);
 {
  BLOCK *VAR_4 = FUNC_2(VAR_3->PacketQueue);
  if (VAR_4 == ((void*)0))
  {

   VAR_2 = 0;
  }
  else
  {
   if (VAR_4->IsFlooding)
   {
    FUNC_0(VAR_0->Cedar, -((int)VAR_4->Size));
   }


   *VAR_1 = VAR_4->Buf;
   VAR_2 = VAR_4->Size;

   FUNC_1(VAR_4);
  }
 }
 FUNC_4(VAR_3->PacketQueue);

 return VAR_2;
}
