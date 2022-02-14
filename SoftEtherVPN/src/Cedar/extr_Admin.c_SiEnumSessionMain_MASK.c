
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int tmp ;
typedef int hubname ;
typedef scalar_t__ UINT ;
struct TYPE_20__ {int Me; } ;
struct TYPE_19__ {char* HubName; } ;
struct TYPE_18__ {scalar_t__ ServerType; int FarmMemberList; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_ENUM_SESSION ;
typedef int LIST ;
typedef TYPE_3__ FARM_MEMBER ;


 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_9 (TYPE_1__*,TYPE_3__*,char*,TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*,char*,TYPE_2__*) ;
 int FUNC_11 (char*,int,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_2__*,int) ;

void FUNC_14(SERVER *VAR_3, RPC_ENUM_SESSION *VAR_4)
{
 char VAR_5[VAR_1 + 1];
 UINT VAR_6 = VAR_0;
 UINT VAR_7;
 UINT VAR_8;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 FUNC_11(VAR_5, sizeof(VAR_5), VAR_4->HubName);

 FUNC_2(VAR_4);
 FUNC_13(VAR_4, sizeof(RPC_ENUM_SESSION));
 FUNC_11(VAR_4->HubName, sizeof(VAR_4->HubName), VAR_5);


 VAR_7 = 0;
 FUNC_10(VAR_3, VAR_5, VAR_4);

 if (VAR_3->ServerType == VAR_2)
 {
  LIST *VAR_9;

  VAR_9 = FUNC_7(((void*)0));


  FUNC_6(VAR_3->FarmMemberList);
  {
   while (1)
   {
    bool VAR_10 = 1;

    for (VAR_8 = 0;VAR_8 < FUNC_5(VAR_3->FarmMemberList);VAR_8++)
    {
     FARM_MEMBER *VAR_11 = FUNC_4(VAR_3->FarmMemberList, VAR_8);

     if (FUNC_3(VAR_9, VAR_11) == 0)
     {
      FUNC_0(VAR_9, VAR_11);
      VAR_10 = 0;

      if (VAR_11->Me == 0)
      {
       RPC_ENUM_SESSION VAR_12;

       FUNC_13(&VAR_12, sizeof(VAR_12));

       FUNC_9(VAR_3, VAR_11, VAR_5, &VAR_12);

       FUNC_1(VAR_4, &VAR_12);
       FUNC_2(&VAR_12);
      }

      break;
     }
    }

    if (VAR_10)
    {
     break;
    }

    FUNC_12(VAR_3->FarmMemberList);
    FUNC_6(VAR_3->FarmMemberList);
   }
  }
  FUNC_12(VAR_3->FarmMemberList);

  FUNC_8(VAR_9);
 }
}
