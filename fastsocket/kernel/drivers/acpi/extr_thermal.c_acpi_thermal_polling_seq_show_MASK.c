
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct acpi_thermal* private; } ;
struct acpi_thermal {TYPE_1__* thermal_zone; } ;
struct TYPE_2__ {int polling_delay; } ;


 int FUNC_0 (struct seq_file*,char*,int) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct acpi_thermal *VAR_2 = VAR_0->private;


 if (!VAR_2)
  goto end;

 if (!VAR_2->thermal_zone->polling_delay) {
  FUNC_1(VAR_0, "<polling disabled>\n");
  goto end;
 }

 FUNC_0(VAR_0, "polling frequency:       %d seconds\n",
     (VAR_2->thermal_zone->polling_delay / 1000));

      end:
 return 0;
}
