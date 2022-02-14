
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtc_time {unsigned char tm_sec; unsigned char tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; } ;
struct TYPE_2__ {struct m48t86_ops* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct m48t86_ops {unsigned char (* readbyte ) (int ) ;} ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 unsigned char FUNC_9 (int ) ;
 unsigned char FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 struct platform_device* FUNC_17 (struct device*) ;

__attribute__((used)) static int FUNC_18(struct device *VAR_10, struct rtc_time *VAR_11)
{
 unsigned char VAR_12;
 struct platform_device *VAR_13 = FUNC_17(VAR_10);
 struct m48t86_ops *VAR_14 = VAR_13->dev.platform_data;

 VAR_12 = VAR_14->readbyte(VAR_0);

 if (VAR_12 & VAR_1) {

  VAR_11->tm_sec = VAR_14->readbyte(VAR_8);
  VAR_11->tm_min = VAR_14->readbyte(VAR_6);
  VAR_11->tm_hour = VAR_14->readbyte(VAR_5) & 0x3F;
  VAR_11->tm_mday = VAR_14->readbyte(VAR_3);

  VAR_11->tm_mon = VAR_14->readbyte(VAR_7) - 1;
  VAR_11->tm_year = VAR_14->readbyte(VAR_9) + 100;
  VAR_11->tm_wday = VAR_14->readbyte(VAR_4);
 } else {

  VAR_11->tm_sec = FUNC_0(VAR_14->readbyte(VAR_8));
  VAR_11->tm_min = FUNC_0(VAR_14->readbyte(VAR_6));
  VAR_11->tm_hour = FUNC_0(VAR_14->readbyte(VAR_5) & 0x3F);
  VAR_11->tm_mday = FUNC_0(VAR_14->readbyte(VAR_3));

  VAR_11->tm_mon = FUNC_0(VAR_14->readbyte(VAR_7)) - 1;
  VAR_11->tm_year = FUNC_0(VAR_14->readbyte(VAR_9)) + 100;
  VAR_11->tm_wday = FUNC_0(VAR_14->readbyte(VAR_4));
 }


 if (!(VAR_12 & VAR_2))
  if (VAR_14->readbyte(VAR_5) & 0x80)
   VAR_11->tm_hour += 12;

 return 0;
}
