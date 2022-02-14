
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct rtc_time {void* tm_year; void* tm_mon; void* tm_mday; void* tm_wday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct ds1390 {int* txrx_buf; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 struct ds1390* FUNC_1 (struct device*) ;
 int FUNC_2 (struct rtc_time*) ;
 int FUNC_3 (struct spi_device*,int*,int,int*,int) ;
 struct spi_device* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct spi_device *VAR_3 = FUNC_4(VAR_1);
 struct ds1390 *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;


 VAR_4->txrx_buf[0] = VAR_0;


 VAR_5 = FUNC_3(VAR_3, VAR_4->txrx_buf, 1, VAR_4->txrx_buf, 8);
 if (VAR_5 != 0)
  return VAR_5;



 VAR_2->tm_sec = FUNC_0(VAR_4->txrx_buf[0]);
 VAR_2->tm_min = FUNC_0(VAR_4->txrx_buf[1]);
 VAR_2->tm_hour = FUNC_0(VAR_4->txrx_buf[2]);
 VAR_2->tm_wday = FUNC_0(VAR_4->txrx_buf[3]);
 VAR_2->tm_mday = FUNC_0(VAR_4->txrx_buf[4]);

 VAR_2->tm_mon = FUNC_0(VAR_4->txrx_buf[5] & 0x7f) - 1;

 VAR_2->tm_year = FUNC_0(VAR_4->txrx_buf[6]) + ((VAR_4->txrx_buf[5] & 0x80) ? 100 : 0);

 return FUNC_2(VAR_2);
}
