
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_processor {int id; } ;


 int FUNC_0 (struct acpi_processor*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

int FUNC_2(struct acpi_processor *VAR_1)
{
 int VAR_2;

 if (VAR_0)
  return 0;

 VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 < 0)
  return (VAR_2);
 else
  return FUNC_1(VAR_1->id);
}
