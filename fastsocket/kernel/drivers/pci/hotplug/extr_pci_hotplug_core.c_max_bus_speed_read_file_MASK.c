
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_slot {int hotplug; } ;
typedef int ssize_t ;
typedef enum pci_bus_speed { ____Placeholder_pci_bus_speed } pci_bus_speed ;


 int VAR_0 ;
 int FUNC_0 (int ,int*) ;
 char** VAR_1 ;
 int FUNC_1 (char*,char*,char*) ;
 char* VAR_2 ;

__attribute__((used)) static ssize_t FUNC_2(struct pci_slot *VAR_3, char *VAR_4)
{
 char *VAR_5;
 int VAR_6;
 enum pci_bus_speed VAR_7;

 VAR_6 = FUNC_0(VAR_3->hotplug, &VAR_7);
 if (VAR_6)
  goto exit;

 if (VAR_7 == VAR_0)
  VAR_5 = VAR_2;
 else
  VAR_5 = VAR_1[VAR_7];

 VAR_6 = FUNC_1 (VAR_4, "%s\n", VAR_5);

exit:
 return VAR_6;
}
