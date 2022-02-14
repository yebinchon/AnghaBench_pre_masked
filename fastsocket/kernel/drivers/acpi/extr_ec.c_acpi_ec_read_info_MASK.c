
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* u32 ;
struct seq_file {struct acpi_ec* private; } ;
struct acpi_ec {scalar_t__ global_lock; scalar_t__ data_addr; scalar_t__ command_addr; scalar_t__ gpe; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct acpi_ec *VAR_2 = VAR_0->private;

 if (!VAR_2)
  goto end;

 FUNC_0(VAR_0, "gpe:\t\t\t0x%02x\n", (u32) VAR_2->gpe);
 FUNC_0(VAR_0, "ports:\t\t\t0x%02x, 0x%02x\n",
     (unsigned)VAR_2->command_addr, (unsigned)VAR_2->data_addr);
 FUNC_0(VAR_0, "use global lock:\t%s\n",
     VAR_2->global_lock ? "yes" : "no");
      end:
 return 0;
}
