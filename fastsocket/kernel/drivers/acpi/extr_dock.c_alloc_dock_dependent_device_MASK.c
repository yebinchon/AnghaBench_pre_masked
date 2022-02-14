
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dock_dependent_device {int hotplug_list; int list; int handle; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct dock_dependent_device* FUNC_1 (int,int ) ;

__attribute__((used)) static struct dock_dependent_device *
FUNC_2(acpi_handle VAR_1)
{
 struct dock_dependent_device *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (VAR_2) {
  VAR_2->handle = VAR_1;
  FUNC_0(&VAR_2->list);
  FUNC_0(&VAR_2->hotplug_list);
 }
 return VAR_2;
}
