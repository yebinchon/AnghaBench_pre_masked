
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct acpi_device* private; } ;
struct acpi_device {int dummy; } ;


 int FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct acpi_device *VAR_2 = VAR_0->private;

 FUNC_1(VAR_0, "type:                    %s\n",
     FUNC_0(VAR_2));
 return 0;
}
