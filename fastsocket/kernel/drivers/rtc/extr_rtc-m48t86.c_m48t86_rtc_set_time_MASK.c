
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; } ;
struct TYPE_2__ {struct m48t86_ops* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct m48t86_ops {unsigned char (* readbyte ) (int ) ;int (* writebyte ) (unsigned char,int ) ;} ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (unsigned char,int ) ;
 int FUNC_10 (unsigned char,int ) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (int,int ) ;
 int FUNC_17 (int,int ) ;
 struct platform_device* FUNC_18 (struct device*) ;

__attribute__((used)) static int FUNC_19(struct device *VAR_11, struct rtc_time *VAR_12)
{
 unsigned char VAR_13;
 struct platform_device *VAR_14 = FUNC_18(VAR_11);
 struct m48t86_ops *VAR_15 = VAR_14->dev.platform_data;

 VAR_13 = VAR_15->readbyte(VAR_0);


 VAR_13 |= VAR_3 | VAR_2;
 VAR_15->writebyte(VAR_13, VAR_0);

 if (VAR_13 & VAR_1) {

  VAR_15->writebyte(VAR_12->tm_sec, VAR_9);
  VAR_15->writebyte(VAR_12->tm_min, VAR_7);
  VAR_15->writebyte(VAR_12->tm_hour, VAR_6);
  VAR_15->writebyte(VAR_12->tm_mday, VAR_4);
  VAR_15->writebyte(VAR_12->tm_mon + 1, VAR_8);
  VAR_15->writebyte(VAR_12->tm_year % 100, VAR_10);
  VAR_15->writebyte(VAR_12->tm_wday, VAR_5);
 } else {

  VAR_15->writebyte(FUNC_0(VAR_12->tm_sec), VAR_9);
  VAR_15->writebyte(FUNC_0(VAR_12->tm_min), VAR_7);
  VAR_15->writebyte(FUNC_0(VAR_12->tm_hour), VAR_6);
  VAR_15->writebyte(FUNC_0(VAR_12->tm_mday), VAR_4);
  VAR_15->writebyte(FUNC_0(VAR_12->tm_mon + 1), VAR_8);
  VAR_15->writebyte(FUNC_0(VAR_12->tm_year % 100), VAR_10);
  VAR_15->writebyte(FUNC_0(VAR_12->tm_wday), VAR_5);
 }


 VAR_13 &= ~VAR_3;
 VAR_15->writebyte(VAR_13, VAR_0);

 return 0;
}
