
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* task_t ;
struct ledger_entry_info {int lei_balance; } ;
struct TYPE_8__ {int logical_writes; } ;
struct TYPE_7__ {int ledger; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,struct ledger_entry_info*) ;
 TYPE_4__ VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

uint64_t
FUNC_4(task_t VAR_2)
{
    FUNC_0(VAR_2 != VAR_0);
    struct ledger_entry_info VAR_3;

    FUNC_2(VAR_2);
    FUNC_1(VAR_2->ledger, VAR_1.logical_writes, &VAR_3);

    FUNC_3(VAR_2);
    return VAR_3.lei_balance;
}
