
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_hardware_id {int list; void* id; } ;
struct TYPE_2__ {int ids; } ;
struct acpi_device {TYPE_1__ pnp; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_hardware_id*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (void*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(struct acpi_device *VAR_1, const char *VAR_2)
{
 struct acpi_hardware_id *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return;

 VAR_3->id = FUNC_1(FUNC_4(VAR_2) + 1, VAR_0);
 if (!VAR_3->id) {
  FUNC_0(VAR_3);
  return;
 }

 FUNC_3(VAR_3->id, VAR_2);
 FUNC_2(&VAR_3->list, &VAR_1->pnp.ids);
}
