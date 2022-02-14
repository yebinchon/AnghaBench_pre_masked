
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_year; int tm_mon; int tm_mday; } ;
struct pcf50633_time {int * time; } ;
struct pcf50633_rtc {int pcf; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (struct device*,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct device*,char*) ;
 struct pcf50633_rtc* FUNC_2 (struct device*) ;
 int FUNC_3 (struct rtc_time*,struct pcf50633_time*) ;
 int FUNC_4 (int ,int ,int,int *) ;
 int FUNC_5 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_9, struct rtc_time *VAR_10)
{
 struct pcf50633_rtc *VAR_11;
 struct pcf50633_time VAR_12;
 int VAR_13;

 VAR_11 = FUNC_2(VAR_9);

 VAR_13 = FUNC_4(VAR_11->pcf, VAR_1,
         VAR_3,
         &VAR_12.time[0]);
 if (VAR_13 != VAR_3) {
  FUNC_1(VAR_9, "Failed to read time\n");
  return -VAR_0;
 }

 FUNC_0(VAR_9, "PCF_TIME: %02x.%02x.%02x %02x:%02x:%02x\n",
  VAR_12.time[VAR_2],
  VAR_12.time[VAR_6],
  VAR_12.time[VAR_8],
  VAR_12.time[VAR_4],
  VAR_12.time[VAR_5],
  VAR_12.time[VAR_7]);

 FUNC_3(VAR_10, &VAR_12);

 FUNC_0(VAR_9, "RTC_TIME: %u.%u.%u %u:%u:%u\n",
  VAR_10->tm_mday, VAR_10->tm_mon, VAR_10->tm_year,
  VAR_10->tm_hour, VAR_10->tm_min, VAR_10->tm_sec);

 return FUNC_5(VAR_10);
}
