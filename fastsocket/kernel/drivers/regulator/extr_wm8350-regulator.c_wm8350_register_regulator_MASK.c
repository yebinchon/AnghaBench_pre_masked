
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int max_dcdc; int max_isink; struct platform_device** pdev; } ;
struct wm8350 {TYPE_2__ pmic; int dev; } ;
struct regulator_init_data {struct wm8350* driver_data; } ;
struct TYPE_3__ {int parent; struct regulator_init_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct platform_device*) ;
 struct platform_device* FUNC_2 (char*,int) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,struct wm8350*) ;

int FUNC_5(struct wm8350 *VAR_9, int VAR_10,
         struct regulator_init_data *VAR_11)
{
 struct platform_device *VAR_12;
 int VAR_13;
 if (VAR_10 < 0 || VAR_10 >= VAR_4)
  return -VAR_1;

 if (VAR_9->pmic.pdev[VAR_10])
  return -VAR_0;

 if (VAR_10 >= VAR_5 && VAR_10 <= VAR_6 &&
     VAR_10 > VAR_9->pmic.max_dcdc)
  return -VAR_2;
 if (VAR_10 >= VAR_7 && VAR_10 <= VAR_8 &&
     VAR_10 > VAR_9->pmic.max_isink)
  return -VAR_2;

 VAR_12 = FUNC_2("wm8350-regulator", VAR_10);
 if (!VAR_12)
  return -VAR_3;

 VAR_9->pmic.pdev[VAR_10] = VAR_12;

 VAR_11->driver_data = VAR_9;

 VAR_12->dev.platform_data = VAR_11;
 VAR_12->dev.parent = VAR_9->dev;
 FUNC_4(VAR_12, VAR_9);

 VAR_13 = FUNC_1(VAR_12);

 if (VAR_13 != 0) {
  FUNC_0(VAR_9->dev, "Failed to register regulator %d: %d\n",
   VAR_10, VAR_13);
  FUNC_3(VAR_12);
  VAR_9->pmic.pdev[VAR_10] = ((void*)0);
 }

 return VAR_13;
}
