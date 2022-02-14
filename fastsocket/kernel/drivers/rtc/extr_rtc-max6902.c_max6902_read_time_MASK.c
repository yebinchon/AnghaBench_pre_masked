
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_wday; int tm_year; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (struct device*,int ,unsigned char*) ;
 int FUNC_2 (struct rtc_time*) ;
 int FUNC_3 (struct spi_device*,unsigned char*,int,unsigned char*,int) ;
 struct spi_device* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, struct rtc_time *VAR_2)
{
 int VAR_3, VAR_4;
 struct spi_device *VAR_5 = FUNC_4(VAR_1);
 unsigned char VAR_6[8];

 VAR_6[0] = 0xbf;

 VAR_3 = FUNC_3(VAR_5, VAR_6, 1, VAR_6, 8);
 if (VAR_3 != 0)
  return VAR_3;



 VAR_2->tm_sec = FUNC_0(VAR_6[0]);
 VAR_2->tm_min = FUNC_0(VAR_6[1]);
 VAR_2->tm_hour = FUNC_0(VAR_6[2]);
 VAR_2->tm_mday = FUNC_0(VAR_6[3]);
 VAR_2->tm_mon = FUNC_0(VAR_6[4]) - 1;
 VAR_2->tm_wday = FUNC_0(VAR_6[5]);
 VAR_2->tm_year = FUNC_0(VAR_6[6]);


 VAR_3 = FUNC_1(VAR_1, VAR_0, &VAR_6[0]);
 if (VAR_3 != 0)
  return VAR_3;

 VAR_4 = FUNC_0(VAR_6[0]) * 100;

 VAR_2->tm_year += VAR_4;
 VAR_2->tm_year -= 1900;

 return FUNC_2(VAR_2);
}
