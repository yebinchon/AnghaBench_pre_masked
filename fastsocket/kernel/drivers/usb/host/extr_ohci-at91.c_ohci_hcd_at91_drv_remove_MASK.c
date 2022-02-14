
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct at91_usbh_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct at91_usbh_data {scalar_t__* vbus_pin; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ,struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct at91_usbh_data *VAR_1 = VAR_0->dev.platform_data;
 int VAR_2;

 if (VAR_1) {
  for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->vbus_pin); VAR_2++) {
   if (VAR_1->vbus_pin[VAR_2] <= 0)
    continue;
   FUNC_2(VAR_1->vbus_pin[VAR_2], 1);
   FUNC_3(VAR_1->vbus_pin[VAR_2]);
  }
 }

 FUNC_1(&VAR_0->dev, 0);
 FUNC_5(FUNC_4(VAR_0), VAR_0);
 return 0;
}
