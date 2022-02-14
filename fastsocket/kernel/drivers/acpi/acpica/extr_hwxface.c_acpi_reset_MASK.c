
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_generic_address {scalar_t__ space_id; scalar_t__ address; } ;
typedef int acpi_status ;
typedef int acpi_io_address ;
struct TYPE_2__ {int flags; int reset_value; struct acpi_generic_address reset_register; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int (*) ()) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int ,struct acpi_generic_address*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;

acpi_status FUNC_4(void)
{
 struct acpi_generic_address *VAR_4;
 acpi_status VAR_5;

 FUNC_0(FUNC_4);

 VAR_4 = &VAR_3.reset_register;



 if (!(VAR_3.flags & VAR_1) ||
     !VAR_4->address) {
  FUNC_3(VAR_2);
 }

 if (VAR_4->space_id == VAR_0) {






  VAR_5 =
      FUNC_2((acpi_io_address) VAR_4->address,
           VAR_3.reset_value, 8);
 } else {


  VAR_5 = FUNC_1(VAR_3.reset_value, VAR_4);
 }

 FUNC_3(VAR_5);
}
