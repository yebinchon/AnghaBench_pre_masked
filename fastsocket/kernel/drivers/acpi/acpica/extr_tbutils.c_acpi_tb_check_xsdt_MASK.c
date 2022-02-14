
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct acpi_table_header {int length; } ;
typedef int acpi_status ;
typedef int acpi_physical_address ;


 int FUNC_0 (int,struct acpi_table_header*) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct acpi_table_header* FUNC_2 (int ,int) ;
 int FUNC_3 (struct acpi_table_header*,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static acpi_status
FUNC_4(acpi_physical_address VAR_6)
{
 struct acpi_table_header *VAR_7;
 u32 VAR_8;
 u64 VAR_9;
 VAR_5 *VAR_4;
 u32 VAR_10;
 int VAR_11;

 VAR_7 = FUNC_2(VAR_6, sizeof(struct acpi_table_header));
 if (!VAR_7)
  return VAR_1;

 VAR_8 = VAR_7->length;
 FUNC_3(VAR_7, sizeof(struct acpi_table_header));
 if (VAR_8 < sizeof(struct acpi_table_header))
  return VAR_0;

 VAR_7 = FUNC_2(VAR_6, VAR_8);
 if (!VAR_7)
  return VAR_1;


 VAR_10 =
  (u32) ((VAR_7->length -
  sizeof(struct acpi_table_header)) / sizeof(u64));
 VAR_4 =
  FUNC_0(VAR_5, VAR_7) + sizeof(struct acpi_table_header);
 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  FUNC_1(&VAR_9, VAR_4);
  if (!VAR_9) {

   break;
  }
  VAR_4 += sizeof(u64);
 }
 FUNC_3(VAR_7, VAR_8);

 if (VAR_11 < VAR_10)
  return VAR_2;
 else
  return VAR_3;
}
