
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct acpi_res_list {int resource_type; int name; scalar_t__ end; scalar_t__ start; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_size ;
typedef scalar_t__ acpi_physical_address ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct acpi_res_list*) ;
 int VAR_4 ;
 int FUNC_1 (struct acpi_res_list*) ;
 struct acpi_res_list* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,char*,char*,unsigned long long,unsigned long long,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int) ;

acpi_status
FUNC_7 (
    u8 VAR_5,
    acpi_physical_address VAR_6,
    acpi_size VAR_7,
    char *VAR_8)
{
 struct acpi_res_list *VAR_9;
 int VAR_10;
 if (VAR_3 == VAR_1)
  return VAR_0;

 switch (VAR_5) {
 case 129:
 case 128:


  VAR_9 = FUNC_2(sizeof(struct acpi_res_list), VAR_2);
  if (!VAR_9)
   return VAR_0;

  FUNC_6(VAR_9->name, VAR_8, 5);
  VAR_9->start = VAR_6;
  VAR_9->end = VAR_6 + VAR_7 - 1;
  VAR_9->resource_type = VAR_5;
  FUNC_4(&VAR_4);
  VAR_10 = FUNC_0(VAR_9);
  FUNC_5(&VAR_4);
  FUNC_3("%s %s resource: start: 0x%llx, end: 0x%llx, "
    "name: %s\n", VAR_10 ? "Added" : "Already exist",
    (VAR_5 == 129)
    ? "SystemIO" : "System Memory",
    (unsigned long long)VAR_9->start,
    (unsigned long long)VAR_9->end,
    VAR_9->name);
  if (!VAR_10)
   FUNC_1(VAR_9);
  break;
 case 131:
 case 134:
 case 130:
 case 136:
 case 132:
 case 135:
 case 133:
  break;
 }
 return VAR_0;
}
