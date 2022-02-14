
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {int lock; int TableList; int IfList; } ;
typedef TYPE_1__ L3TABLE ;
typedef TYPE_1__ L3SW ;
typedef TYPE_1__ L3IF ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(L3SW *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 for (VAR_1 = 0;VAR_1 < FUNC_3(VAR_0->IfList);VAR_1++)
 {
  L3IF *VAR_2 = FUNC_2(VAR_0->IfList, VAR_1);
  FUNC_1(VAR_2);
 }
 FUNC_4(VAR_0->IfList);

 for (VAR_1 = 0;VAR_1 < FUNC_3(VAR_0->TableList);VAR_1++)
 {
  L3TABLE *VAR_3 = FUNC_2(VAR_0->TableList, VAR_1);
  FUNC_1(VAR_3);
 }
 FUNC_4(VAR_0->TableList);

 FUNC_0(VAR_0->lock);
 FUNC_1(VAR_0);
}
