
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
typedef int * bank_task_t ;
struct TYPE_5__ {int energy_billed_to_others; int cpu_time_billed_to_others; } ;
struct TYPE_4__ {int ledger; int * bank_context; } ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__*,scalar_t__*) ;
 TYPE_2__ VAR_2 ;

void
FUNC_6(task_t VAR_3, uint64_t *VAR_4, uint64_t *VAR_5)
{
 bank_task_t VAR_6 = VAR_0;
 ledger_amount_t VAR_7, VAR_8;
 uint64_t VAR_9 = 0;
 uint64_t VAR_10 = 0;
 kern_return_t VAR_11;


 FUNC_3();

 if (VAR_3->bank_context != ((void*)0)) {
  VAR_6 = VAR_3->bank_context;
  FUNC_2(VAR_6);
 }
 FUNC_4();

 if (VAR_6) {
  FUNC_0(VAR_6, &VAR_9, &VAR_10);
  FUNC_1(VAR_6, 1);
 } else {
  VAR_11 = FUNC_5(VAR_3->ledger, VAR_2.cpu_time_billed_to_others,
   &VAR_7, &VAR_8);
  if (VAR_11 == VAR_1) {
   VAR_9 = VAR_7 - VAR_8;
  }

  VAR_11 = FUNC_5(VAR_3->ledger, VAR_2.energy_billed_to_others,
   &VAR_7, &VAR_8);
  if (VAR_11 == VAR_1) {
   VAR_10 = VAR_7 - VAR_8;
  }
 }

 *VAR_4 = VAR_9;
 *VAR_5 = VAR_10;
 return;
}
