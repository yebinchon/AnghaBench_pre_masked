
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct acpi_ec {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acpi_ec*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct acpi_ec *VAR_2, u8 VAR_3)
{
 if (VAR_3 & VAR_0) {
  if (!FUNC_1(VAR_1, &VAR_2->flags))
   return FUNC_0(VAR_2);
 }
 return 0;
}
