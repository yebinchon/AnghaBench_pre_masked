
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tm_sec; int tm_hour; int tm_min; } ;
struct rtc_wkalrm {int enabled; TYPE_1__ time; } ;
struct rtc_time {int dummy; } ;
struct rtc_plat_data {int g_rtc_alarm; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (struct device*,int ,int ) ;
 struct rtc_plat_data* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct device*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 struct platform_device* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2, struct rtc_wkalrm *VAR_3)
{
 struct platform_device *VAR_4 = FUNC_5(VAR_2);
 struct rtc_plat_data *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;

 if (FUNC_4(&VAR_3->time)) {
  if (VAR_3->time.tm_sec > 59 ||
      VAR_3->time.tm_hour > 23 ||
      VAR_3->time.tm_min > 59)
   return -VAR_0;

  VAR_6 = FUNC_3(VAR_2, &VAR_3->time);
 } else {
  VAR_6 = FUNC_4(&VAR_3->time);
  if (VAR_6)
   return VAR_6;

  VAR_6 = FUNC_3(VAR_2, &VAR_3->time);
 }

 if (VAR_6)
  return VAR_6;

 FUNC_0(&VAR_5->g_rtc_alarm, &VAR_3->time, sizeof(struct rtc_time));
 FUNC_1(VAR_2, VAR_1, VAR_3->enabled);

 return 0;
}
