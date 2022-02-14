
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct acpi_video_bus* private; } ;
struct TYPE_2__ {scalar_t__ post; scalar_t__ rom; scalar_t__ multihead; } ;
struct acpi_video_bus {TYPE_1__ flags; } ;


 int FUNC_0 (struct seq_file*,char*,char*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct acpi_video_bus *VAR_2 = VAR_0->private;


 if (!VAR_2)
  goto end;

 FUNC_0(VAR_0, "Switching heads:              %s\n",
     VAR_2->flags.multihead ? "yes" : "no");
 FUNC_0(VAR_0, "Video ROM:                    %s\n",
     VAR_2->flags.rom ? "yes" : "no");
 FUNC_0(VAR_0, "Device to be POSTed on boot:  %s\n",
     VAR_2->flags.post ? "yes" : "no");

      end:
 return 0;
}
