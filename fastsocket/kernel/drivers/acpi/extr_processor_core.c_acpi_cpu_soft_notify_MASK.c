
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_2__ {scalar_t__ need_hotplug_init; } ;
struct acpi_processor {TYPE_1__ flags; int id; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct acpi_processor*) ;
 int FUNC_2 (struct acpi_processor*) ;
 int FUNC_3 (struct acpi_processor*,unsigned long) ;
 int FUNC_4 (struct acpi_processor*) ;
 int FUNC_5 (struct acpi_processor*) ;
 struct acpi_processor* FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (char*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct notifier_block *VAR_4,
  unsigned long VAR_5, void *VAR_6)
{
 unsigned int VAR_7 = (unsigned long)VAR_6;
 struct acpi_processor *VAR_8 = FUNC_6(VAR_3, VAR_7);

 if (VAR_5 == VAR_1 && VAR_8) {



  if (VAR_8->flags.need_hotplug_init) {
   FUNC_7("Will online and init hotplugged CPU: %d\n",
    VAR_8->id);
   FUNC_0(FUNC_4(VAR_8), "Failed to start CPU:"
    " %d\n", VAR_8->id);
   VAR_8->flags.need_hotplug_init = 0;

  } else {
   FUNC_2(VAR_8);
   FUNC_1(VAR_8);
   FUNC_3(VAR_8, VAR_5);
   FUNC_5(VAR_8);
  }
 }
 if (VAR_5 == VAR_0 && VAR_8) {

  FUNC_3(VAR_8, VAR_5);
 }

 return VAR_2;
}
