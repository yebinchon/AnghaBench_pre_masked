
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; void* type; } ;
typedef scalar_t__ u8 ;
struct guid_block {scalar_t__ instance_count; int flags; int object_id; } ;
struct wmi_block {int handle; struct guid_block gblock; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,struct acpi_object_list*,struct acpi_buffer*) ;
 int FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (char const*,struct wmi_block**) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int ,int) ;

acpi_status FUNC_6(const char *VAR_6, u8 VAR_7,
struct acpi_buffer *VAR_8)
{
 struct guid_block *VAR_9 = ((void*)0);
 struct wmi_block *VAR_10 = ((void*)0);
 acpi_handle VAR_11, VAR_12;
 acpi_status VAR_13, VAR_14 = VAR_5;
 struct acpi_object_list VAR_15, VAR_16;
 union acpi_object VAR_17[1], VAR_18[1];
 char VAR_19[5];
 char VAR_20[5] = "WC";

 if (!VAR_6 || !VAR_8)
  return VAR_4;

 if (!FUNC_3(VAR_6, &VAR_10))
  return VAR_5;

 VAR_9 = &VAR_10->gblock;
 VAR_11 = VAR_10->handle;

 if (VAR_9->instance_count < VAR_7)
  return VAR_4;


 if (VAR_9->flags & (VAR_1 | VAR_3))
  return VAR_5;

 VAR_15.count = 1;
 VAR_15.pointer = VAR_18;
 VAR_18[0].type = VAR_0;
 VAR_18[0].integer.value = VAR_7;





 if (VAR_9->flags & VAR_2) {
  VAR_16.count = 1;
  VAR_16.pointer = VAR_17;
  VAR_17[0].type = VAR_0;
  VAR_17[0].integer.value = 1;

  FUNC_5(VAR_20, VAR_9->object_id, 2);






  VAR_14 = FUNC_2(VAR_11, VAR_20, &VAR_12);
  if (FUNC_0(VAR_14))
   VAR_14 = FUNC_1(VAR_11, VAR_20,
    &VAR_16, ((void*)0));
 }

 FUNC_4(VAR_19, "WQ");
 FUNC_5(VAR_19, VAR_9->object_id, 2);

 VAR_13 = FUNC_1(VAR_11, VAR_19, &VAR_15, VAR_8);





 if ((VAR_9->flags & VAR_2) && FUNC_0(VAR_14)) {
  VAR_17[0].integer.value = 0;
  VAR_13 = FUNC_1(VAR_11,
  VAR_20, &VAR_16, ((void*)0));
 }

 return VAR_13;
}
