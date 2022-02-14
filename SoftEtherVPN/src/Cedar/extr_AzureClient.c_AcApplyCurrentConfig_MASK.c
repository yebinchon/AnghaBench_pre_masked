
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int InternetSetting; int CurrentHostName; } ;
struct TYPE_12__ {int IsEnabled; int Event; int Lock; TYPE_1__* CurrentSock; TYPE_6__ DDnsStatus; } ;
struct TYPE_11__ {int InternetSetting; int CurrentHostName; } ;
struct TYPE_10__ {int ref; } ;
typedef TYPE_1__ SOCK ;
typedef int INTERNET_SETTING ;
typedef TYPE_2__ DDNS_CLIENT_STATUS ;
typedef TYPE_3__ AZURE_CLIENT ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_6__*,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;

void FUNC_9(AZURE_CLIENT *VAR_0, DDNS_CLIENT_STATUS *VAR_1)
{
 bool VAR_2 = 0;
 SOCK *VAR_3 = ((void*)0);

 if (VAR_0 == ((void*)0))
 {
  return;
 }


 FUNC_4(VAR_0->Lock);
 {
  if (VAR_1 != ((void*)0))
  {
   if (FUNC_7(VAR_0->DDnsStatus.CurrentHostName, VAR_1->CurrentHostName) != 0)
   {

    VAR_2 = 1;
   }

   if (FUNC_1(&VAR_0->DDnsStatus.InternetSetting, &VAR_1->InternetSetting, sizeof(INTERNET_SETTING)) != 0)
   {

    VAR_2 = 1;
   }

   FUNC_2(&VAR_0->DDnsStatus, VAR_1, sizeof(DDNS_CLIENT_STATUS));
  }

  if (VAR_0->IsEnabled == 0)
  {

   VAR_2 = 1;
  }

  if (VAR_2)
  {
   if (VAR_0->CurrentSock != ((void*)0))
   {
    VAR_3 = VAR_0->CurrentSock;
    FUNC_0(VAR_3->ref);
   }
  }
 }
 FUNC_8(VAR_0->Lock);

 if (VAR_3 != ((void*)0))
 {
  FUNC_3(VAR_3);
  FUNC_5(VAR_3);
 }

 FUNC_6(VAR_0->Event);
}
