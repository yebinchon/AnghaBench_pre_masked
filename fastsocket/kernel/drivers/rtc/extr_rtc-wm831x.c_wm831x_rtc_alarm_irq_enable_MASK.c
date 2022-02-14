
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_rtc {int dummy; } ;
struct device {int dummy; } ;


 struct wm831x_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct wm831x_rtc*) ;
 int FUNC_2 (struct wm831x_rtc*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0,
           unsigned int VAR_1)
{
 struct wm831x_rtc *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1)
  return FUNC_1(VAR_2);
 else
  return FUNC_2(VAR_2);
}
