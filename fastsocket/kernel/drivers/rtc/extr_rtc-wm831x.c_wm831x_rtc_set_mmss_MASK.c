
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_rtc {struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct wm831x_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct rtc_time*,unsigned long*) ;
 int FUNC_4 (struct wm831x*,int ) ;
 int FUNC_5 (struct wm831x*,int ,unsigned long) ;
 int FUNC_6 (struct device*,struct rtc_time*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_7, unsigned long VAR_8)
{
 struct wm831x_rtc *VAR_9 = FUNC_1(VAR_7);
 struct wm831x *VAR_10 = VAR_9->wm831x;
 struct rtc_time VAR_11;
 unsigned long VAR_12;
 int VAR_13;
 int VAR_14 = 0;

 VAR_13 = FUNC_5(VAR_10, VAR_4,
          (VAR_8 >> 16) & 0xffff);
 if (VAR_13 < 0) {
  FUNC_0(VAR_7, "Failed to write TIME_1: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_5(VAR_10, VAR_5, VAR_8 & 0xffff);
 if (VAR_13 < 0) {
  FUNC_0(VAR_7, "Failed to write TIME_2: %d\n", VAR_13);
  return VAR_13;
 }




 do {
  FUNC_2(1);

  VAR_13 = FUNC_4(VAR_10, VAR_2);
  if (VAR_13 < 0)
   VAR_13 = VAR_3;
 } while (!(VAR_13 & VAR_3) &&
   ++VAR_14 < VAR_6);

 if (VAR_13 & VAR_3) {
  FUNC_0(VAR_7, "Timed out writing RTC update\n");
  return -VAR_0;
 }




 VAR_13 = FUNC_6(VAR_7, &VAR_11);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_3(&VAR_11, &VAR_12);
 if (VAR_13 < 0) {
  FUNC_0(VAR_7, "Failed to convert time: %d\n", VAR_13);
  return VAR_13;
 }


 if (VAR_12 - VAR_8 > 1) {
  FUNC_0(VAR_7, "RTC update not permitted by hardware\n");
  return -VAR_1;
 }

 return 0;
}
