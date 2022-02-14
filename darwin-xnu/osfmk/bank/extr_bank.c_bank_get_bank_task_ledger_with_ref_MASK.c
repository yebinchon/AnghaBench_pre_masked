
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ledger_t ;
typedef TYPE_1__* bank_task_t ;
struct TYPE_3__ {int bt_acc_to_pay_lock; scalar_t__ bt_ledger; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static ledger_t
FUNC_3(bank_task_t VAR_1)
{
 ledger_t VAR_2 = VAR_0;

 FUNC_0(&VAR_1->bt_acc_to_pay_lock);
 VAR_2 = VAR_1->bt_ledger;
 if (VAR_2) {
  FUNC_2(VAR_2);
 }
 FUNC_1(&VAR_1->bt_acc_to_pay_lock);

 return VAR_2;
}
