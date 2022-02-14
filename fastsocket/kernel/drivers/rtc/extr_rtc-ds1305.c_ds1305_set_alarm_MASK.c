
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;
struct rtc_time {int tm_hour; int tm_min; int tm_sec; } ;
struct rtc_wkalrm {scalar_t__ enabled; struct rtc_time time; } ;
struct ds1305 {int* ctrl; struct spi_device* spi; int hr12; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
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
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,char*,int,int,int,int) ;
 struct ds1305* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,struct rtc_time*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct rtc_time*,unsigned long*) ;
 int FUNC_7 (struct spi_device*,int*,int,int *,int ) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_11, struct rtc_wkalrm *VAR_12)
{
 struct ds1305 *VAR_13 = FUNC_3(VAR_11);
 struct spi_device *VAR_14 = VAR_13->spi;
 unsigned long VAR_15, VAR_16;
 struct rtc_time VAR_17;
 int VAR_18;
 u8 VAR_19[1 + VAR_2];


 VAR_18 = FUNC_6(&VAR_12->time, &VAR_16);
 if (VAR_18 < 0)
  return VAR_18;


 VAR_18 = FUNC_4(VAR_11, &VAR_17);
 if (VAR_18 < 0)
  return VAR_18;
 VAR_18 = FUNC_6(&VAR_17, &VAR_15);
 if (VAR_18 < 0)
  return VAR_18;


 if (VAR_16 <= VAR_15)
  return -VAR_10;
 if ((VAR_16 - VAR_15) > 24 * 60 * 60)
  return -VAR_9;


 if (VAR_13->ctrl[0] & VAR_0) {
  VAR_13->ctrl[0] &= ~VAR_0;

  VAR_19[0] = VAR_8 | VAR_3;
  VAR_19[1] = VAR_13->ctrl[0];
  VAR_18 = FUNC_7(VAR_13->spi, VAR_19, 2, ((void*)0), 0);
  if (VAR_18 < 0)
   return VAR_18;
 }


 VAR_19[0] = VAR_8 | FUNC_0(VAR_6);
 VAR_19[1 + VAR_6] = FUNC_1(VAR_12->time.tm_sec);
 VAR_19[1 + VAR_5] = FUNC_1(VAR_12->time.tm_min);
 VAR_19[1 + VAR_4] = FUNC_5(VAR_13->hr12, VAR_12->time.tm_hour);
 VAR_19[1 + VAR_7] = VAR_1;

 FUNC_2(VAR_11, "%s: %02x %02x %02x %02x\n",
  "alm0 write", VAR_19[1 + VAR_6], VAR_19[1 + VAR_5],
  VAR_19[1 + VAR_4], VAR_19[1 + VAR_7]);

 VAR_18 = FUNC_7(VAR_14, VAR_19, sizeof VAR_19, ((void*)0), 0);
 if (VAR_18 < 0)
  return VAR_18;


 if (VAR_12->enabled) {
  VAR_13->ctrl[0] |= VAR_0;

  VAR_19[0] = VAR_8 | VAR_3;
  VAR_19[1] = VAR_13->ctrl[0];
  VAR_18 = FUNC_7(VAR_13->spi, VAR_19, 2, ((void*)0), 0);
 }

 return VAR_18;
}
