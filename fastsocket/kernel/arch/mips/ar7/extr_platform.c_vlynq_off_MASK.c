
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct plat_vlynq_data* platform_data; } ;
struct vlynq_device {TYPE_1__ dev; } ;
struct plat_vlynq_data {int reset_bit; int gpio_bit; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct vlynq_device *VAR_0)
{
 struct plat_vlynq_data *VAR_1 = VAR_0->dev.platform_data;
 FUNC_1(VAR_1->gpio_bit);
 FUNC_2(VAR_1->gpio_bit);
 FUNC_0(VAR_1->reset_bit);
}
