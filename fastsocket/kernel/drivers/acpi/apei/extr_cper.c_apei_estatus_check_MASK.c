
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_hest_generic_status {unsigned int data_length; } ;
struct acpi_hest_generic_data {unsigned int error_data_length; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_hest_generic_status const*) ;

int FUNC_1(const struct acpi_hest_generic_status *VAR_1)
{
 struct acpi_hest_generic_data *VAR_2;
 unsigned int VAR_3, VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1);
 if (VAR_5)
  return VAR_5;
 VAR_3 = VAR_1->data_length;
 VAR_2 = (struct acpi_hest_generic_data *)(VAR_1 + 1);
 while (VAR_3 >= sizeof(*VAR_2)) {
  VAR_4 = VAR_2->error_data_length;
  if (VAR_4 > VAR_3 - sizeof(*VAR_2))
   return -VAR_0;
  VAR_3 -= VAR_4 + sizeof(*VAR_2);
  VAR_2 = (void *)(VAR_2 + 1) + VAR_4;
 }
 if (VAR_3)
  return -VAR_0;

 return 0;
}
