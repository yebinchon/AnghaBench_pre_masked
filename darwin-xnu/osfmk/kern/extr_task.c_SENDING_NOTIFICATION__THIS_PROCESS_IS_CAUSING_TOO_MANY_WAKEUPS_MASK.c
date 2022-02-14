
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* task_t ;
struct ledger_entry_info {int lei_balance; int lei_last_refill; int lei_limit; int lei_refill_period; } ;
typedef scalar_t__ mach_exception_data_type_t ;
typedef int kern_return_t ;
typedef int boolean_t ;
struct TYPE_8__ {int interrupt_wakeups; } ;
struct TYPE_7__ {int rusage_cpu_flags; int ledger; int * bsd_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__* FUNC_5 () ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (int ,scalar_t__*,int) ;
 int VAR_11 ;
 int FUNC_7 (int ,int ,struct ledger_entry_info*) ;
 int FUNC_8 (int ,char*,char const*,int,...) ;
 int FUNC_9 (char*,...) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 () ;
 int VAR_12 ;
 int FUNC_12 (int ,TYPE_1__*,struct ledger_entry_info*,int ) ;
 TYPE_4__ VAR_13 ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,int *,int *) ;
 int FUNC_15 (int ,struct ledger_entry_info*) ;

void __attribute__((noinline))
FUNC_16(void)
{
 task_t VAR_14 = FUNC_5();
 int VAR_15 = 0;
 const char *VAR_16 = "unknown";
 boolean_t VAR_17;
 kern_return_t VAR_18;



 struct ledger_entry_info VAR_19;







 FUNC_7(VAR_14->ledger, VAR_13.interrupt_wakeups, &VAR_19);






 uint32_t VAR_20 = VAR_8;
 FUNC_14(VAR_14, &VAR_20, ((void*)0));

 VAR_17 = VAR_14->rusage_cpu_flags & VAR_7;
 FUNC_15(VAR_6, &VAR_19);
 FUNC_8(VAR_4, "process %s[%d] caught waking the CPU %llu times "
        "over ~%llu seconds, averaging %llu wakes / second and "
        "violating a %slimit of %llu wakes over %llu seconds.\n",
        VAR_16, VAR_15,
        VAR_19.lei_balance, VAR_19.lei_last_refill / VAR_3,
     VAR_19.lei_last_refill == 0 ? 0 :
    (VAR_3 * VAR_19.lei_balance / VAR_19.lei_last_refill),
        VAR_17 ? "FATAL " : "",
     VAR_19.lei_limit, VAR_19.lei_refill_period / VAR_3);

 VAR_18 = FUNC_12(VAR_12, VAR_14, &VAR_19,
                              VAR_17 ? VAR_11 : 0);
 if (VAR_18) {
  FUNC_9("send_resource_violation(CPU wakes, ...): error %#x\n", VAR_18);
 }
 if (VAR_17) {
  FUNC_13(VAR_14);
 }
}
