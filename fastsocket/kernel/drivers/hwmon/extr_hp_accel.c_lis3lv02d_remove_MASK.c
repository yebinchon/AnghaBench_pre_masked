
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_device {int dummy; } ;
struct TYPE_2__ {int work; int led_classdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct acpi_device *VAR_3, int VAR_4)
{
 if (!VAR_3)
  return -VAR_0;

 FUNC_2();
 FUNC_3(&VAR_2);

 FUNC_1(&VAR_1.led_classdev);
 FUNC_0(&VAR_1.work);

 return FUNC_4(&VAR_2);
}
