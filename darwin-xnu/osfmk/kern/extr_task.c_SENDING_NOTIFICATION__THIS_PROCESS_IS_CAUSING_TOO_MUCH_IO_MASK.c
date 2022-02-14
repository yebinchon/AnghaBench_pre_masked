
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* task_t ;
struct ledger_entry_info {int lei_balance; int lei_limit; int lei_refill_period; } ;
typedef scalar_t__ mach_exception_data_type_t ;
typedef int kern_return_t ;
struct TYPE_7__ {int logical_writes; int physical_writes; } ;
struct TYPE_6__ {int ledger; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__,int) ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (int ,scalar_t__*,int) ;
 int VAR_7 ;
 int FUNC_7 (int ,int ,struct ledger_entry_info*) ;
 int FUNC_8 (int ,char*,int,int,int,int,int) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 () ;
 int VAR_8 ;
 int FUNC_11 (int ,TYPE_1__*,struct ledger_entry_info*,int ) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 TYPE_2__ VAR_9 ;
 int FUNC_13 (int ,struct ledger_entry_info*) ;

void __attribute__((noinline)) FUNC_14(int VAR_10)
{
 int VAR_11 = 0;
 task_t VAR_12 = FUNC_5();



 struct ledger_entry_info VAR_13;
 kern_return_t VAR_14;
 switch(VAR_10) {
  case 128:
   FUNC_7(VAR_12->ledger, VAR_9.physical_writes, &VAR_13);
   break;
  case 129:
   FUNC_7(VAR_12->ledger, VAR_9.logical_writes, &VAR_13);
   break;
 }







 uint32_t VAR_15 = VAR_2;
 FUNC_12(VAR_12, &VAR_15);

 if (VAR_10 == 129) {
  FUNC_13(VAR_6, &VAR_13);
 }
 FUNC_8(VAR_4, "process [%d] caught causing excessive I/O (flavor: %d). Task I/O: %lld MB. [Limit : %lld MB per %lld secs]\n",
  VAR_11, VAR_10, (VAR_13.lei_balance / (1024 * 1024)), (VAR_13.lei_limit / (1024 * 1024)), (VAR_13.lei_refill_period / VAR_3));

 VAR_14 = FUNC_11(VAR_8, VAR_12, &VAR_13, VAR_7);
 if (VAR_14) {
  FUNC_9("send_resource_violation(disk_writes, ...): error %#x\n", VAR_14);
 }
}
