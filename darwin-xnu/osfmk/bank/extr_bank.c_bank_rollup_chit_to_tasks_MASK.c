
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ledger_t ;
typedef int ledger_amount_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_4__ {int energy; int cpu_time; } ;
struct TYPE_3__ {int energy_billed_to_others; int energy_billed_to_me; int cpu_time_billed_to_others; int cpu_time_billed_to_me; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int,int,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int *,int *) ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static void
FUNC_5(
 ledger_t VAR_8,
 ledger_t VAR_9,
 ledger_t VAR_10,
 int VAR_11,
 int VAR_12)
{
 ledger_amount_t VAR_13;
 ledger_amount_t VAR_14;
 kern_return_t VAR_15;

 if (VAR_9 == VAR_10)
  return;

 VAR_15 = FUNC_4(VAR_8, VAR_6.cpu_time, &VAR_13, &VAR_14);
 if (VAR_15 == VAR_5) {
  FUNC_1(VAR_4,
   (FUNC_0(VAR_0, (VAR_1))) | VAR_3,
   VAR_12, VAR_11, VAR_13, VAR_14, 0);

  if (VAR_9) {
   FUNC_2(VAR_9, VAR_7.cpu_time_billed_to_me, VAR_13);
   FUNC_3(VAR_9, VAR_7.cpu_time_billed_to_me, VAR_14);
  }

  if (VAR_10) {
   FUNC_2(VAR_10, VAR_7.cpu_time_billed_to_others, VAR_13);
   FUNC_3(VAR_10, VAR_7.cpu_time_billed_to_others, VAR_14);
  }
 }

 VAR_15 = FUNC_4(VAR_8, VAR_6.energy, &VAR_13, &VAR_14);
 if (VAR_15 == VAR_5) {
  FUNC_1(VAR_4,
   (FUNC_0(VAR_0, (VAR_2))) | VAR_3,
   VAR_12, VAR_11, VAR_13, VAR_14, 0);

  if (VAR_9) {
   FUNC_2(VAR_9, VAR_7.energy_billed_to_me, VAR_13);
   FUNC_3(VAR_9, VAR_7.energy_billed_to_me, VAR_14);
  }

  if (VAR_10) {
   FUNC_2(VAR_10, VAR_7.energy_billed_to_others, VAR_13);
   FUNC_3(VAR_10, VAR_7.energy_billed_to_others, VAR_14);
  }
 }
}
