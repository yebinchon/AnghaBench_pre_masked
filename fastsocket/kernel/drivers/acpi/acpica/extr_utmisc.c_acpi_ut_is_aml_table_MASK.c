
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct acpi_table_header {int signature; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

u8 FUNC_1(struct acpi_table_header *VAR_5)
{



 if (FUNC_0(VAR_5->signature, VAR_0) ||
     FUNC_0(VAR_5->signature, VAR_1) ||
     FUNC_0(VAR_5->signature, VAR_2)) {
  return (VAR_4);
 }

 return (VAR_3);
}
