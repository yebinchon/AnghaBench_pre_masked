
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int hubname ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int Name; TYPE_1__* Cedar; } ;
struct TYPE_8__ {scalar_t__ ServerType; int * FarmMemberList; } ;
struct TYPE_7__ {TYPE_2__* Server; } ;
typedef TYPE_2__ SERVER ;
typedef int LIST ;
typedef TYPE_3__ HUB ;
typedef int FARM_MEMBER ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (TYPE_2__*,int *,TYPE_3__*) ;
 int FUNC_8 (char*,int,int ) ;
 int FUNC_9 (int *) ;

void FUNC_10(HUB *VAR_2)
{
 SERVER *VAR_3;
 char VAR_4[VAR_0 + 1];
 UINT VAR_5;
 LIST *VAR_6;

 if (VAR_2 == ((void*)0) || VAR_2->Cedar->Server == ((void*)0) || VAR_2->Cedar->Server->ServerType != VAR_1)
 {

  return;
 }

 VAR_3 = VAR_2->Cedar->Server;

 if (VAR_3->FarmMemberList == ((void*)0))
 {
  return;
 }

 FUNC_8(VAR_4, sizeof(VAR_4), VAR_2->Name);

 VAR_6 = FUNC_5(((void*)0));

 FUNC_4(VAR_3->FarmMemberList);
 {
  while (1)
  {
   bool VAR_7 = 1;


   for (VAR_5 = 0;VAR_5 < FUNC_3(VAR_3->FarmMemberList);VAR_5++)
   {
    FARM_MEMBER *VAR_8 = FUNC_2(VAR_3->FarmMemberList, VAR_5);

    if (FUNC_1(VAR_6, VAR_8) == 0)
    {
     FUNC_0(VAR_6, VAR_8);
     VAR_7 = 0;

     FUNC_7(VAR_3, VAR_8, VAR_2);

     break;
    }
   }

   if (VAR_7)
   {
    break;
   }

   FUNC_9(VAR_3->FarmMemberList);
   FUNC_4(VAR_3->FarmMemberList);
  }
 }
 FUNC_9(VAR_3->FarmMemberList);

 FUNC_6(VAR_6);
}
