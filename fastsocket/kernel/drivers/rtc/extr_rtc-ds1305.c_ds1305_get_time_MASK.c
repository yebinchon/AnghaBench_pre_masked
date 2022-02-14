
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtc_time {size_t tm_sec; size_t tm_min; size_t tm_hour; size_t tm_wday; size_t tm_mday; size_t tm_mon; size_t tm_year; } ;
struct ds1305 {int spi; } ;
struct device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 void* FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 struct ds1305* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*,char*,size_t,size_t,size_t,size_t,size_t,size_t,size_t) ;
 int FUNC_4 (struct rtc_time*) ;
 int FUNC_5 (int ,size_t*,int,size_t*,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_8, struct rtc_time *VAR_9)
{
 struct ds1305 *VAR_10 = FUNC_2(VAR_8);
 u8 VAR_11 = VAR_5;
 u8 VAR_12[VAR_4];
 int VAR_13;




 VAR_13 = FUNC_5(VAR_10->spi, &VAR_11, sizeof VAR_11,
   VAR_12, sizeof VAR_12);
 if (VAR_13 < 0)
  return VAR_13;

 FUNC_3(VAR_8, "%s: %02x %02x %02x, %02x %02x %02x %02x\n",
  "read", VAR_12[0], VAR_12[1], VAR_12[2], VAR_12[3],
  VAR_12[4], VAR_12[5], VAR_12[6]);


 VAR_9->tm_sec = FUNC_0(VAR_12[VAR_5]);
 VAR_9->tm_min = FUNC_0(VAR_12[VAR_2]);
 VAR_9->tm_hour = FUNC_1(VAR_12[VAR_0]);
 VAR_9->tm_wday = VAR_12[VAR_6] - 1;
 VAR_9->tm_mday = FUNC_0(VAR_12[VAR_1]);
 VAR_9->tm_mon = FUNC_0(VAR_12[VAR_3]) - 1;
 VAR_9->tm_year = FUNC_0(VAR_12[VAR_7]) + 100;

 FUNC_3(VAR_8, "%s secs=%d, mins=%d, "
  "hours=%d, mday=%d, mon=%d, year=%d, wday=%d\n",
  "read", VAR_9->tm_sec, VAR_9->tm_min,
  VAR_9->tm_hour, VAR_9->tm_mday,
  VAR_9->tm_mon, VAR_9->tm_year, VAR_9->tm_wday);


 return FUNC_4(VAR_9);
}
