
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct acpi_video_bus* private; } ;
struct acpi_video_bus {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct acpi_video_bus*,unsigned long long*) ;
 int * VAR_0 ;
 int FUNC_2 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct acpi_video_bus *VAR_3 = VAR_1->private;
 int VAR_4;
 unsigned long long VAR_5;


 if (!VAR_3)
  goto end;

 VAR_4 = FUNC_1(VAR_3, &VAR_5);
 if (!FUNC_0(VAR_4)) {
  FUNC_2(VAR_1, "<not supported>\n");
  goto end;
 }
 FUNC_2(VAR_1, "device POSTed is <%s>\n", VAR_0[VAR_5 & 3]);

      end:
 return 0;
}
