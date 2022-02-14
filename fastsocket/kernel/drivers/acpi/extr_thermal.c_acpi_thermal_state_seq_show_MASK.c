
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct acpi_thermal* private; } ;
struct TYPE_2__ {int active_index; scalar_t__ active; scalar_t__ passive; scalar_t__ hot; scalar_t__ critical; } ;
struct acpi_thermal {TYPE_1__ state; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct acpi_thermal *VAR_2 = VAR_0->private;


 if (!VAR_2)
  goto end;

 FUNC_1(VAR_0, "state:                   ");

 if (!VAR_2->state.critical && !VAR_2->state.hot && !VAR_2->state.passive
     && !VAR_2->state.active)
  FUNC_1(VAR_0, "ok\n");
 else {
  if (VAR_2->state.critical)
   FUNC_1(VAR_0, "critical ");
  if (VAR_2->state.hot)
   FUNC_1(VAR_0, "hot ");
  if (VAR_2->state.passive)
   FUNC_1(VAR_0, "passive ");
  if (VAR_2->state.active)
   FUNC_0(VAR_0, "active[%d]", VAR_2->state.active_index);
  FUNC_1(VAR_0, "\n");
 }

      end:
 return 0;
}
