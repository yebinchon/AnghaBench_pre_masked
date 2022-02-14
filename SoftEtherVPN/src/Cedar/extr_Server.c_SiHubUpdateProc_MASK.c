
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_16__ {int Me; } ;
struct TYPE_15__ {int LastVersion; int CurrentVersion; int Offline; int Type; int Name; TYPE_1__* Cedar; } ;
struct TYPE_14__ {scalar_t__ ServerType; int * FarmMemberList; } ;
struct TYPE_13__ {TYPE_2__* Server; } ;
typedef TYPE_2__ SERVER ;
typedef int LIST ;
typedef TYPE_3__ HUB ;
typedef TYPE_4__ FARM_MEMBER ;


 int FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 (char*,int ,int,int ,int) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_8 (TYPE_2__*,TYPE_4__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int *) ;

void FUNC_11(HUB *VAR_1)
{
 SERVER *VAR_2;
 UINT VAR_3;

 if (VAR_1 == ((void*)0) || VAR_1->Cedar == ((void*)0) || VAR_1->Cedar->Server == ((void*)0) || VAR_1->Cedar->Server->ServerType != VAR_0)
 {
  return;
 }

 VAR_2 = VAR_1->Cedar->Server;

 if (VAR_2->FarmMemberList == ((void*)0))
 {
  return;
 }

 if (VAR_1->LastVersion != VAR_1->CurrentVersion || VAR_1->CurrentVersion == 0)
 {
  LIST *VAR_4;
  if (VAR_1->CurrentVersion == 0)
  {
   VAR_1->CurrentVersion = 1;
  }
  VAR_1->LastVersion = VAR_1->CurrentVersion;

  FUNC_1("SiHubUpdateProc HUB=%s, Ver=%u, Type=%u, Offline=%u\n", VAR_1->Name, VAR_1->CurrentVersion,
   VAR_1->Type, VAR_1->Offline);

  VAR_4 = FUNC_6(((void*)0));

  FUNC_5(VAR_2->FarmMemberList);
  {
   while (1)
   {
    bool VAR_5 = 1;

    for (VAR_3 = 0;VAR_3 < FUNC_4(VAR_2->FarmMemberList);VAR_3++)
    {
     FARM_MEMBER *VAR_6 = FUNC_3(VAR_2->FarmMemberList, VAR_3);

     if (FUNC_2(VAR_4, VAR_6) == 0)
     {
      FUNC_0(VAR_4, VAR_6);
      VAR_5 = 0;

      if (VAR_6->Me == 0)
      {
       FUNC_8(VAR_2, VAR_6, VAR_1);
      }

      break;
     }
    }

    if (VAR_5)
    {
     break;
    }

    FUNC_10(VAR_2->FarmMemberList);
    FUNC_5(VAR_2->FarmMemberList);
   }
  }
  FUNC_10(VAR_2->FarmMemberList);

  FUNC_7(VAR_4);
 }

 if (VAR_1->Offline == 0)
 {
  FUNC_9(VAR_1);
 }
}
