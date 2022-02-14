
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int X ;
typedef scalar_t__ UINT ;
struct TYPE_5__ {TYPE_1__* HubDb; } ;
struct TYPE_4__ {int RootCertList; } ;
typedef TYPE_1__ HUBDB ;
typedef TYPE_2__ HUB ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (int ) ;

void FUNC_7(HUB *VAR_1, X *VAR_2)
{
 HUBDB *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = VAR_1->HubDb;
 if (VAR_3 != ((void*)0))
 {
  FUNC_5(VAR_3->RootCertList);
  {
   if (FUNC_4(VAR_3->RootCertList) < VAR_0)
   {
    UINT VAR_4;
    bool VAR_5 = 1;

    for (VAR_4 = 0;VAR_4 < FUNC_4(VAR_3->RootCertList);VAR_4++)
    {
     X *VAR_6 = FUNC_3(VAR_3->RootCertList, VAR_4);
     if (FUNC_1(VAR_6, VAR_2))
     {
      VAR_5 = 0;
      break;
     }
    }

    if (VAR_5)
    {
     FUNC_2(VAR_3->RootCertList, FUNC_0(VAR_2));
    }
   }
  }
  FUNC_6(VAR_3->RootCertList);
 }
}
