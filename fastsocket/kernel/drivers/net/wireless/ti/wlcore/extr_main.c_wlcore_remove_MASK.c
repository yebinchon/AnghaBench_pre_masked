
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int irq; int dev; scalar_t__ irq_wake_enabled; int initialized; int nvs_loading_complete; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct wl1271*) ;
 struct wl1271* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct wl1271*) ;
 int FUNC_6 (struct wl1271*) ;

int FUNC_7(struct platform_device *VAR_0)
{
 struct wl1271 *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(&VAR_1->nvs_loading_complete);
 if (!VAR_1->initialized)
  return 0;

 if (VAR_1->irq_wake_enabled) {
  FUNC_0(VAR_1->dev, 0);
  FUNC_1(VAR_1->irq);
 }
 FUNC_5(VAR_1);
 FUNC_2(VAR_1->irq, VAR_1);
 FUNC_6(VAR_1);

 return 0;
}
