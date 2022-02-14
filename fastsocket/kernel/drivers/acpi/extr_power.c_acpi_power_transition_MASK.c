
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct acpi_handle_list {int count; int * handles; } ;
struct TYPE_4__ {int state; TYPE_1__* states; } ;
struct acpi_device {TYPE_2__ power; } ;
struct TYPE_3__ {struct acpi_handle_list resources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct acpi_device*) ;
 int FUNC_1 (int ,struct acpi_device*) ;

int FUNC_2(struct acpi_device *VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 struct acpi_handle_list *VAR_8 = ((void*)0);
 struct acpi_handle_list *VAR_9 = ((void*)0);
 int VAR_10 = 0;


 if (!VAR_5 || (VAR_6 < VAR_0) || (VAR_6 > VAR_1))
  return -VAR_3;

 if ((VAR_5->power.state < VAR_0)
     || (VAR_5->power.state > VAR_1))
  return -VAR_4;

 VAR_8 = &VAR_5->power.states[VAR_5->power.state].resources;
 VAR_9 = &VAR_5->power.states[VAR_6].resources;







 for (VAR_10 = 0; VAR_10 < VAR_9->count; VAR_10++) {
  VAR_7 = FUNC_1(VAR_9->handles[VAR_10], VAR_5);
  if (VAR_7)
   goto end;
 }

 if (VAR_5->power.state == VAR_6) {
  goto end;
 }




 for (VAR_10 = 0; VAR_10 < VAR_8->count; VAR_10++) {
  VAR_7 = FUNC_0(VAR_8->handles[VAR_10], VAR_5);
  if (VAR_7)
   goto end;
 }

     end:
 if (VAR_7)
  VAR_5->power.state = VAR_2;
 else {

  VAR_5->power.state = VAR_6;
 }

 return VAR_7;
}
