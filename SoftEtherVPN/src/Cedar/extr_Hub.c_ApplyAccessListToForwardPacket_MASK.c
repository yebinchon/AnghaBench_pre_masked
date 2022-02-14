
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_21__ {scalar_t__ DestUsernameHash; scalar_t__ Discard; } ;
struct TYPE_20__ {int AccessList; } ;
struct TYPE_19__ {int GroupnameHash; int UsernameHash; } ;
struct TYPE_18__ {scalar_t__ AccessChecked; } ;
struct TYPE_17__ {TYPE_1__* PacketAdapter; } ;
struct TYPE_16__ {scalar_t__ Param; } ;
typedef TYPE_2__ SESSION ;
typedef TYPE_3__ PKT ;
typedef TYPE_4__ HUB_PA ;
typedef TYPE_5__ HUB ;
typedef TYPE_6__ ACCESS ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_3__*,TYPE_6__*,int ,int ,TYPE_2__*) ;
 TYPE_6__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

bool FUNC_5(HUB *VAR_0, SESSION *VAR_1, SESSION *VAR_2, PKT *VAR_3)
{
 UINT VAR_4;
 bool VAR_5 = 1;
 bool VAR_6 = 1;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_3 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }


 if (VAR_3->AccessChecked)
 {
  return 1;
 }

 FUNC_3(VAR_0->AccessList);
 {
  for (VAR_4 = 0;VAR_4 < FUNC_2(VAR_0->AccessList);VAR_4++)
  {
   ACCESS *VAR_7 = FUNC_1(VAR_0->AccessList, VAR_4);


   if (VAR_7->DestUsernameHash != 0)
   {
    VAR_6 = 0;
   }

   if (VAR_6 == 0)
   {
    if (FUNC_0(VAR_1, VAR_3, VAR_7,
     ((HUB_PA *)VAR_2->PacketAdapter->Param)->UsernameHash,
     ((HUB_PA *)VAR_2->PacketAdapter->Param)->GroupnameHash,
     VAR_2))
    {

     VAR_5 = VAR_7->Discard ? 0 : 1;


     break;
    }
   }
  }
 }
 FUNC_4(VAR_0->AccessList);

 return VAR_5;
}
