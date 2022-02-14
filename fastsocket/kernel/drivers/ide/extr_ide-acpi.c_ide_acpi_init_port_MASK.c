
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ide_acpi_hwif_link {int dummy; } ;
struct TYPE_6__ {TYPE_2__* acpidata; int name; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_7__ {int obj_handle; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int,int ) ;

void FUNC_4(ide_hwif_t *VAR_1)
{
 VAR_1->acpidata = FUNC_3(sizeof(struct ide_acpi_hwif_link), VAR_0);
 if (!VAR_1->acpidata)
  return;

 VAR_1->acpidata->obj_handle = FUNC_1(VAR_1);
 if (!VAR_1->acpidata->obj_handle) {
  FUNC_0("no ACPI object for %s found\n", VAR_1->name);
  FUNC_2(VAR_1->acpidata);
  VAR_1->acpidata = ((void*)0);
 }
}
