
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pointer; int length; } ;
struct TYPE_3__ {scalar_t__ value; } ;
union acpi_object {TYPE_2__ buffer; void* type; TYPE_1__ integer; } ;
typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct guid_block {int flags; scalar_t__ instance_count; int object_id; } ;
struct wmi_block {int handle; struct guid_block gblock; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {int pointer; int length; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,struct acpi_object_list*,struct acpi_buffer*) ;
 int FUNC_1 (char const*,struct wmi_block**) ;
 int FUNC_2 (char*,int ,int) ;

acpi_status FUNC_3(const char *VAR_8, u8 VAR_9,
u32 VAR_10, const struct acpi_buffer *VAR_11, struct acpi_buffer *VAR_12)
{
 struct guid_block *VAR_13 = ((void*)0);
 struct wmi_block *VAR_14 = ((void*)0);
 acpi_handle VAR_15;
 acpi_status VAR_16;
 struct acpi_object_list VAR_17;
 union acpi_object VAR_18[3];
 char VAR_19[5] = "WM";

 if (!FUNC_1(VAR_8, &VAR_14))
  return VAR_7;

 VAR_13 = &VAR_14->gblock;
 VAR_15 = VAR_14->handle;

 if (!(VAR_13->flags & VAR_3))
  return VAR_5;

 if (VAR_13->instance_count < VAR_9)
  return VAR_6;

 VAR_17.count = 2;
 VAR_17.pointer = VAR_18;
 VAR_18[0].type = VAR_1;
 VAR_18[0].integer.value = VAR_9;
 VAR_18[1].type = VAR_1;
 VAR_18[1].integer.value = VAR_10;

 if (VAR_11) {
  VAR_17.count = 3;

  if (VAR_13->flags & VAR_4) {
   VAR_18[2].type = VAR_2;
  } else {
   VAR_18[2].type = VAR_0;
  }
  VAR_18[2].buffer.length = VAR_11->length;
  VAR_18[2].buffer.pointer = VAR_11->pointer;
 }

 FUNC_2(VAR_19, VAR_13->object_id, 2);

 VAR_16 = FUNC_0(VAR_15, VAR_19, &VAR_17, VAR_12);

 return VAR_16;
}
