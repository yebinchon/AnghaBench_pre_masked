
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int time ;
struct wm8350 {int dummy; } ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mday; int tm_mon; } ;
struct rtc_wkalrm {scalar_t__ enabled; struct rtc_time time; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct wm8350* FUNC_0 (struct device*) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (struct wm8350*,int ,int,int*) ;
 int FUNC_3 (struct wm8350*) ;
 int FUNC_4 (struct wm8350*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_10, struct rtc_wkalrm *VAR_11)
{
 struct wm8350 *VAR_12 = FUNC_0(VAR_10);
 struct rtc_time *VAR_13 = &VAR_11->time;
 u16 VAR_14[3];
 int VAR_15;

 FUNC_1(VAR_14, 0, sizeof(VAR_14));

 if (VAR_13->tm_sec != -1)
  VAR_14[0] |= VAR_13->tm_sec;
 else
  VAR_14[0] |= VAR_9;

 if (VAR_13->tm_min != -1)
  VAR_14[0] |= VAR_13->tm_min << VAR_6;
 else
  VAR_14[0] |= VAR_5;

 if (VAR_13->tm_hour != -1)
  VAR_14[1] |= VAR_13->tm_hour;
 else
  VAR_14[1] |= VAR_4;

 if (VAR_13->tm_wday != -1)
  VAR_14[1] |= (VAR_13->tm_wday + 1) << VAR_3;
 else
  VAR_14[1] |= VAR_2;

 if (VAR_13->tm_mday != -1)
  VAR_14[2] |= VAR_13->tm_mday;
 else
  VAR_14[2] |= VAR_1;

 if (VAR_13->tm_mon != -1)
  VAR_14[2] |= (VAR_13->tm_mon + 1) << VAR_8;
 else
  VAR_14[2] |= VAR_7;

 VAR_15 = FUNC_4(VAR_12);
 if (VAR_15 < 0)
  return VAR_15;


 VAR_15 = FUNC_2(VAR_12, VAR_0,
     3, VAR_14);
 if (VAR_15 < 0)
  return VAR_15;

 if (VAR_11->enabled)
  VAR_15 = FUNC_3(VAR_12);

 return VAR_15;
}
