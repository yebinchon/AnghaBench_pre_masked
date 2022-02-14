
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_sbs {int manager_present; int batteries_supported; int hc; struct acpi_device* device; int lock; } ;
struct acpi_device {struct acpi_sbs* driver_data; int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acpi_sbs*,int) ;
 int FUNC_1 (struct acpi_sbs*) ;
 int FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpi_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct acpi_sbs*) ;
 int VAR_5 ;
 int FUNC_6 (struct acpi_device*,int ) ;
 int FUNC_7 (int ,int ,struct acpi_sbs*) ;
 struct acpi_sbs* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct acpi_device *VAR_6)
{
 struct acpi_sbs *VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 VAR_7 = FUNC_8(sizeof(struct acpi_sbs), VAR_3);
 if (!VAR_7) {
  VAR_8 = -VAR_2;
  goto end;
 }

 FUNC_9(&VAR_7->lock);

 VAR_7->hc = FUNC_4(VAR_6->parent);
 VAR_7->device = VAR_6;
 FUNC_10(FUNC_3(VAR_6), VAR_1);
 FUNC_10(FUNC_2(VAR_6), VAR_0);
 VAR_6->driver_data = VAR_7;

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8)
  goto end;

 VAR_8 = FUNC_5(VAR_7);
 if (!VAR_8) {
  VAR_7->manager_present = 1;
  for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9)
   if ((VAR_7->batteries_supported & (1 << VAR_9)))
    FUNC_0(VAR_7, VAR_9);
 } else
  FUNC_0(VAR_7, 0);
 FUNC_7(VAR_7->hc, VAR_5, VAR_7);
      end:
 if (VAR_8)
  FUNC_6(VAR_6, 0);
 return VAR_8;
}
