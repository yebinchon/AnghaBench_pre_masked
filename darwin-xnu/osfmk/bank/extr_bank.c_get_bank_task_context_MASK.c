
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef int boolean_t ;
typedef TYPE_2__* bank_task_t ;
struct TYPE_12__ {TYPE_1__* bt_task; int bt_ledger; } ;
struct TYPE_11__ {TYPE_2__* bank_context; int ledger; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static bank_task_t
FUNC_8
 (task_t VAR_1,
 boolean_t VAR_2)
{
 bank_task_t VAR_3;

 if (VAR_1->bank_context || !VAR_2) {
  FUNC_0(VAR_1->bank_context != ((void*)0));
  return (VAR_1->bank_context);
 }

 VAR_3 = FUNC_1(VAR_1);


 FUNC_6(VAR_1);
 if (VAR_1->bank_context) {
  FUNC_7(VAR_1);
  if (VAR_3 != VAR_0)
   FUNC_2(VAR_3, 1);
  return (VAR_1->bank_context);
 } else if (VAR_3 == VAR_0) {
  FUNC_7(VAR_1);
  return VAR_0;
 }

 VAR_3->bt_ledger = VAR_1->ledger;



 FUNC_5(VAR_1->ledger);


 FUNC_3();
 VAR_1->bank_context = VAR_3;
 FUNC_4();

 FUNC_7(VAR_1);

 return (VAR_3);
}
