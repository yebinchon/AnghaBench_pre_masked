
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm831x_hwmon {int wm831x; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int,int) ;
 struct wm831x_hwmon* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;
 TYPE_1__* FUNC_3 (struct device_attribute*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 struct wm831x_hwmon *VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = FUNC_3(VAR_1)->index;
 int VAR_5;

 VAR_5 = FUNC_4(VAR_3->wm831x, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_5 = 512180 - (VAR_5 * 1000);
 VAR_5 = FUNC_0(VAR_5 * 10000, 10983);

 return FUNC_2(VAR_2, "%d\n", VAR_5);
}
