
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm97xx {int input_dev; int touch_dev; int battery_dev; } ;
struct device {int dummy; } ;


 struct wm97xx* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct wm97xx*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct wm97xx *VAR_1 = FUNC_0(VAR_0);

 FUNC_3(VAR_1->battery_dev);
 FUNC_3(VAR_1->touch_dev);
 FUNC_1(VAR_1->input_dev);
 FUNC_2(VAR_1);

 return 0;
}
