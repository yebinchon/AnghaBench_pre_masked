
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct acpi_table_header {int dummy; } ;
typedef int acpi_physical_address ;
struct TYPE_6__ {scalar_t__ Xfacs; scalar_t__ Xdsdt; } ;
struct TYPE_5__ {TYPE_1__* tables; } ;
struct TYPE_4__ {size_t length; int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 struct acpi_table_header* FUNC_0 (int ,size_t) ;
 int FUNC_1 (struct acpi_table_header*,size_t) ;
 int FUNC_2 (struct acpi_table_header*,size_t) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct acpi_table_header*,size_t) ;

void FUNC_5(u32 VAR_6)
{
 u32 VAR_7;
 struct acpi_table_header *VAR_8;
 VAR_7 = VAR_5.tables[VAR_6].length;

 VAR_8 =
     FUNC_0(VAR_5.tables[VAR_6].
          address, VAR_7);
 if (!VAR_8) {
  return;
 }





 (void)FUNC_4(VAR_8, VAR_7);



 FUNC_2(VAR_8, VAR_7);



 FUNC_1(VAR_8, VAR_7);



 FUNC_3((acpi_physical_address) VAR_4.Xdsdt,
         VAR_0, VAR_2);

 FUNC_3((acpi_physical_address) VAR_4.Xfacs,
         VAR_1, VAR_3);
}
