
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350_led {int isink; int dcdc; int cdev; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct wm8350_led*) ;
 int FUNC_2 (int *) ;
 struct wm8350_led* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct wm8350_led*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct wm8350_led *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(&VAR_1->cdev);
 FUNC_0();
 FUNC_5(VAR_1);
 FUNC_4(VAR_1->dcdc);
 FUNC_4(VAR_1->isink);
 FUNC_1(VAR_1);
 return 0;
}
