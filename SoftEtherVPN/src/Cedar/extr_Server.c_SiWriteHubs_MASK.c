
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_11__ {int HubList; } ;
struct TYPE_10__ {int lock; int Name; int ref; } ;
struct TYPE_9__ {TYPE_3__* Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ HUB ;
typedef int FOLDER ;
typedef TYPE_3__ CEDAR ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__**) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 TYPE_2__** FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;

void FUNC_12(FOLDER *VAR_0, SERVER *VAR_1)
{
 UINT VAR_2;
 FOLDER *VAR_3;
 CEDAR *VAR_4;
 UINT VAR_5;
 HUB **VAR_6;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }
 VAR_4 = VAR_1->Cedar;

 FUNC_5(VAR_4->HubList);
 {
  VAR_6 = FUNC_8(VAR_4->HubList);
  VAR_5 = FUNC_3(VAR_4->HubList);

  for (VAR_2 = 0;VAR_2 < VAR_5;VAR_2++)
  {
   FUNC_0(VAR_6[VAR_2]->ref);
  }
 }
 FUNC_10(VAR_4->HubList);

 for (VAR_2 = 0;VAR_2 < VAR_5;VAR_2++)
 {
  HUB *VAR_7 = VAR_6[VAR_2];

  FUNC_4(VAR_7->lock);
  {
   VAR_3 = FUNC_1(VAR_0, VAR_7->Name);
   FUNC_7(VAR_3, VAR_7);
  }
  FUNC_9(VAR_7->lock);

  FUNC_6(VAR_7);

  if ((VAR_2 % 30) == 1)
  {
   FUNC_11();
  }
 }

 FUNC_2(VAR_6);
}
