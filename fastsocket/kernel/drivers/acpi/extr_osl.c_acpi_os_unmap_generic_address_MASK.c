
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct acpi_ioremap {int dummy; } ;
struct acpi_generic_address {scalar_t__ space_id; int bit_width; int address; } ;
typedef int addr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct acpi_ioremap* FUNC_0 (int ,int) ;
 int FUNC_1 (struct acpi_ioremap*) ;
 int FUNC_2 (struct acpi_ioremap*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct acpi_generic_address *VAR_2)
{
 u64 VAR_3;
 struct acpi_ioremap *VAR_4;

 if (VAR_2->space_id != VAR_0)
  return;


 FUNC_3(&VAR_3, &VAR_2->address, sizeof(VAR_3));
 if (!VAR_3 || !VAR_2->bit_width)
  return;

 FUNC_4(&VAR_1);
 VAR_4 = FUNC_0(VAR_3, VAR_2->bit_width / 8);
 if (!VAR_4) {
  FUNC_5(&VAR_1);
  return;
 }
 FUNC_1(VAR_4);
 FUNC_5(&VAR_1);

 FUNC_2(VAR_4);
}
