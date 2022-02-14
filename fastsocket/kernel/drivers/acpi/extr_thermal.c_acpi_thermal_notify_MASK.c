
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct acpi_thermal {int dummy; } ;
struct TYPE_2__ {int device_class; } ;
struct acpi_device {int dev; TYPE_1__ pnp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (struct acpi_device*,int,int ) ;
 struct acpi_thermal* FUNC_3 (struct acpi_device*) ;
 int FUNC_4 (struct acpi_thermal*) ;
 int FUNC_5 (struct acpi_thermal*,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct acpi_device *VAR_3, u32 VAR_4)
{
 struct acpi_thermal *VAR_5 = FUNC_3(VAR_3);


 if (!VAR_5)
  return;

 switch (VAR_4) {
 case 129:
  FUNC_4(VAR_5);
  break;
 case 128:
  FUNC_5(VAR_5, VAR_2);
  FUNC_4(VAR_5);
  FUNC_2(VAR_3, VAR_4, 0);
  FUNC_1(VAR_3->pnp.device_class,
        FUNC_6(&VAR_3->dev), VAR_4, 0);
  break;
 case 130:
  FUNC_5(VAR_5, VAR_1);
  FUNC_4(VAR_5);
  FUNC_2(VAR_3, VAR_4, 0);
  FUNC_1(VAR_3->pnp.device_class,
        FUNC_6(&VAR_3->dev), VAR_4, 0);
  break;
 default:
  FUNC_0((VAR_0,
      "Unsupported event [0x%x]\n", VAR_4));
  break;
 }
}
