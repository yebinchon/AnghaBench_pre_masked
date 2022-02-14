
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {int * Session; int * Hub; } ;
struct TYPE_6__ {int IfList; } ;
typedef TYPE_1__ L3SW ;
typedef TYPE_2__ L3IF ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(L3SW *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 for (VAR_1 = 0;VAR_1 < FUNC_2(VAR_0->IfList);VAR_1++)
 {
  L3IF *VAR_2 = FUNC_1(VAR_0->IfList, VAR_1);

  FUNC_3(VAR_2->Hub);
  VAR_2->Hub = ((void*)0);
  FUNC_4(VAR_2->Session);
  VAR_2->Session = ((void*)0);

  FUNC_0(VAR_2);
 }
}
