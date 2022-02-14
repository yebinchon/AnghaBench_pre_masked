
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_generic_state {int dummy; } acpi_generic_state ;
typedef int u16 ;
typedef int acpi_status ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 union acpi_generic_state* FUNC_1 (void*,void*,int ) ;
 int FUNC_2 (union acpi_generic_state**,union acpi_generic_state*) ;

acpi_status
FUNC_3(void *VAR_2,
      void *VAR_3,
      u16 VAR_4,
      union acpi_generic_state **VAR_5)
{
 union acpi_generic_state *VAR_6;

 FUNC_0();

 VAR_6 =
     FUNC_1(VAR_2, VAR_3, VAR_4);
 if (!VAR_6) {
  return (VAR_0);
 }

 FUNC_2(VAR_5, VAR_6);
 return (VAR_1);
}
