
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct acpi_handle_list {int count; } ;
struct TYPE_4__ {int state; TYPE_1__* states; } ;
struct acpi_device {TYPE_2__ power; } ;
struct TYPE_3__ {struct acpi_handle_list resources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acpi_handle_list*,int*) ;

int FUNC_1(struct acpi_device *VAR_5)
{
 int VAR_6 = 0;
 struct acpi_handle_list *VAR_7 = ((void*)0);
 int VAR_8 = 0;
 int VAR_9 = 0;


 if (!VAR_5)
  return -VAR_4;

 VAR_5->power.state = VAR_3;





 for (VAR_9 = VAR_1; VAR_9 < VAR_2; VAR_9++) {
  VAR_7 = &VAR_5->power.states[VAR_9].resources;
  if (VAR_7->count < 1)
   continue;

  VAR_6 = FUNC_0(VAR_7, &VAR_8);
  if (VAR_6)
   return VAR_6;

  if (VAR_8 == VAR_0) {
   VAR_5->power.state = VAR_9;
   return 0;
  }
 }

 VAR_5->power.state = VAR_2;

 return 0;
}
