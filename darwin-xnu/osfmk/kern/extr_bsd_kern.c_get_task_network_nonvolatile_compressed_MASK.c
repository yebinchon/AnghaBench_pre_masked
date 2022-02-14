
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_1__* task_t ;
typedef scalar_t__ ledger_amount_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_5__ {int network_nonvolatile_compressed; } ;
struct TYPE_4__ {int ledger; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__*,scalar_t__*) ;
 TYPE_2__ VAR_1 ;

uint64_t FUNC_1(task_t VAR_2)
{
    kern_return_t VAR_3;
    ledger_amount_t VAR_4, VAR_5;

    VAR_3 = FUNC_0(VAR_2->ledger, VAR_1.network_nonvolatile_compressed, &VAR_4, &VAR_5);
    if (VAR_0 == VAR_3) {
        return (VAR_4 - VAR_5);
    }

    return 0;
}
