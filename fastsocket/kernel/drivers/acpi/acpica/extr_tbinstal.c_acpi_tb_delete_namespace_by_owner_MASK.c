
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef int acpi_status ;
typedef int acpi_owner_id ;
struct TYPE_4__ {size_t count; TYPE_1__* tables; } ;
struct TYPE_3__ {int owner_id; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;

acpi_status FUNC_8(u32 VAR_6)
{
 acpi_owner_id VAR_7;
 acpi_status VAR_8;

 FUNC_1(VAR_5);

 VAR_8 = FUNC_3(VAR_1);
 if (FUNC_0(VAR_8)) {
  FUNC_7(VAR_8);
 }

 if (VAR_6 >= VAR_4.count) {



  (void)FUNC_5(VAR_1);
  FUNC_7(VAR_2);
 }



 VAR_7 = VAR_4.tables[VAR_6].owner_id;
 (void)FUNC_5(VAR_1);
 (void)FUNC_5(VAR_0);
 VAR_8 = FUNC_4(&VAR_3);

 FUNC_2(VAR_7);
 if (FUNC_0(VAR_8)) {
  FUNC_7(VAR_8);
 }

 FUNC_6(&VAR_3);

 VAR_8 = FUNC_3(VAR_0);
 FUNC_7(VAR_8);
}
