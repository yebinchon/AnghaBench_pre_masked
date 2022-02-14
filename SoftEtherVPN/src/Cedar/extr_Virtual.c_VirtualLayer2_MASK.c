
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int MacAddress; scalar_t__ UseDhcp; } ;
typedef TYPE_1__ VH ;
struct TYPE_14__ {int TypeL3; scalar_t__ TypeL4; scalar_t__ TypeL7; int MacAddressDest; scalar_t__ BroadcastPacket; } ;
typedef TYPE_2__ PKT ;


 scalar_t__ FUNC_0 (int ,int ,int) ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;

void FUNC_5(VH *VAR_2, PKT *VAR_3)
{
 bool VAR_4;

 if (VAR_3 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }


 if (FUNC_4(VAR_2, VAR_3) == 0)
 {

  return;
 }

 VAR_4 = 0;
 if (VAR_3->TypeL3 == 128 && VAR_3->TypeL4 == VAR_0 && VAR_3->TypeL7 == VAR_1)
 {
  if (VAR_2->UseDhcp)
  {

   if (VAR_3->BroadcastPacket || FUNC_0(VAR_3->MacAddressDest, VAR_2->MacAddress, 6) == 0)
   {

    FUNC_2(VAR_2, VAR_3);
    VAR_4 = 1;
   }
  }
 }

 if (VAR_4 == 0)
 {

  switch (VAR_3->TypeL3)
  {
  case 129:
   FUNC_1(VAR_2, VAR_3);
   break;

  case 128:
   FUNC_3(VAR_2, VAR_3);
   break;
  }
 }
}
