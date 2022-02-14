
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350_rtc {int rtc; } ;
struct wm8350 {int dev; struct wm8350_rtc rtc; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int) ;
 struct wm8350* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (char*,int *,int *,int ) ;
 int FUNC_7 (struct wm8350*,int ,int ) ;
 int FUNC_8 (struct wm8350*,int ) ;
 int FUNC_9 (struct wm8350*) ;
 int FUNC_10 (struct wm8350*,int ) ;
 int FUNC_11 (struct wm8350*) ;
 int FUNC_12 (struct wm8350*,int ,int ,int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_13 (struct wm8350*,int ,int) ;
 int FUNC_14 (struct wm8350*,int ) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_17)
{
 struct wm8350 *VAR_18 = FUNC_5(VAR_17);
 struct wm8350_rtc *VAR_19 = &VAR_18->rtc;
 int VAR_20 = 0;
 u16 VAR_21, VAR_22;

 VAR_21 = FUNC_10(VAR_18, VAR_12);
 if (VAR_21 & VAR_8) {
  FUNC_2(&VAR_17->dev, "RTC BCD mode not supported\n");
  return -VAR_0;
 }
 if (VAR_21 & VAR_7) {
  FUNC_2(&VAR_17->dev, "RTC 12 hour mode not supported\n");
  return -VAR_0;
 }


 VAR_22 = FUNC_10(VAR_18, VAR_6);
 if (!(VAR_22 & VAR_11)) {
  FUNC_3(VAR_18->dev, "Starting RTC\n");

  FUNC_11(VAR_18);

  VAR_20 = FUNC_13(VAR_18, VAR_6,
          VAR_11);
  if (VAR_20 < 0) {
   FUNC_2(&VAR_17->dev, "failed to enable RTC: %d\n", VAR_20);
   return VAR_20;
  }

  FUNC_9(VAR_18);
 }

 if (VAR_21 & VAR_10) {
  int VAR_23;

  VAR_20 = FUNC_7(VAR_18, VAR_12,
     VAR_9);
  if (VAR_20 < 0) {
   FUNC_2(&VAR_17->dev, "failed to start: %d\n", VAR_20);
   return VAR_20;
  }

  VAR_23 = VAR_13;
  do {
   VAR_21 = FUNC_10(VAR_18,
        VAR_12);
  } while (VAR_21 & VAR_10 && --VAR_23);

  if (VAR_23 == 0) {
   FUNC_2(&VAR_17->dev, "failed to start: timeout\n");
   return -VAR_1;
  }
 }

 FUNC_4(&VAR_17->dev, 1);

 VAR_19->rtc = FUNC_6("wm8350", &VAR_17->dev,
       &VAR_15, VAR_2);
 if (FUNC_0(VAR_19->rtc)) {
  VAR_20 = FUNC_1(VAR_19->rtc);
  FUNC_2(&VAR_17->dev, "failed to register RTC: %d\n", VAR_20);
  return VAR_20;
 }

 FUNC_8(VAR_18, VAR_5);
 FUNC_8(VAR_18, VAR_4);

 FUNC_12(VAR_18, VAR_5,
       VAR_16, ((void*)0));

 FUNC_12(VAR_18, VAR_3,
       VAR_14, ((void*)0));
 FUNC_14(VAR_18, VAR_3);

 return 0;
}
