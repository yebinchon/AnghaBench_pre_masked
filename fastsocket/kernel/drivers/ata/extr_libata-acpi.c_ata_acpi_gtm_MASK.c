
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int pointer; } ;
union acpi_object {scalar_t__ type; TYPE_1__ buffer; } ;
struct ata_port {int acpi_handle; } ;
struct ata_acpi_gtm {int dummy; } ;
struct acpi_buffer {union acpi_object* pointer; int length; } ;
typedef scalar_t__ acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_2 (struct ata_port*,int ,char*,scalar_t__) ;
 int FUNC_3 (union acpi_object*) ;
 int FUNC_4 (struct ata_acpi_gtm*,int ,int) ;

int FUNC_5(struct ata_port *VAR_7, struct ata_acpi_gtm *VAR_8)
{
 struct acpi_buffer VAR_9 = { .length = VAR_0 };
 union acpi_object *VAR_10;
 acpi_status VAR_11;
 int VAR_12 = 0;

 VAR_11 = FUNC_1(VAR_7->acpi_handle, "_GTM", ((void*)0), &VAR_9);

 VAR_12 = -VAR_4;
 if (VAR_11 == VAR_2)
  goto out_free;

 VAR_12 = -VAR_3;
 if (FUNC_0(VAR_11)) {
  FUNC_2(VAR_7, VAR_5,
    "ACPI get timing mode failed (AE 0x%x)\n",
    VAR_11);
  goto out_free;
 }

 VAR_10 = VAR_9.pointer;
 if (VAR_10->type != VAR_1) {
  FUNC_2(VAR_7, VAR_6,
    "_GTM returned unexpected object type 0x%x\n",
    VAR_10->type);

  goto out_free;
 }

 if (VAR_10->buffer.length != sizeof(struct ata_acpi_gtm)) {
  FUNC_2(VAR_7, VAR_5,
    "_GTM returned invalid length %d\n",
    VAR_10->buffer.length);
  goto out_free;
 }

 FUNC_4(VAR_8, VAR_10->buffer.pointer, sizeof(struct ata_acpi_gtm));
 VAR_12 = 0;
 out_free:
 FUNC_3(VAR_9.pointer);
 return VAR_12;
}
