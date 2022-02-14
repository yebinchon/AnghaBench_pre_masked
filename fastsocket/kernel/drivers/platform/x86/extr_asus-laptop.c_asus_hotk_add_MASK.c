
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct asus_hotk {int dummy; } ;
struct acpi_device {TYPE_1__* driver_data; int handle; } ;
struct TYPE_4__ {int ledd_status; int light_level; struct TYPE_4__* name; scalar_t__ light_switch; struct acpi_device* device; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_10 ;
 int * VAR_11 ;
 TYPE_1__* VAR_12 ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_13 ;
 TYPE_1__* FUNC_5 (int,int ) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,int ) ;
 int * VAR_16 ;
 int FUNC_12 (int *,int,int ) ;

__attribute__((used)) static int FUNC_13(struct acpi_device *VAR_17)
{
 int VAR_18;

 if (!VAR_17)
  return -VAR_4;

 FUNC_6("Asus Laptop Support version %s\n",
        VAR_2);

 VAR_12 = FUNC_5(sizeof(struct asus_hotk), VAR_6);
 if (!VAR_12)
  return -VAR_5;

 VAR_12->handle = VAR_17->handle;
 FUNC_11(FUNC_1(VAR_17), VAR_1);
 FUNC_11(FUNC_0(VAR_17), VAR_0);
 VAR_17->driver_data = VAR_12;
 VAR_12->device = VAR_17;

 VAR_18 = FUNC_3();
 if (VAR_18)
  goto end;

 FUNC_2();

 VAR_10 = 1;


 FUNC_12(VAR_11, 1, VAR_3);
 FUNC_12(VAR_16, 1, VAR_9);


 FUNC_12(((void*)0), FUNC_7(VAR_3), VAR_3);
 FUNC_12(((void*)0), FUNC_7(VAR_9), VAR_9);


 FUNC_12(((void*)0), 1, VAR_8);


 if (VAR_13)
  FUNC_8(1);


 VAR_12->ledd_status = 0xFFF;


 VAR_12->light_switch = 0;
 VAR_12->light_level = 5;

 if (VAR_15)
  FUNC_10(VAR_12->light_switch);

 if (VAR_14)
  FUNC_9(VAR_12->light_level);


 FUNC_12(((void*)0), 1, VAR_7);

end:
 if (VAR_18) {
  FUNC_4(VAR_12->name);
  FUNC_4(VAR_12);
 }

 return VAR_18;
}
