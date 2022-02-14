
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
union acpi_parse_object {TYPE_1__ named; } ;


 int VAR_0 ;
 int VAR_1 ;
 union acpi_parse_object* FUNC_0 (int ) ;

union acpi_parse_object *FUNC_1(void)
{
 union acpi_parse_object *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2) {
  return (((void*)0));
 }

 VAR_2->named.name = VAR_0;
 return (VAR_2);
}
