
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct plat_vlynq_data* platform_data; } ;
struct vlynq_device {TYPE_1__ dev; } ;
struct plat_vlynq_data {int gpio_bit; int reset_bit; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct vlynq_device *VAR_0)
{
 int VAR_1;
 struct plat_vlynq_data *VAR_2 = VAR_0->dev.platform_data;

 VAR_1 = FUNC_6(VAR_2->gpio_bit, "vlynq");
 if (VAR_1)
  goto out;

 FUNC_1(VAR_2->reset_bit);

 VAR_1 = FUNC_2(VAR_2->gpio_bit);
 if (VAR_1)
  goto out_enabled;

 VAR_1 = FUNC_3(VAR_2->gpio_bit);
 if (VAR_1)
  goto out_enabled;

 VAR_1 = FUNC_4(VAR_2->gpio_bit, 0);
 if (VAR_1)
  goto out_gpio_enabled;

 FUNC_8(50);

 FUNC_7(VAR_2->gpio_bit, 1);
 FUNC_8(50);

 return 0;

out_gpio_enabled:
 FUNC_2(VAR_2->gpio_bit);
out_enabled:
 FUNC_0(VAR_2->reset_bit);
 FUNC_5(VAR_2->gpio_bit);
out:
 return VAR_1;
}
