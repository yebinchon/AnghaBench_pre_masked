
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int name ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {int lock; } ;
struct TYPE_6__ {int AccountList; } ;
typedef int FOLDER ;
typedef TYPE_1__ CLIENT ;
typedef TYPE_2__ ACCOUNT ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (char*,int,char*,scalar_t__) ;
 TYPE_2__* FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

void FUNC_9(CLIENT *VAR_1, FOLDER *VAR_2)
{
 char VAR_3[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_6(VAR_1->AccountList);
 {
  UINT VAR_4;
  for (VAR_4 = 0;VAR_4 < FUNC_4(VAR_1->AccountList);VAR_4++)
  {
   ACCOUNT *VAR_5 = FUNC_3(VAR_1->AccountList, VAR_4);

   {
    FUNC_2(VAR_3, sizeof(VAR_3), "Account%u", VAR_4);
    FUNC_5(VAR_5->lock);
    {
     FUNC_1(FUNC_0(VAR_2, VAR_3), VAR_5);
    }
    FUNC_7(VAR_5->lock);
   }
  }
 }
 FUNC_8(VAR_1->AccountList);
}
