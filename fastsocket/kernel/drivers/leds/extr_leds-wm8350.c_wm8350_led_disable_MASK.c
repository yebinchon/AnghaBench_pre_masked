
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct wm8350_led {scalar_t__ enabled; int dcdc; TYPE_1__ cdev; int isink; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct wm8350_led *VAR_0)
{
 int VAR_1;

 if (!VAR_0->enabled)
  return;

 VAR_1 = FUNC_1(VAR_0->dcdc);
 if (VAR_1 != 0) {
  FUNC_0(VAR_0->cdev.dev, "Failed to disable DCDC: %d\n", VAR_1);
  return;
 }

 VAR_1 = FUNC_1(VAR_0->isink);
 if (VAR_1 != 0) {
  FUNC_0(VAR_0->cdev.dev, "Failed to disable ISINK: %d\n", VAR_1);
  FUNC_2(VAR_0->dcdc);
  return;
 }

 VAR_0->enabled = 0;
}
