
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
 struct device_attribute *VAR_2, char *VAR_3)
{
 u32 VAR_4; acpi_status VAR_5 = FUNC_1(&VAR_4, VAR_0);

 if (FUNC_0(VAR_5))
  return FUNC_2(VAR_3, "%u\n", VAR_4);
 return FUNC_2(VAR_3, "Read error\n");
}
