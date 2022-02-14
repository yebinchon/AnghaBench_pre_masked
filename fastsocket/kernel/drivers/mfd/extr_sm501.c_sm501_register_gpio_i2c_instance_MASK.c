
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sm501_platdata_gpio_i2c {int pin_scl; int pin_sda; int bus_num; int udelay; int timeout; } ;
struct sm501_devdata {int dev; } ;
struct TYPE_2__ {struct i2c_gpio_platform_data* platform_data; } ;
struct platform_device {int id; TYPE_1__ dev; } ;
struct i2c_gpio_platform_data {void* scl_pin; void* sda_pin; int udelay; int timeout; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,void*,int ,void*,int ) ;
 struct platform_device* FUNC_1 (struct sm501_devdata*,char*,int ,int) ;
 void* FUNC_2 (struct sm501_devdata*,int ) ;
 int FUNC_3 (struct sm501_devdata*,struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct sm501_devdata *VAR_1,
         struct sm501_platdata_gpio_i2c *VAR_2)
{
 struct i2c_gpio_platform_data *VAR_3;
 struct platform_device *VAR_4;

 VAR_4 = FUNC_1(VAR_1, "i2c-gpio", 0,
       sizeof(struct i2c_gpio_platform_data));
 if (!VAR_4)
  return -VAR_0;

 VAR_3 = VAR_4->dev.platform_data;





 VAR_3->sda_pin = FUNC_2(VAR_1, VAR_2->pin_sda);
 VAR_3->scl_pin = FUNC_2(VAR_1, VAR_2->pin_scl);
 VAR_3->timeout = VAR_2->timeout;
 VAR_3->udelay = VAR_2->udelay;







 VAR_4->id = VAR_2->bus_num;

 FUNC_0(VAR_1->dev, "registering i2c-%d: sda=%d (%d), scl=%d (%d)\n",
   VAR_2->bus_num,
   VAR_3->sda_pin, VAR_2->pin_sda, VAR_3->scl_pin, VAR_2->pin_scl);

 return FUNC_3(VAR_1, VAR_4);
}
