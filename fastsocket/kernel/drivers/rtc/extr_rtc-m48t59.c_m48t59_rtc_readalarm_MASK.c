
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtc_time {void* tm_sec; void* tm_min; void* tm_hour; void* tm_mday; void* tm_mon; void* tm_year; } ;
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
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct device*,char*,void*,void*,void*,void*,void*,void*) ;
 struct m48t59_private* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct platform_device* FUNC_8 (struct device*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_13, struct rtc_wkalrm *VAR_14)
{
 struct platform_device *VAR_15 = FUNC_8(VAR_13);
 struct m48t59_plat_data *VAR_16 = VAR_15->dev.platform_data;
 struct m48t59_private *VAR_17 = FUNC_5(VAR_15);
 struct rtc_time *VAR_18 = &VAR_14->time;
 unsigned long VAR_19;
 u8 VAR_20;


 if (VAR_17->irq == VAR_12)
  return -VAR_0;

 FUNC_6(&VAR_17->lock, VAR_19);

 FUNC_2(VAR_6, VAR_5);

 VAR_18->tm_year = FUNC_3(FUNC_1(VAR_11));





 VAR_18->tm_mon = FUNC_3(FUNC_1(VAR_7)) - 1;

 VAR_20 = FUNC_1(VAR_8);
 if ((VAR_20 & VAR_10) && (VAR_20 & VAR_9))
  VAR_18->tm_year += 100;

 VAR_18->tm_mday = FUNC_3(FUNC_1(VAR_1));
 VAR_18->tm_hour = FUNC_3(FUNC_1(VAR_2));
 VAR_18->tm_min = FUNC_3(FUNC_1(VAR_3));
 VAR_18->tm_sec = FUNC_3(FUNC_1(VAR_4));


 FUNC_0(VAR_6, VAR_5);
 FUNC_7(&VAR_17->lock, VAR_19);

 FUNC_4(VAR_13, "RTC read alarm time %04d-%02d-%02d %02d/%02d/%02d\n",
  VAR_18->tm_year + 1900, VAR_18->tm_mon, VAR_18->tm_mday,
  VAR_18->tm_hour, VAR_18->tm_min, VAR_18->tm_sec);
 return 0;
}
