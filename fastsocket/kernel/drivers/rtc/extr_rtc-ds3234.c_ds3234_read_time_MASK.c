
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct rtc_time {void* tm_year; void* tm_mon; void* tm_mday; void* tm_wday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct device {int dummy; } ;


 void* FUNC_0 (unsigned char) ;
 int FUNC_1 (struct rtc_time*) ;
 int FUNC_2 (struct spi_device*,unsigned char*,int,unsigned char*,int) ;
 struct spi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, struct rtc_time *VAR_1)
{
 int VAR_2;
 unsigned char VAR_3[8];
 struct spi_device *VAR_4 = FUNC_3(VAR_0);

 VAR_3[0] = 0x00;

 VAR_2 = FUNC_2(VAR_4, VAR_3, 1, VAR_3, 8);
 if (VAR_2 != 0)
  return VAR_2;


 VAR_1->tm_sec = FUNC_0(VAR_3[0]);
 VAR_1->tm_min = FUNC_0(VAR_3[1]);
 VAR_1->tm_hour = FUNC_0(VAR_3[2] & 0x3f);
 VAR_1->tm_wday = FUNC_0(VAR_3[3]) - 1;
 VAR_1->tm_mday = FUNC_0(VAR_3[4]);
 VAR_1->tm_mon = FUNC_0(VAR_3[5] & 0x1f) - 1;
 VAR_1->tm_year = FUNC_0(VAR_3[6] & 0xff) + 100;

 return FUNC_1(VAR_1);
}
