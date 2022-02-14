
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;
struct rtc_time {scalar_t__ tm_wday; void* tm_year; scalar_t__ tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,char*,void*,void*,void*,void*,scalar_t__,void*,scalar_t__) ;
 int FUNC_2 (struct rtc_time*) ;
 int FUNC_3 (struct spi_device*,int) ;
 int FUNC_4 (struct spi_device*,int*,int) ;
 struct spi_device* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_12, struct rtc_time *VAR_13)
{
 struct spi_device *VAR_14 = FUNC_5(VAR_12);
 u8 VAR_15[2];
 int VAR_16, VAR_17;


 VAR_16 = FUNC_3(VAR_14, VAR_6);
 if (VAR_16 < 0)
  return VAR_16;
 if (VAR_16 & VAR_2) {
  VAR_15[0] = 0x80 | VAR_6;
  VAR_15[1] = VAR_16 & ~VAR_2;
  FUNC_4(VAR_14, VAR_15, 2);
 }


 VAR_16 = FUNC_3(VAR_14, VAR_9);
 if (VAR_16 < 0)
  return VAR_16;
 if (VAR_16 & VAR_3) {
  VAR_15[0] = 0x80 | VAR_9;
  VAR_15[1] = VAR_16 & ~VAR_3;
  FUNC_4(VAR_14, VAR_15, 2);
 }

 VAR_13->tm_sec = FUNC_0(FUNC_3(VAR_14, VAR_9));
 VAR_13->tm_min = FUNC_0(FUNC_3(VAR_14, VAR_7));
 VAR_17 = FUNC_3(VAR_14, VAR_5);
 VAR_13->tm_hour = FUNC_0(VAR_17 & 0x3f);
 VAR_13->tm_wday = FUNC_0(FUNC_3(VAR_14, VAR_10)) - 1;
 VAR_13->tm_mday = FUNC_0(FUNC_3(VAR_14, VAR_4));
 VAR_13->tm_mon = FUNC_0(FUNC_3(VAR_14, VAR_8)) - 1;
 VAR_13->tm_year = FUNC_0(FUNC_3(VAR_14, VAR_11));
 if ((VAR_17 & VAR_0) || !(VAR_17 & VAR_1))
  VAR_13->tm_year += 100;

 FUNC_1(VAR_12, "%s secs=%d, mins=%d, "
  "hours=%d, mday=%d, mon=%d, year=%d, wday=%d\n",
  "read", VAR_13->tm_sec, VAR_13->tm_min,
  VAR_13->tm_hour, VAR_13->tm_mday,
  VAR_13->tm_mon, VAR_13->tm_year, VAR_13->tm_wday);


 return FUNC_2(VAR_13);
}
