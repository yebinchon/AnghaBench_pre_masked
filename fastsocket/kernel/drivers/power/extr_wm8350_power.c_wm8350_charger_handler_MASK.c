
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350_power {int ac; int usb; int battery; struct wm8350_charger_policy* policy; } ;
struct wm8350_charger_policy {int dummy; } ;
struct wm8350 {int dev; struct wm8350_power power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wm8350*,struct wm8350_charger_policy*) ;
 int FUNC_5 (struct wm8350*) ;
 int FUNC_6 (struct wm8350*) ;
 int FUNC_7 (struct wm8350*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct wm8350 *VAR_2, int VAR_3, void *VAR_4)
{
 struct wm8350_power *VAR_5 = &VAR_2->power;
 struct wm8350_charger_policy *VAR_6 = VAR_5->policy;

 switch (VAR_3) {
 case 139:
  FUNC_1(VAR_2->dev, "battery failed\n");
  break;
 case 134:
  FUNC_1(VAR_2->dev, "charger timeout\n");
  FUNC_3(&VAR_5->battery);
  break;

 case 138:
 case 140:
 case 135:
 case 137:
  FUNC_3(&VAR_5->battery);
  break;

 case 136:
  FUNC_0(VAR_2->dev, "fast charger ready\n");
  FUNC_4(VAR_2, VAR_6);
  FUNC_6(VAR_2);
  FUNC_7(VAR_2, VAR_0,
    VAR_1);
  FUNC_5(VAR_2);
  break;

 case 131:
  FUNC_2(VAR_2->dev, "battery < 3.9V\n");
  break;
 case 132:
  FUNC_2(VAR_2->dev, "battery < 3.1V\n");
  break;
 case 133:
  FUNC_2(VAR_2->dev, "battery < 2.85V\n");
  break;



 case 129:
 case 128:
  FUNC_4(VAR_2, VAR_6);
 case 130:
  FUNC_3(&VAR_5->battery);
  FUNC_3(&VAR_5->usb);
  FUNC_3(&VAR_5->ac);
  break;

 default:
  FUNC_1(VAR_2->dev, "Unknown interrupt %d\n", VAR_3);
 }
}
