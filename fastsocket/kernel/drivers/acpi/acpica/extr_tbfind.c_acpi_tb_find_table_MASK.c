
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct acpi_table_header {int signature; int oem_table_id; int oem_id; } ;
typedef int acpi_status ;
struct TYPE_6__ {size_t count; TYPE_2__* tables; } ;
struct TYPE_5__ {TYPE_1__* pointer; int signature; } ;
struct TYPE_4__ {int * oem_table_id; int * oem_id; int * signature; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct acpi_table_header*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;

acpi_status
FUNC_8(char *VAR_8,
     char *VAR_9, char *VAR_10, u32 *VAR_11)
{
 u32 VAR_12;
 acpi_status VAR_13;
 struct acpi_table_header VAR_14;

 FUNC_2(VAR_7);



 FUNC_4(&VAR_14, 0, sizeof(struct acpi_table_header));
 FUNC_5(VAR_14.signature, VAR_8, VAR_1);
 FUNC_5(VAR_14.oem_id, VAR_9, VAR_2);
 FUNC_5(VAR_14.oem_table_id, VAR_10, VAR_3);



 for (VAR_12 = 0; VAR_12 < VAR_6.count; ++VAR_12) {
  if (FUNC_3(&(VAR_6.tables[VAR_12].signature),
    VAR_14.signature, VAR_1)) {



   continue;
  }



  if (!VAR_6.tables[VAR_12].pointer) {



   VAR_13 =
       FUNC_6(&VAR_6.
       tables[VAR_12]);
   if (FUNC_1(VAR_13)) {
    FUNC_7(VAR_13);
   }

   if (!VAR_6.tables[VAR_12].pointer) {
    continue;
   }
  }



  if (!FUNC_3
      (VAR_6.tables[VAR_12].pointer->signature,
       VAR_14.signature, VAR_1) && (!VAR_9[0]
          ||
          !FUNC_3
          (VAR_6.
           tables[VAR_12].pointer->
           oem_id,
           VAR_14.oem_id,
           VAR_2))
      && (!VAR_10[0]
   || !FUNC_3(VAR_6.tables[VAR_12].
     pointer->oem_table_id,
     VAR_14.oem_table_id,
     VAR_3))) {
   *VAR_11 = VAR_12;

   FUNC_0((VAR_0,
       "Found table [%4.4s]\n",
       VAR_14.signature));
   FUNC_7(VAR_5);
  }
 }

 FUNC_7(VAR_4);
}
