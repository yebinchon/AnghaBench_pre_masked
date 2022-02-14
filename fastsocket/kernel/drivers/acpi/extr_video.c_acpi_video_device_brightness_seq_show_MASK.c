
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct acpi_video_device* private; } ;
struct acpi_video_device {TYPE_1__* brightness; } ;
struct TYPE_2__ {int count; int curr; int * levels; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static int
FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct acpi_video_device *VAR_2 = VAR_0->private;
 int VAR_3;


 if (!VAR_2 || !VAR_2->brightness) {
  FUNC_0(VAR_0, "<not supported>\n");
  return 0;
 }

 FUNC_0(VAR_0, "levels: ");
 for (VAR_3 = 2; VAR_3 < VAR_2->brightness->count; VAR_3++)
  FUNC_0(VAR_0, " %d", VAR_2->brightness->levels[VAR_3]);
 FUNC_0(VAR_0, "\ncurrent: %d\n", VAR_2->brightness->curr);

 return 0;
}
