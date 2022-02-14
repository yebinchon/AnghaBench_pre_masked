
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {int L3SwList; } ;
struct TYPE_8__ {int lock; int Name; } ;
struct TYPE_7__ {TYPE_3__* Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ L3SW ;
typedef int FOLDER ;
typedef TYPE_3__ CEDAR ;


 int * FUNC_0 (int *,int ) ;
 TYPE_2__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(FOLDER *VAR_0, SERVER *VAR_1)
{
 UINT VAR_2;
 FOLDER *VAR_3;
 CEDAR *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }
 VAR_4 = VAR_1->Cedar;

 FUNC_4(VAR_4->L3SwList);
 {
  for (VAR_2 = 0;VAR_2 < FUNC_2(VAR_4->L3SwList);VAR_2++)
  {
   L3SW *VAR_5 = FUNC_1(VAR_4->L3SwList, VAR_2);

   FUNC_3(VAR_5->lock);
   {
    VAR_3 = FUNC_0(VAR_0, VAR_5->Name);

    FUNC_5(VAR_3, VAR_5);
   }
   FUNC_6(VAR_5->lock);
  }
 }
 FUNC_7(VAR_4->L3SwList);
}
