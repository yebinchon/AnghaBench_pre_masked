
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct acpi_device {struct acpi_device* parent; int * handle; } ;
typedef int acpi_status ;
typedef int acpi_object_type ;
typedef int * acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,struct acpi_device**) ;
 int FUNC_2 (struct acpi_device*,int) ;
 int FUNC_3 (int ,int *,int *,int **) ;
 int FUNC_4 (int *,int **) ;
 int FUNC_5 (int *,int *) ;

int FUNC_6(struct acpi_device *VAR_1, int VAR_2)
{
 acpi_status VAR_3;
 struct acpi_device *VAR_4, *VAR_5;
 acpi_handle VAR_6, VAR_7;
 acpi_object_type VAR_8;
 u32 VAR_9 = 1;
 int VAR_10 = 0;

 VAR_4 = VAR_1;
 VAR_6 = VAR_1->handle;
 VAR_5 = VAR_7 = ((void*)0);

 while ((VAR_9 > 0) && VAR_4 && (!VAR_10)) {
  VAR_3 = FUNC_3(VAR_0, VAR_6,
           VAR_7, &VAR_7);




  if (FUNC_0(VAR_3)) {
   VAR_9--;
   VAR_7 = VAR_6;
   FUNC_4(VAR_6, &VAR_6);
   VAR_5 = VAR_4;
   VAR_4 = VAR_4->parent;

   if (VAR_9 == 0)
    VAR_10 = FUNC_2(VAR_5, VAR_2);
   else
    VAR_10 = FUNC_2(VAR_5, 1);

   continue;
  }

  VAR_3 = FUNC_5(VAR_7, &VAR_8);
  if (FUNC_0(VAR_3)) {
   continue;
  }




  if (FUNC_1(VAR_7, &VAR_5) == 0) {
   VAR_9++;
   VAR_6 = VAR_7;
   VAR_7 = ((void*)0);
   VAR_4 = VAR_5;
  }
  continue;
 }
 return VAR_10;
}
