
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int txbuf ;
struct TYPE_2__ {struct rs5c348_plat_data* platform_data; } ;
struct spi_device {TYPE_1__ dev; } ;
struct rtc_time {int tm_hour; void* tm_year; void* tm_mon; void* tm_mday; void* tm_wday; void* tm_min; void* tm_sec; } ;
struct rs5c348_plat_data {int rtc_24h; } ;
struct device {int dummy; } ;
typedef int rxbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int ,struct rtc_time*) ;
 scalar_t__ FUNC_5 (struct rtc_time*) ;
 int FUNC_6 (struct spi_device*,int*,int,int*,int) ;
 struct spi_device* FUNC_7 (struct device*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(struct device *VAR_16, struct rtc_time *VAR_17)
{
 struct spi_device *VAR_18 = FUNC_7(VAR_16);
 struct rs5c348_plat_data *VAR_19 = VAR_18->dev.platform_data;
 u8 VAR_20[5], VAR_21[7];
 int VAR_22;


 VAR_20[0] = FUNC_1(VAR_6);
 VAR_20[1] = 0;
 VAR_20[2] = FUNC_1(VAR_6);
 VAR_20[3] = 0;
 VAR_20[4] = FUNC_0(VAR_11);


 VAR_22 = FUNC_6(VAR_18, VAR_20, sizeof(VAR_20),
      VAR_21, sizeof(VAR_21));
 FUNC_8(62);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_17->tm_sec = FUNC_2(VAR_21[VAR_11] & VAR_14);
 VAR_17->tm_min = FUNC_2(VAR_21[VAR_9] & VAR_4);
 VAR_17->tm_hour = FUNC_2(VAR_21[VAR_8] & VAR_3);
 if (!VAR_19->rtc_24h) {
  VAR_17->tm_hour %= 12;
  if (VAR_21[VAR_8] & VAR_0)
   VAR_17->tm_hour += 12;
 }
 VAR_17->tm_wday = FUNC_2(VAR_21[VAR_12] & VAR_15);
 VAR_17->tm_mday = FUNC_2(VAR_21[VAR_7] & VAR_2);
 VAR_17->tm_mon =
  FUNC_2(VAR_21[VAR_10] & VAR_5) - 1;

 VAR_17->tm_year = FUNC_2(VAR_21[VAR_13]) +
  ((VAR_21[VAR_10] & VAR_1) ? 100 : 0);

 if (FUNC_5(VAR_17) < 0) {
  FUNC_3(&VAR_18->dev, "retrieved date/time is not valid.\n");
  FUNC_4(0, VAR_17);
 }

 return 0;
}
