
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ,char*,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, acpi_handle *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4, VAR_5;





 VAR_3 = FUNC_2(FUNC_1(VAR_1), "pci%04x:%02x", &VAR_4, &VAR_5);
 if (VAR_3 != 2)
  return -VAR_0;
 *VAR_2 = FUNC_0(VAR_4, VAR_5);
 if (!*VAR_2)
  return -VAR_0;
 return 0;
}
