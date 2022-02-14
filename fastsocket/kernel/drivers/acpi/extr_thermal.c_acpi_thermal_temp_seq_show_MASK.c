
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct acpi_thermal* private; } ;
struct acpi_thermal {int temperature; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_thermal*) ;
 int FUNC_2 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 int VAR_2 = 0;
 struct acpi_thermal *VAR_3 = VAR_0->private;


 if (!VAR_3)
  goto end;

 VAR_2 = FUNC_1(VAR_3);
 if (VAR_2)
  goto end;

 FUNC_2(VAR_0, "temperature:             %ld C\n",
     FUNC_0(VAR_3->temperature));

      end:
 return 0;
}
