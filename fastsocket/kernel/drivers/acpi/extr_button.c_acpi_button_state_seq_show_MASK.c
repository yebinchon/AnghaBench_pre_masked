
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct acpi_device* private; } ;
struct acpi_device {int handle; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *,unsigned long long*) ;
 int FUNC_2 (struct seq_file*,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct acpi_device *VAR_2 = VAR_0->private;
 acpi_status VAR_3;
 unsigned long long VAR_4;

 VAR_3 = FUNC_1(VAR_2->handle, "_LID", ((void*)0), &VAR_4);
 FUNC_2(VAR_0, "state:      %s\n",
     FUNC_0(VAR_3) ? "unsupported" :
   (VAR_4 ? "open" : "closed"));
 return 0;
}
