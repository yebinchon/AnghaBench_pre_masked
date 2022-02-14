
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tosa_bt_data {int gpio_reset; int gpio_pwr; } ;
struct rfkill {int dummy; } ;
struct TYPE_2__ {struct tosa_bt_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct platform_device*,struct rfkill*) ;
 struct rfkill* FUNC_4 (char*,TYPE_1__*,int ,int *,struct tosa_bt_data*) ;
 int FUNC_5 (struct rfkill*) ;
 int FUNC_6 (struct rfkill*) ;
 int FUNC_7 (struct rfkill*,char*) ;
 int FUNC_8 (struct tosa_bt_data*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_3)
{
 int VAR_4;
 struct rfkill *VAR_5;

 struct tosa_bt_data *VAR_6 = VAR_3->dev.platform_data;

 VAR_4 = FUNC_2(VAR_6->gpio_reset, "Bluetooth reset");
 if (VAR_4)
  goto err_reset;
 VAR_4 = FUNC_0(VAR_6->gpio_reset, 0);
 if (VAR_4)
  goto err_reset_dir;
 VAR_4 = FUNC_2(VAR_6->gpio_pwr, "Bluetooth power");
 if (VAR_4)
  goto err_pwr;
 VAR_4 = FUNC_0(VAR_6->gpio_pwr, 0);
 if (VAR_4)
  goto err_pwr_dir;

 VAR_5 = FUNC_4("tosa-bt", &VAR_3->dev, VAR_1,
      &VAR_2, VAR_6);
 if (!VAR_5) {
  VAR_4 = -VAR_0;
  goto err_rfk_alloc;
 }

 FUNC_7(VAR_5, "tosa-bt");

 VAR_4 = FUNC_6(VAR_5);
 if (VAR_4)
  goto err_rfkill;

 FUNC_3(VAR_3, VAR_5);

 return 0;

err_rfkill:
 FUNC_5(VAR_5);
err_rfk_alloc:
 FUNC_8(VAR_6);
err_pwr_dir:
 FUNC_1(VAR_6->gpio_pwr);
err_pwr:
err_reset_dir:
 FUNC_1(VAR_6->gpio_reset);
err_reset:
 return VAR_4;
}
