
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {scalar_t__ enabled; int time; } ;
struct pcf50633_time {int* time; } ;
struct pcf50633_rtc {scalar_t__ alarm_enabled; int pcf; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 struct pcf50633_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int*) ;
 int FUNC_5 (struct pcf50633_time*,int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 struct pcf50633_rtc *VAR_6;
 struct pcf50633_time VAR_7;
 int VAR_8, VAR_9 = 0;

 VAR_6 = FUNC_0(VAR_4);

 FUNC_5(&VAR_7, &VAR_5->time);


 VAR_7.time[VAR_3] = 7;

 VAR_8 = FUNC_2(VAR_6->pcf, VAR_0);


 if (!VAR_8)
  FUNC_1(VAR_6->pcf, VAR_0);


 VAR_9 = FUNC_4(VAR_6->pcf, VAR_1,
    VAR_2, &VAR_7.time[0]);

 if (!VAR_8 || VAR_5->enabled)
  FUNC_3(VAR_6->pcf, VAR_0);
 VAR_6->alarm_enabled = VAR_5->enabled;

 return VAR_9;
}
