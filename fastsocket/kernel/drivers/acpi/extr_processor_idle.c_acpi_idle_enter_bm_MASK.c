
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cpuidle_state {int dummy; } ;
struct cpuidle_device {TYPE_2__* safe_state; TYPE_2__* last_state; } ;
struct acpi_processor_cx {scalar_t__ entry_method; int time; int usage; int bm_sts_skip; } ;
struct TYPE_4__ {scalar_t__ bm_control; scalar_t__ bm_check; } ;
struct acpi_processor {TYPE_1__ flags; } ;
typedef int s64 ;
typedef int ktime_t ;
struct TYPE_6__ {int status; } ;
struct TYPE_5__ {int (* enter ) (struct cpuidle_device*,TYPE_2__*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 struct acpi_processor* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct acpi_processor_cx*) ;
 int FUNC_4 (struct cpuidle_device*,struct cpuidle_state*) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct acpi_processor_cx* FUNC_8 (struct cpuidle_state*) ;
 TYPE_3__* FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct acpi_processor*,struct acpi_processor_cx*,int) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 () ;
 int VAR_7 ;
 int FUNC_18 () ;
 int FUNC_19 (int) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct cpuidle_device*,TYPE_2__*) ;
 scalar_t__ FUNC_25 (int) ;
 int FUNC_26 (int) ;

__attribute__((used)) static int FUNC_27(struct cpuidle_device *VAR_8,
         struct cpuidle_state *VAR_9)
{
 struct acpi_processor *VAR_10;
 struct acpi_processor_cx *VAR_11 = FUNC_8(VAR_9);
 ktime_t VAR_12, VAR_13;
 s64 VAR_14;
 s64 VAR_15 = 0;


 VAR_10 = FUNC_1(VAR_7);

 if (FUNC_25(!VAR_10))
  return 0;

 if (VAR_4)
  return(FUNC_4(VAR_8, VAR_9));

 if (!VAR_11->bm_sts_skip && FUNC_2()) {
  if (VAR_8->safe_state) {
   VAR_8->last_state = VAR_8->safe_state;
   return VAR_8->safe_state->enter(VAR_8, VAR_8->safe_state);
  } else {
   FUNC_14();
   FUNC_5();
   FUNC_15();
   return 0;
  }
 }

 FUNC_14();
 if (VAR_11->entry_method != VAR_1) {
  FUNC_9()->status &= ~VAR_3;




  FUNC_20();
 }

 if (FUNC_25(FUNC_16())) {
  FUNC_9()->status |= VAR_3;
  FUNC_15();
  return 0;
 }

 FUNC_6(FUNC_21());


 FUNC_18();




 FUNC_13(VAR_10, VAR_11, 1);

 VAR_12 = FUNC_10();
 if (VAR_10->flags.bm_check && VAR_10->flags.bm_control) {
  FUNC_22(&VAR_6);
  VAR_5++;

  if (VAR_5 == FUNC_17())
   FUNC_7(VAR_0, 1);
  FUNC_23(&VAR_6);
 } else if (!VAR_10->flags.bm_check) {
  FUNC_0();
 }

 FUNC_3(VAR_11);


 if (VAR_10->flags.bm_check && VAR_10->flags.bm_control) {
  FUNC_22(&VAR_6);
  FUNC_7(VAR_0, 0);
  VAR_5--;
  FUNC_23(&VAR_6);
 }
 VAR_13 = FUNC_10();
 VAR_14 = FUNC_12(FUNC_11(VAR_13, VAR_12));

 VAR_15 = FUNC_26(VAR_14);

 FUNC_19(VAR_15*VAR_2);

 FUNC_15();
 FUNC_9()->status |= VAR_3;

 VAR_11->usage++;

 FUNC_13(VAR_10, VAR_11, 0);
 VAR_11->time += VAR_15;
 return VAR_14;
}
