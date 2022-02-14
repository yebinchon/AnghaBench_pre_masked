
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {int Id; } ;
struct TYPE_6__ {int AccessList; } ;
typedef TYPE_1__ HUB ;
typedef int FOLDER ;
typedef TYPE_2__ ACCESS ;


 int FUNC_0 (int *,char*) ;
 TYPE_2__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(FOLDER *VAR_1, HUB *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_2->AccessList);
 {
  UINT VAR_3;
  for (VAR_3 = 0;VAR_3 < FUNC_2(VAR_2->AccessList);VAR_3++)
  {
   ACCESS *VAR_4 = FUNC_1(VAR_2->AccessList, VAR_3);
   char VAR_5[VAR_0];
   FUNC_5(VAR_5, VAR_4->Id);
   FUNC_4(FUNC_0(VAR_1, VAR_5), VAR_4);
  }
 }
 FUNC_6(VAR_2->AccessList);
}
