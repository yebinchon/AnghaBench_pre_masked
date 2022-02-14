
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct acpi_processor {int performance_platform_limit; } ;
struct TYPE_2__ {int device_class; } ;
struct acpi_device {int dev; TYPE_1__ pnp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;



 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (struct acpi_device*,int,int) ;
 struct acpi_processor* FUNC_3 (struct acpi_device*) ;
 int FUNC_4 (struct acpi_processor*) ;
 int FUNC_5 (struct acpi_processor*) ;
 int FUNC_6 (struct acpi_processor*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct acpi_device *VAR_1, u32 VAR_2)
{
 struct acpi_processor *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 if (!VAR_3)
  return;

 switch (VAR_2) {
 case 130:
  VAR_4 = VAR_3->performance_platform_limit;
  FUNC_5(VAR_3);
  if (VAR_4 == VAR_3->performance_platform_limit)
   break;
  FUNC_2(VAR_1, VAR_2,
     VAR_3->performance_platform_limit);
  FUNC_1(VAR_1->pnp.device_class,
        FUNC_7(&VAR_1->dev), VAR_2,
        VAR_3->performance_platform_limit);
  break;
 case 129:
  FUNC_4(VAR_3);
  FUNC_2(VAR_1, VAR_2, 0);
  FUNC_1(VAR_1->pnp.device_class,
        FUNC_7(&VAR_1->dev), VAR_2, 0);
  break;
 case 128:
  FUNC_6(VAR_3);
  FUNC_2(VAR_1, VAR_2, 0);
  FUNC_1(VAR_1->pnp.device_class,
        FUNC_7(&VAR_1->dev), VAR_2, 0);
 default:
  FUNC_0((VAR_0,
      "Unsupported event [0x%x]\n", VAR_2));
  break;
 }

 return;
}
