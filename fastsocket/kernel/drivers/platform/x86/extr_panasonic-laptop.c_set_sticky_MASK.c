
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcc_acpi {int sticky_mode; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 struct pcc_acpi* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct pcc_acpi*,int ,int) ;
 int FUNC_2 (char const*,char*,int*) ;
 struct acpi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct acpi_device *VAR_5 = FUNC_3(VAR_1);
 struct pcc_acpi *VAR_6 = FUNC_0(VAR_5);
 int VAR_7;

 if (VAR_4 && FUNC_2(VAR_3, "%i", &VAR_7) == 1 &&
     (VAR_7 == 0 || VAR_7 == 1)) {
  FUNC_1(VAR_6, VAR_0, VAR_7);
  VAR_6->sticky_mode = VAR_7;
 }

 return VAR_4;
}
