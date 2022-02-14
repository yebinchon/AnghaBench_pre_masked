
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int txbuf ;
struct TYPE_2__ {struct rs5c348_plat_data* platform_data; } ;
struct spi_device {TYPE_1__ dev; } ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mday; int tm_mon; int tm_year; } ;
struct rs5c348_plat_data {scalar_t__ rtc_24h; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct spi_device*,int*,int,int *,int ) ;
 struct spi_device* FUNC_4 (struct device*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct device *VAR_10, struct rtc_time *VAR_11)
{
 struct spi_device *VAR_12 = FUNC_4(VAR_10);
 struct rs5c348_plat_data *VAR_13 = VAR_12->dev.platform_data;
 u8 VAR_14[5+7], *VAR_15;
 int VAR_16;


 VAR_15 = VAR_14;
 VAR_14[0] = FUNC_1(VAR_2);
 VAR_14[1] = 0;
 VAR_14[2] = FUNC_1(VAR_2);
 VAR_14[3] = 0;
 VAR_14[4] = FUNC_0(VAR_7);
 VAR_15 = &VAR_14[5];
 VAR_15[VAR_7] = FUNC_2(VAR_11->tm_sec);
 VAR_15[VAR_5] = FUNC_2(VAR_11->tm_min);
 if (VAR_13->rtc_24h) {
  VAR_15[VAR_4] = FUNC_2(VAR_11->tm_hour);
 } else {

  VAR_15[VAR_4] = FUNC_2((VAR_11->tm_hour + 11) % 12 + 1) |
   (VAR_11->tm_hour >= 12 ? VAR_0 : 0);
 }
 VAR_15[VAR_8] = FUNC_2(VAR_11->tm_wday);
 VAR_15[VAR_3] = FUNC_2(VAR_11->tm_mday);
 VAR_15[VAR_6] = FUNC_2(VAR_11->tm_mon + 1) |
  (VAR_11->tm_year >= 100 ? VAR_1 : 0);
 VAR_15[VAR_9] = FUNC_2(VAR_11->tm_year % 100);

 VAR_16 = FUNC_3(VAR_12, VAR_14, sizeof(VAR_14), ((void*)0), 0);
 FUNC_5(62);
 return VAR_16;
}
