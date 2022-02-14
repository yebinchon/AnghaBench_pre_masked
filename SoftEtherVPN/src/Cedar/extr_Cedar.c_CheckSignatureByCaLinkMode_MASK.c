
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int X ;
struct TYPE_9__ {TYPE_1__* HubDb; } ;
struct TYPE_8__ {TYPE_4__* Hub; } ;
struct TYPE_7__ {int LinkModeClient; TYPE_3__* Link; } ;
struct TYPE_6__ {int RootCertList; } ;
typedef TYPE_2__ SESSION ;
typedef TYPE_3__ LINK ;
typedef TYPE_4__ HUB ;


 int * FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

bool FUNC_3(SESSION *VAR_0, X *VAR_1)
{
 LINK *VAR_2;
 HUB *VAR_3;
 bool VAR_4 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (VAR_0->LinkModeClient == 0 || (VAR_2 = VAR_0->Link) == ((void*)0))
 {
  return 0;
 }

 VAR_3 = VAR_2->Hub;

 if (VAR_3->HubDb != ((void*)0))
 {
  FUNC_1(VAR_3->HubDb->RootCertList);
  {
   X *VAR_5;
   VAR_5 = FUNC_0(VAR_3->HubDb->RootCertList, VAR_1);
   if (VAR_5 != ((void*)0))
   {
    VAR_4 = 1;
   }
  }
  FUNC_2(VAR_3->HubDb->RootCertList);
 }

 return VAR_4;
}
