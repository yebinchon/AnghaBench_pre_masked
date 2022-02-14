
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct acpi_thermal* private; } ;
struct TYPE_2__ {int cooling_mode; } ;
struct acpi_thermal {TYPE_1__ flags; } ;


 int FUNC_0 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct acpi_thermal *VAR_2 = VAR_0->private;


 if (!VAR_2)
  goto end;

 if (!VAR_2->flags.cooling_mode)
  FUNC_0(VAR_0, "<setting not supported>\n");
 else
  FUNC_0(VAR_0, "0 - Active; 1 - Passive\n");

      end:
 return 0;
}
