
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
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (struct device*,char*,int ,int ,int ,int ,int ,int ) ;
 struct pcf50633_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (struct pcf50633_time*,struct rtc_time*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_10, struct rtc_time *VAR_11)
{
 struct pcf50633_rtc *VAR_12;
 struct pcf50633_time VAR_13;
 int VAR_14, VAR_15, VAR_16 = 0;

 VAR_12 = FUNC_1(VAR_10);

 FUNC_0(VAR_10, "RTC_TIME: %u.%u.%u %u:%u:%u\n",
  VAR_11->tm_mday, VAR_11->tm_mon, VAR_11->tm_year,
  VAR_11->tm_hour, VAR_11->tm_min, VAR_11->tm_sec);

 FUNC_6(&VAR_13, VAR_11);

 FUNC_0(VAR_10, "PCF_TIME: %02x.%02x.%02x %02x:%02x:%02x\n",
  VAR_13.time[VAR_3],
  VAR_13.time[VAR_7],
  VAR_13.time[VAR_9],
  VAR_13.time[VAR_5],
  VAR_13.time[VAR_6],
  VAR_13.time[VAR_8]);


 VAR_14 = FUNC_3(VAR_12->pcf, VAR_1);
 VAR_15 = FUNC_3(VAR_12->pcf, VAR_0);

 if (!VAR_14)
  FUNC_2(VAR_12->pcf, VAR_1);
 if (!VAR_15)
  FUNC_2(VAR_12->pcf, VAR_0);


 VAR_16 = FUNC_5(VAR_12->pcf, VAR_2,
          VAR_4,
          &VAR_13.time[0]);

 if (!VAR_14)
  FUNC_4(VAR_12->pcf, VAR_1);
 if (!VAR_15)
  FUNC_4(VAR_12->pcf, VAR_0);

 return VAR_16;
}
