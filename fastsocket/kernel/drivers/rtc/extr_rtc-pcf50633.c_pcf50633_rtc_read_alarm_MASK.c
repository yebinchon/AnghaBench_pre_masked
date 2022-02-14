
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {int time; int enabled; } ;
struct pcf50633_time {int * time; } ;
struct pcf50633_rtc {int pcf; int alarm_enabled; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 struct pcf50633_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (int *,struct pcf50633_time*) ;
 int FUNC_3 (int ,int ,int,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct pcf50633_rtc *VAR_5;
 struct pcf50633_time VAR_6;
 int VAR_7 = 0;

 VAR_5 = FUNC_1(VAR_3);

 VAR_4->enabled = VAR_5->alarm_enabled;

 VAR_7 = FUNC_3(VAR_5->pcf, VAR_1,
    VAR_2, &VAR_6.time[0]);
 if (VAR_7 != VAR_2) {
  FUNC_0(VAR_3, "Failed to read time\n");
  return -VAR_0;
 }

 FUNC_2(&VAR_4->time, &VAR_6);

 return FUNC_4(&VAR_4->time);
}
