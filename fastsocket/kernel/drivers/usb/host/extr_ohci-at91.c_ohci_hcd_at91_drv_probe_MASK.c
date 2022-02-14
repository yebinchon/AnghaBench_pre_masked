
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct at91_usbh_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct at91_usbh_data {scalar_t__* vbus_pin; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,char*) ;
 int VAR_0 ;
 int FUNC_4 (int *,struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct at91_usbh_data *VAR_2 = VAR_1->dev.platform_data;
 int VAR_3;

 if (VAR_2) {





  for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->vbus_pin); VAR_3++) {
   if (VAR_2->vbus_pin[VAR_3] <= 0)
    continue;
   FUNC_3(VAR_2->vbus_pin[VAR_3], "ohci_vbus");
   FUNC_2(VAR_2->vbus_pin[VAR_3], 0);
  }
 }

 FUNC_1(&VAR_1->dev, 1);
 return FUNC_4(&VAR_0, VAR_1);
}
