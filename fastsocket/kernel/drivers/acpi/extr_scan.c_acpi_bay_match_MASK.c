
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int handle; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct acpi_device *VAR_1){
 acpi_status VAR_2;
 acpi_handle VAR_3;
 acpi_handle VAR_4;
 acpi_handle VAR_5;

 VAR_3 = VAR_1->handle;

 VAR_2 = FUNC_2(VAR_3, "_EJ0", &VAR_4);
 if (FUNC_0(VAR_2))
  return -VAR_0;

 if ((FUNC_1(FUNC_2(VAR_3, "_GTF", &VAR_4))) ||
  (FUNC_1(FUNC_2(VAR_3, "_GTM", &VAR_4))) ||
  (FUNC_1(FUNC_2(VAR_3, "_STM", &VAR_4))) ||
  (FUNC_1(FUNC_2(VAR_3, "_SDD", &VAR_4))))
  return 0;

 if (FUNC_3(VAR_3, &VAR_5))
  return -VAR_0;

        if ((FUNC_1(FUNC_2(VAR_5, "_GTF", &VAR_4))) ||
                (FUNC_1(FUNC_2(VAR_5, "_GTM", &VAR_4))) ||
                (FUNC_1(FUNC_2(VAR_5, "_STM", &VAR_4))) ||
                (FUNC_1(FUNC_2(VAR_5, "_SDD", &VAR_4))))
                return 0;

 return -VAR_0;
}
