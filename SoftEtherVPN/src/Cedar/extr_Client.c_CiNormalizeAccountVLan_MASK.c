
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_13__ {int lock; TYPE_1__* ClientOption; } ;
struct TYPE_12__ {int AccountList; } ;
struct TYPE_11__ {int DeviceName; } ;
typedef TYPE_2__ CLIENT ;
typedef TYPE_3__ ACCOUNT ;


 char* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char*) ;
 TYPE_3__* FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

void FUNC_13(CLIENT *VAR_0)
{
 bool VAR_1 = 0;
 char *VAR_2;
 UINT VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_0(VAR_0);

 if (VAR_2 != ((void*)0))
 {
  FUNC_9(VAR_0->AccountList);
  {
   for (VAR_3 = 0;VAR_3 < FUNC_7(VAR_0->AccountList);VAR_3++)
   {
    ACCOUNT *VAR_4 = FUNC_6(VAR_0->AccountList, VAR_3);

    FUNC_8(VAR_4->lock);
    {
     if (VAR_4->ClientOption != ((void*)0))
     {
      if (FUNC_1(VAR_0, VAR_4->ClientOption->DeviceName) == 0)
      {
       FUNC_10(VAR_4->ClientOption->DeviceName, sizeof(VAR_4->ClientOption->DeviceName),
        VAR_2);
       VAR_1 = 1;
      }
     }
    }
    FUNC_11(VAR_4->lock);
   }
  }
  FUNC_12(VAR_0->AccountList);

  FUNC_5(VAR_2);
 }

 if (VAR_1)
 {
  FUNC_2(VAR_0);
  FUNC_4(VAR_0);
  FUNC_3(VAR_0);
 }
}
