
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slot {char* physical_path; } ;
struct pci_slot {TYPE_1__* hotplug; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct slot* private; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct pci_slot *VAR_1, char *VAR_2)
{
 int VAR_3 = -VAR_0;
 struct slot *VAR_4 = VAR_1->hotplug->private;

 if (!VAR_4)
  return VAR_3;

 VAR_3 = FUNC_0 (VAR_2, "%s\n", VAR_4->physical_path);
 return VAR_3;
}
