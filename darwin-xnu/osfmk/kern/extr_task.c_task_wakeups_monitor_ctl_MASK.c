
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef TYPE_1__* task_t ;
typedef int ledger_t ;
typedef int ledger_amount_t ;
typedef int kern_return_t ;
typedef int int64_t ;
typedef int int32_t ;
struct TYPE_8__ {int interrupt_wakeups; } ;
struct TYPE_7__ {int rusage_cpu_flags; int ledger; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (int ,int ,int) ;
 TYPE_6__ VAR_11 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (TYPE_1__*,int ,int ) ;

kern_return_t
FUNC_10(task_t VAR_15, uint32_t *VAR_16, int32_t *VAR_17)
{
 ledger_t VAR_18 = VAR_15->ledger;

 FUNC_7(VAR_15);
 if (*VAR_16 & VAR_8) {
  ledger_amount_t VAR_19;
  uint64_t VAR_20;

  FUNC_3(VAR_18, VAR_11.interrupt_wakeups, &VAR_19);
  FUNC_4(VAR_18, VAR_11.interrupt_wakeups, &VAR_20);

  if (VAR_19 != VAR_2) {



   *VAR_17 = (int32_t)(VAR_19 / (int64_t)(VAR_20 / VAR_3));
   *VAR_16 = VAR_7;
   if (VAR_15->rusage_cpu_flags & VAR_4) {
    *VAR_16 |= VAR_9;
   }
  } else {
   *VAR_16 = VAR_6;
   *VAR_17 = -1;
  }




   FUNC_8(VAR_15);
  return VAR_1;
 }

 if (*VAR_16 & VAR_7) {
  if (*VAR_16 & VAR_10) {
   *VAR_17 = VAR_13;
  }


  if (*VAR_16 & VAR_9) {
   VAR_15->rusage_cpu_flags |= VAR_4;
  }


  if (*VAR_17 <= 0) {
   FUNC_8(VAR_15);
   return VAR_0;
  }


  FUNC_5(VAR_18, VAR_11.interrupt_wakeups, *VAR_17 * VAR_12,
   VAR_14);
  FUNC_6(VAR_18, VAR_11.interrupt_wakeups, VAR_12 * VAR_3);
  FUNC_2(VAR_18, VAR_11.interrupt_wakeups);

 } else if (*VAR_16 & VAR_6) {
  FUNC_1(VAR_18, VAR_11.interrupt_wakeups);
  FUNC_0(VAR_18, VAR_11.interrupt_wakeups);
 }

 FUNC_8(VAR_15);
 return VAR_1;
}
