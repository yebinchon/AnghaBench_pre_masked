
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_16__ {int HubList; } ;
struct TYPE_15__ {TYPE_1__* Server; } ;
struct TYPE_14__ {int ref; } ;
struct TYPE_13__ {TYPE_4__* Cedar; } ;
typedef int SOCK ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ HUB ;
typedef TYPE_3__ FARM_CONTROLLER ;
typedef TYPE_4__ CEDAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 TYPE_2__** FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

void FUNC_10(FARM_CONTROLLER *VAR_0, SOCK *VAR_1)
{
 UINT VAR_2;
 HUB **VAR_3;
 UINT VAR_4;
 CEDAR *VAR_5;
 SERVER *VAR_6;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_6 = VAR_0->Server;
 VAR_5 = VAR_6->Cedar;


 FUNC_7(VAR_0, VAR_1);


 FUNC_4(VAR_5->HubList);
 {
  VAR_3 = FUNC_8(VAR_5->HubList);
  VAR_4 = FUNC_3(VAR_5->HubList);
  for (VAR_2 = 0;VAR_2 < VAR_4;VAR_2++)
  {
   FUNC_0(VAR_3[VAR_2]->ref);
  }
 }
 FUNC_9(VAR_5->HubList);

 for (VAR_2 = 0;VAR_2 < VAR_4;VAR_2++)
 {
  FUNC_6(VAR_3[VAR_2]);
  FUNC_1(VAR_5, VAR_3[VAR_2]);
  FUNC_5(VAR_3[VAR_2]);
 }

 FUNC_2(VAR_3);
}
