
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int device_class; } ;
struct acpi_device {int dev; TYPE_3__ pnp; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct acpi_ac {TYPE_2__ charger; int state; } ;
struct TYPE_4__ {int kobj; } ;



 int VAR_0 ;
 int FUNC_0 (int ) ;


 int VAR_1 ;
 int FUNC_1 (struct acpi_ac*) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (struct acpi_device*,int,int) ;
 struct acpi_ac* FUNC_4 (struct acpi_device*) ;
 int FUNC_5 (struct acpi_device*,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(struct acpi_device *VAR_2, u32 VAR_3)
{
 struct acpi_ac *VAR_4 = FUNC_4(VAR_2);


 if (!VAR_4)
  return;

 switch (VAR_3) {
 default:
  FUNC_0((VAR_0,
      "Unsupported event [0x%x]\n", VAR_3));
 case 130:
 case 129:
 case 128:
  FUNC_1(VAR_4);
  FUNC_3(VAR_2, VAR_3, (u32) VAR_4->state);
  FUNC_2(VAR_2->pnp.device_class,
        FUNC_6(&VAR_2->dev), VAR_3,
        (u32) VAR_4->state);
  FUNC_5(VAR_2, VAR_3, (u32) VAR_4->state);



 }

 return;
}
