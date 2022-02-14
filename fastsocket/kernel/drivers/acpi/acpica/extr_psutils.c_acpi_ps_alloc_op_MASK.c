
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ flags; } ;
union acpi_parse_object {TYPE_1__ common; } ;
typedef scalar_t__ u8 ;
typedef int u16 ;
struct acpi_opcode_info {int flags; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 union acpi_parse_object* FUNC_1 (int ) ;
 struct acpi_opcode_info* FUNC_2 (int ) ;
 int FUNC_3 (union acpi_parse_object*,int ) ;

union acpi_parse_object *FUNC_4(u16 VAR_9)
{
 union acpi_parse_object *VAR_10;
 const struct acpi_opcode_info *VAR_11;
 u8 VAR_12 = VAR_2;

 FUNC_0();

 VAR_11 = FUNC_2(VAR_9);



 if (VAR_11->flags & VAR_4) {
  VAR_12 = VAR_1;
 } else if (VAR_11->flags & VAR_6) {
  VAR_12 = VAR_3;
 } else if (VAR_9 == VAR_5) {
  VAR_12 = VAR_0;
 }



 if (VAR_12 == VAR_2) {



  VAR_10 = FUNC_1(VAR_7);
 } else {


  VAR_10 = FUNC_1(VAR_8);
 }



 if (VAR_10) {
  FUNC_3(VAR_10, VAR_9);
  VAR_10->common.flags = VAR_12;
 }

 return (VAR_10);
}
