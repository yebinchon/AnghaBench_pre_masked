
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int lock; } ;


 int FUNC_0 (struct acpi_ec*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct acpi_ec *VAR_1 = VAR_0;
 if (!VAR_1)
  return;
 FUNC_1(&VAR_1->lock);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->lock);
}
