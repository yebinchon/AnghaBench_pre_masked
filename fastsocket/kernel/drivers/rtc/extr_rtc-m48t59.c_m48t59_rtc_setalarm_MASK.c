
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtc_time {int tm_year; int tm_mday; int tm_hour; int tm_min; int tm_sec; int tm_mon; } ;
struct rtc_wkalrm {struct rtc_time time; } ;
struct TYPE_2__ {struct m48t59_plat_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct m48t59_private {scalar_t__ irq; int lock; } ;
struct m48t59_plat_data {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct device*,char*,int,int ,int,int,int,int) ;
 struct m48t59_private* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct platform_device* FUNC_9 (struct device*) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_10, struct rtc_wkalrm *VAR_11)
{
 struct platform_device *VAR_12 = FUNC_9(VAR_10);
 struct m48t59_plat_data *VAR_13 = VAR_12->dev.platform_data;
 struct m48t59_private *VAR_14 = FUNC_6(VAR_12);
 struct rtc_time *VAR_15 = &VAR_11->time;
 u8 VAR_16, VAR_17, VAR_18, VAR_19;
 unsigned long VAR_20;
 int VAR_21 = VAR_15->tm_year;







 if (VAR_14->irq == VAR_9)
  return -VAR_1;

 if (VAR_21 < 0)
  return -VAR_0;




 VAR_16 = VAR_15->tm_mday;
 VAR_16 = (VAR_16 >= 1 && VAR_16 <= 31) ? FUNC_4(VAR_16) : 0xff;
 if (VAR_16 == 0xff)
  VAR_16 = FUNC_1(VAR_8);

 VAR_17 = VAR_15->tm_hour;
 VAR_17 = (VAR_17 < 24) ? FUNC_4(VAR_17) : 0x00;

 VAR_18 = VAR_15->tm_min;
 VAR_18 = (VAR_18 < 60) ? FUNC_4(VAR_18) : 0x00;

 VAR_19 = VAR_15->tm_sec;
 VAR_19 = (VAR_19 < 60) ? FUNC_4(VAR_19) : 0x00;

 FUNC_7(&VAR_14->lock, VAR_20);

 FUNC_2(VAR_7, VAR_6);

 FUNC_3(VAR_16, VAR_2);
 FUNC_3(VAR_17, VAR_3);
 FUNC_3(VAR_18, VAR_4);
 FUNC_3(VAR_19, VAR_5);


 FUNC_0(VAR_7, VAR_6);
 FUNC_8(&VAR_14->lock, VAR_20);

 FUNC_5(VAR_10, "RTC set alarm time %04d-%02d-%02d %02d/%02d/%02d\n",
  VAR_21 + 1900, VAR_15->tm_mon, VAR_15->tm_mday,
  VAR_15->tm_hour, VAR_15->tm_min, VAR_15->tm_sec);
 return 0;
}
