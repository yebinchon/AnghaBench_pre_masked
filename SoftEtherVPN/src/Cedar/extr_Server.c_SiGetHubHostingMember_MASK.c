
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int name ;
typedef scalar_t__ UINT ;
struct TYPE_24__ {int HubList; scalar_t__ Me; } ;
struct TYPE_23__ {char* Name; scalar_t__ Type; } ;
struct TYPE_22__ {char* Name; } ;
struct TYPE_21__ {int FarmMemberList; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ HUB_LIST ;
typedef TYPE_3__ HUB ;
typedef TYPE_4__ FARM_MEMBER ;
typedef int CONNECTION ;


 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 TYPE_2__* FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,TYPE_4__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_4__*,TYPE_3__*) ;
 TYPE_4__* FUNC_7 (TYPE_1__*,int *,TYPE_3__*) ;
 int FUNC_8 (char*,int,char*) ;
 int FUNC_9 (int ) ;

FARM_MEMBER *FUNC_10(SERVER *VAR_2, HUB *VAR_3, bool VAR_4, CONNECTION *VAR_5)
{
 FARM_MEMBER *VAR_6 = ((void*)0);
 char VAR_7[VAR_1];
 UINT VAR_8;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_8(VAR_7, sizeof(VAR_7), VAR_3->Name);

 if (VAR_3->Type == VAR_0)
 {

  if (VAR_4 == 0)
  {
   VAR_6 = FUNC_7(VAR_2, VAR_5, VAR_3);
  }
  else
  {
   UINT VAR_9;
   VAR_6 = ((void*)0);

   for (VAR_9 = 0;VAR_9 < FUNC_1(VAR_2->FarmMemberList);VAR_9++)
   {
    FARM_MEMBER *VAR_10 = FUNC_0(VAR_2->FarmMemberList, VAR_9);
    if (VAR_10->Me)
    {
     VAR_6 = VAR_10;
     break;
    }
   }
  }
 }
 else
 {

  for (VAR_8 = 0;VAR_8 < FUNC_1(VAR_2->FarmMemberList);VAR_8++)
  {
   FARM_MEMBER *VAR_11 = FUNC_0(VAR_2->FarmMemberList, VAR_8);
   HUB_LIST *VAR_12, VAR_13;
   FUNC_8(VAR_13.Name, sizeof(VAR_13.Name), VAR_7);
   FUNC_2(VAR_11->HubList);
   {
    VAR_12 = FUNC_3(VAR_11->HubList, &VAR_13);
    if (VAR_12 != ((void*)0))
    {

     VAR_6 = VAR_11;
    }
   }
   FUNC_9(VAR_11->HubList);
  }

  if (VAR_6 == ((void*)0))
  {

   FARM_MEMBER *VAR_14;


   VAR_6 = FUNC_7(VAR_2, VAR_5, VAR_3);

   VAR_14 = VAR_6;
   if (VAR_14 != ((void*)0))
   {

    FUNC_4(VAR_2, VAR_7);
    FUNC_5(VAR_2, VAR_14, VAR_3);
    FUNC_6(VAR_2, VAR_14, VAR_3);
   }
  }
 }

 return VAR_6;
}
