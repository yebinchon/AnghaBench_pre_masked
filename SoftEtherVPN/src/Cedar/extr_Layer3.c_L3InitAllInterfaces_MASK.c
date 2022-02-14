
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {int HubName; int Hub; } ;
struct TYPE_7__ {int Cedar; int IfList; } ;
typedef int THREAD ;
typedef TYPE_1__ L3SW ;
typedef TYPE_2__ L3IF ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(L3SW *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 for (VAR_2 = 0;VAR_2 < FUNC_3(VAR_1->IfList);VAR_2++)
 {
  L3IF *VAR_3 = FUNC_2(VAR_1->IfList, VAR_2);
  THREAD *VAR_4;

  FUNC_1(VAR_3);

  VAR_3->Hub = FUNC_0(VAR_1->Cedar, VAR_3->HubName);
  VAR_4 = FUNC_4(VAR_0, VAR_3);
  FUNC_6(VAR_4);
  FUNC_5(VAR_4);
 }
}
