
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct acpi_video_device* private; } ;
struct acpi_video_device {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct acpi_video_device*,unsigned long long*) ;
 int FUNC_2 (struct acpi_video_device*,unsigned long long*) ;
 int FUNC_3 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 int VAR_2;
 struct acpi_video_device *VAR_3 = VAR_0->private;
 unsigned long long VAR_4;


 if (!VAR_3)
  goto end;

 VAR_2 = FUNC_1(VAR_3, &VAR_4);
 FUNC_3(VAR_0, "state:     ");
 if (FUNC_0(VAR_2))
  FUNC_3(VAR_0, "0x%02llx\n", VAR_4);
 else
  FUNC_3(VAR_0, "<not supported>\n");

 VAR_2 = FUNC_2(VAR_3, &VAR_4);
 FUNC_3(VAR_0, "query:     ");
 if (FUNC_0(VAR_2))
  FUNC_3(VAR_0, "0x%02llx\n", VAR_4);
 else
  FUNC_3(VAR_0, "<not supported>\n");

      end:
 return 0;
}
