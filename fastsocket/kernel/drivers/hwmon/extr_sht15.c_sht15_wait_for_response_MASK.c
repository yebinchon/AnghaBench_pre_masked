
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sht15_data {TYPE_1__* pdata; int dev; } ;
struct TYPE_2__ {int gpio_sck; int gpio_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sht15_data*) ;

__attribute__((used)) static int FUNC_6(struct sht15_data *VAR_3)
{
 FUNC_1(VAR_3->pdata->gpio_data);
 FUNC_3(VAR_3->pdata->gpio_sck, 1);
 FUNC_4(VAR_1);
 if (FUNC_2(VAR_3->pdata->gpio_data)) {
  FUNC_3(VAR_3->pdata->gpio_sck, 0);
  FUNC_0(VAR_3->dev, "Command not acknowledged\n");
  FUNC_5(VAR_3);
  return -VAR_0;
 }
 FUNC_3(VAR_3->pdata->gpio_sck, 0);
 FUNC_4(VAR_2);
 return 0;
}
