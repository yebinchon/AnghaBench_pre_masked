
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct wm831x_rtc {int alarm_enabled; int rtc; struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,char*,int,...) ;
 struct wm831x* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (struct wm831x_rtc*) ;
 struct wm831x_rtc* FUNC_6 (int,int ) ;
 int FUNC_7 (struct platform_device*,char*) ;
 int FUNC_8 (struct platform_device*,struct wm831x_rtc*) ;
 int FUNC_9 (char*,TYPE_1__*,int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (struct wm831x*,int ) ;
 int FUNC_11 (struct wm831x*,int,int ,int ,char*,struct wm831x_rtc*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_9)
{
 struct wm831x *VAR_10 = FUNC_3(VAR_9->dev.parent);
 struct wm831x_rtc *VAR_11;
 int VAR_12 = FUNC_7(VAR_9, "PER");
 int VAR_13 = FUNC_7(VAR_9, "ALM");
 int VAR_14 = 0;

 VAR_11 = FUNC_6(sizeof(*VAR_11), VAR_1);
 if (VAR_11 == ((void*)0))
  return -VAR_0;

 FUNC_8(VAR_9, VAR_11);
 VAR_11->wm831x = VAR_10;

 VAR_14 = FUNC_10(VAR_10, VAR_5);
 if (VAR_14 < 0) {
  FUNC_2(&VAR_9->dev, "Failed to read RTC control: %d\n", VAR_14);
  goto err;
 }
 if (VAR_14 & VAR_4)
  VAR_11->alarm_enabled = 1;

 FUNC_4(&VAR_9->dev, 1);

 VAR_11->rtc = FUNC_9("wm831x", &VAR_9->dev,
           &VAR_8, VAR_3);
 if (FUNC_0(VAR_11->rtc)) {
  VAR_14 = FUNC_1(VAR_11->rtc);
  goto err;
 }

 VAR_14 = FUNC_11(VAR_10, VAR_12, VAR_7,
     VAR_2, "wm831x_rtc_per",
     VAR_11);
 if (VAR_14 != 0) {
  FUNC_2(&VAR_9->dev, "Failed to request periodic IRQ %d: %d\n",
   VAR_12, VAR_14);
 }

 VAR_14 = FUNC_11(VAR_10, VAR_13, VAR_6,
     VAR_2, "wm831x_rtc_alm",
     VAR_11);
 if (VAR_14 != 0) {
  FUNC_2(&VAR_9->dev, "Failed to request alarm IRQ %d: %d\n",
   VAR_13, VAR_14);
 }

 return 0;

err:
 FUNC_5(VAR_11);
 return VAR_14;
}
