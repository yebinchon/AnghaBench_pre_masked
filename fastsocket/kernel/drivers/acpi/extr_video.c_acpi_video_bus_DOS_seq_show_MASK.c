
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct acpi_video_bus* private; } ;
struct acpi_video_bus {int dos_setting; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct acpi_video_bus *VAR_2 = VAR_0->private;


 FUNC_0(VAR_0, "DOS setting: <%d>\n", VAR_2->dos_setting);

 return 0;
}
