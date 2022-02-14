
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct acpi_table_header {int signature; } ;
typedef int acpi_status ;
typedef int acpi_physical_address ;
struct TYPE_4__ {size_t count; size_t size; TYPE_1__* tables; } ;
struct TYPE_3__ {size_t length; int signature; int flags; scalar_t__ owner_id; struct acpi_table_header* pointer; int address; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 () ;

acpi_status
FUNC_3(acpi_physical_address VAR_2,
      struct acpi_table_header *VAR_3,
      u32 VAR_4, u8 VAR_5, u32 *VAR_6)
{
 acpi_status VAR_7 = VAR_0;



 if (VAR_1.count >= VAR_1.size) {
  VAR_7 = FUNC_2();
  if (FUNC_0(VAR_7)) {
   return (VAR_7);
  }
 }



 VAR_1.tables[VAR_1.count].
     address = VAR_2;
 VAR_1.tables[VAR_1.count].
     pointer = VAR_3;
 VAR_1.tables[VAR_1.count].length =
     VAR_4;
 VAR_1.tables[VAR_1.count].
     owner_id = 0;
 VAR_1.tables[VAR_1.count].flags =
     VAR_5;

 FUNC_1(&
      (VAR_1.
       tables[VAR_1.count].signature),
      VAR_3->signature);

 *VAR_6 = VAR_1.count;
 VAR_1.count++;
 return (VAR_7);
}
