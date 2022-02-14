
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ledger_t ;
typedef TYPE_1__* bank_task_t ;
struct TYPE_3__ {int bt_acc_to_pay_lock; int bt_ledger; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(bank_task_t VAR_1)
{
 ledger_t VAR_2;


 FUNC_2(&VAR_1->bt_acc_to_pay_lock);
 FUNC_1(FUNC_0(VAR_1->bt_ledger));
 VAR_2 = VAR_1->bt_ledger;
 VAR_1->bt_ledger = VAR_0;
 FUNC_3(&VAR_1->bt_acc_to_pay_lock);

 FUNC_4(VAR_2);
}
