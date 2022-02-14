
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dummy; } ;
typedef int acpi_status ;
typedef int * acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,struct acpi_device**) ;
 char* FUNC_4 (struct acpi_device*) ;
 int VAR_5 ;
 long VAR_6 ;
 int FUNC_5 (int ,int *,int ,int ,long*,int *) ;
 int VAR_7 ;

long FUNC_6(acpi_handle VAR_8)
{
 long VAR_9 = 0;
 struct acpi_device *VAR_10;
 acpi_status VAR_11;

 if (VAR_5 && VAR_8 == ((void*)0))
  return VAR_6;

 if (!VAR_8) {

  FUNC_5(VAR_2, VAR_1,
        VAR_3, VAR_7,
        &VAR_9, ((void*)0));

  VAR_6 |= VAR_9;
  VAR_5 = 1;
 } else {
  VAR_11 = FUNC_3(VAR_8, &VAR_10);
  if (FUNC_2(VAR_11)) {
   FUNC_1((VAR_4, VAR_11, "Invalid device"));
   return 0;
  }
  FUNC_5(VAR_2, VAR_8,
        VAR_3, VAR_7,
        &VAR_9, ((void*)0));
 }
 FUNC_0((VAR_0, "We have 0x%lX video support %s %s\n",
     VAR_8 ? VAR_9 : VAR_6,
     VAR_8 ? "on device " : "in general",
     VAR_8 ? FUNC_4(VAR_10) : ""));
 return VAR_9;
}
