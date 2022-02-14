
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cpuidle_state {char* name; char* desc; int exit_latency; int target_residency; void* enter; scalar_t__ flags; int power_usage; } ;
struct cpuidle_device {int state_count; struct cpuidle_state* safe_state; struct cpuidle_state* states; int cpu; } ;
struct acpi_processor_cx {int type; int latency; int entry_method; int power; int desc; int valid; } ;
struct TYPE_5__ {scalar_t__ power; int bm_check; int has_cst; int power_setup_done; } ;
struct TYPE_4__ {struct acpi_processor_cx* states; struct cpuidle_device dev; } ;
struct acpi_processor {TYPE_2__ flags; TYPE_1__ power; int id; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_3__ VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int FUNC_0 (struct cpuidle_state*,struct acpi_processor_cx*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,char*,int) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct acpi_processor *VAR_19)
{
 int VAR_20, VAR_21 = VAR_4;
 struct acpi_processor_cx *VAR_22;
 struct cpuidle_state *VAR_23;
 struct cpuidle_device *VAR_24 = &VAR_19->power.dev;

 if (!VAR_19->flags.power_setup_done)
  return -VAR_12;

 if (VAR_19->flags.power == 0) {
  return -VAR_12;
 }

 VAR_24->cpu = VAR_19->id;
 for (VAR_20 = 0; VAR_20 < VAR_11; VAR_20++) {
  VAR_24->states[VAR_20].name[0] = '\0';
  VAR_24->states[VAR_20].desc[0] = '\0';
 }

 if (VAR_18 == 0)
  VAR_18 = 1;

 for (VAR_20 = 1; VAR_20 < VAR_2 && VAR_20 <= VAR_18; VAR_20++) {
  VAR_22 = &VAR_19->power.states[VAR_20];
  VAR_23 = &VAR_24->states[VAR_21];

  if (!VAR_22->valid)
   continue;







  FUNC_0(VAR_23, VAR_22);

  FUNC_2(VAR_23->name, VAR_10, "C%d", VAR_20);
  FUNC_3(VAR_23->desc, VAR_22->desc, VAR_3);
  VAR_23->exit_latency = VAR_22->latency;
  VAR_23->target_residency = VAR_22->latency * VAR_17;
  VAR_23->power_usage = VAR_22->power;

  VAR_23->flags = 0;
  switch (VAR_22->type) {
   case 130:
   VAR_23->flags |= VAR_8;
   if (VAR_22->entry_method == VAR_0)
    VAR_23->flags |= VAR_9;

   VAR_23->enter = VAR_15;
   VAR_24->safe_state = VAR_23;
   break;

   case 129:
   VAR_23->flags |= VAR_5;
   VAR_23->flags |= VAR_9;
   VAR_23->enter = VAR_16;
   VAR_24->safe_state = VAR_23;
   break;

   case 128:
   VAR_23->flags |= VAR_7;
   VAR_23->flags |= VAR_9;
   VAR_23->flags |= VAR_6;
   VAR_23->enter = VAR_19->flags.bm_check ?
     VAR_14 :
     VAR_16;
   break;
  }

  VAR_21++;
  if (VAR_21 == VAR_11)
   break;
 }

 VAR_24->state_count = VAR_21;

 if (!VAR_21)
  return -VAR_12;

 return 0;
}
