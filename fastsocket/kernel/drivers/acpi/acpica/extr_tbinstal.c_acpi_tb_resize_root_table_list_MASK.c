
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct acpi_table_desc {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_size ;
struct TYPE_2__ {int flags; scalar_t__ size; struct acpi_table_desc* tables; } ;


 struct acpi_table_desc* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct acpi_table_desc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct acpi_table_desc*,struct acpi_table_desc*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_5 (int ) ;
 int VAR_8 ;

acpi_status FUNC_6(void)
{
 struct acpi_table_desc *VAR_9;

 FUNC_3(VAR_8);



 if (!(VAR_7.flags & VAR_0)) {
  FUNC_1((VAR_3,
       "Resize of Root Table Array is not allowed"));
  FUNC_5(VAR_6);
 }



 VAR_9 = FUNC_0(((acpi_size) VAR_7.
           size +
           VAR_2) *
          sizeof(struct acpi_table_desc));
 if (!VAR_9) {
  FUNC_1((VAR_3,
       "Could not allocate new root table array"));
  FUNC_5(VAR_4);
 }



 if (VAR_7.tables) {
  FUNC_4(VAR_9, VAR_7.tables,
       (acpi_size) VAR_7.size *
       sizeof(struct acpi_table_desc));

  if (VAR_7.flags & VAR_1) {
   FUNC_2(VAR_7.tables);
  }
 }

 VAR_7.tables = VAR_9;
 VAR_7.size += VAR_2;
 VAR_7.flags |= (u8) VAR_1;

 FUNC_5(VAR_5);
}
