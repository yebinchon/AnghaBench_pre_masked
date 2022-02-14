
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dev; int handle; int wakeup_list; int node; scalar_t__ parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct acpi_device *VAR_2, int VAR_3)
{
 FUNC_4(&VAR_1);
 if (VAR_2->parent)
  FUNC_3(&VAR_2->node);

 FUNC_3(&VAR_2->wakeup_list);
 FUNC_5(&VAR_1);

 FUNC_0(VAR_2->handle, VAR_0);

 FUNC_1(VAR_2);
 FUNC_2(&VAR_2->dev);
}
