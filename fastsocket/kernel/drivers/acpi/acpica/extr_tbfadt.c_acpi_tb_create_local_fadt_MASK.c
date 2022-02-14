
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_table_header {int revision; } ;
struct acpi_table_fadt {int dummy; } ;


 int FUNC_0 (int *,struct acpi_table_header*,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void FUNC_7(struct acpi_table_header *VAR_2, u32 VAR_3)
{





 if (VAR_3 > sizeof(struct acpi_table_fadt)) {
  FUNC_3((VAR_0,
         "FADT (revision %u) is longer than ACPI 2.0 version, "
         "truncating length 0x%X to 0x%X",
         VAR_2->revision, VAR_3,
         (u32)sizeof(struct acpi_table_fadt)));
 }



 FUNC_1(&VAR_1, 0, sizeof(struct acpi_table_fadt));



 FUNC_0(&VAR_1, VAR_2,
      FUNC_2(VAR_3, sizeof(struct acpi_table_fadt)));



 FUNC_4();



 FUNC_6();



 FUNC_5();
}
