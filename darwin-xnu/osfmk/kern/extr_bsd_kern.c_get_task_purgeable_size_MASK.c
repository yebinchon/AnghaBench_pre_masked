
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* task_t ;
typedef scalar_t__ ledger_amount_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_5__ {int purgeable_volatile_compressed; int purgeable_volatile; } ;
struct TYPE_4__ {int ledger; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__*,scalar_t__*) ;
 TYPE_2__ VAR_1 ;

uint64_t FUNC_1(task_t VAR_2)
{
 kern_return_t VAR_3;
 ledger_amount_t VAR_4, VAR_5;
 uint64_t VAR_6 = 0;

 VAR_3 = FUNC_0(VAR_2->ledger, VAR_1.purgeable_volatile, &VAR_4, &VAR_5);
 if (VAR_3 != VAR_0) {
  return 0;
 }

 VAR_6 += (VAR_4 - VAR_5);

 VAR_3 = FUNC_0(VAR_2->ledger, VAR_1.purgeable_volatile_compressed, &VAR_4, &VAR_5);
 if (VAR_3 != VAR_0) {
  return 0;
 }

 VAR_6 += (VAR_4 - VAR_5);

 return VAR_6;
}
