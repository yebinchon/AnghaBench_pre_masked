
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_rtc {int wm831x; scalar_t__ alarm_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct wm831x_rtc *VAR_2)
{
 VAR_2->alarm_enabled = 0;

 return FUNC_0(VAR_2->wm831x, VAR_1,
          VAR_0, 0);
}
