
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;
struct bq4802 {int (* read ) (struct bq4802*,int) ;int lock; int (* write ) (struct bq4802*,int,int) ;} ;


 int FUNC_0 (int) ;
 struct bq4802* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct bq4802*,int) ;
 int FUNC_5 (struct bq4802*,int,int) ;
 int FUNC_6 (struct bq4802*,int,int) ;
 int FUNC_7 (struct bq4802*,int,int) ;
 int FUNC_8 (struct bq4802*,int,int) ;
 int FUNC_9 (struct bq4802*,int,int) ;
 int FUNC_10 (struct bq4802*,int,int) ;
 int FUNC_11 (struct bq4802*,int,int) ;
 int FUNC_12 (struct bq4802*,int,int) ;
 int FUNC_13 (struct bq4802*,int,int) ;
 struct platform_device* FUNC_14 (struct device*) ;

__attribute__((used)) static int FUNC_15(struct device *VAR_0, struct rtc_time *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_14(VAR_0);
 struct bq4802 *VAR_3 = FUNC_1(VAR_2);
 u8 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12;
 unsigned int VAR_13;

 VAR_13 = VAR_1->tm_year + 1900;
 VAR_10 = VAR_13 / 100;
 VAR_9 = VAR_13 % 100;

 VAR_8 = VAR_1->tm_mon + 1;
 VAR_7 = VAR_1->tm_mday;
 VAR_6 = VAR_1->tm_hour;
 VAR_5 = VAR_1->tm_min;
 VAR_4 = VAR_1->tm_sec;

 VAR_4 = FUNC_0(VAR_4);
 VAR_5 = FUNC_0(VAR_5);
 VAR_6 = FUNC_0(VAR_6);
 VAR_7 = FUNC_0(VAR_7);
 VAR_8 = FUNC_0(VAR_8);
 VAR_9 = FUNC_0(VAR_9);
 VAR_10 = FUNC_0(VAR_10);

 FUNC_2(&VAR_3->lock, VAR_12);

 VAR_11 = VAR_3->read(VAR_3, 0x0e);
 VAR_3->write(VAR_3, 0x0e, VAR_11 | 0x08);

 VAR_3->write(VAR_3, 0x00, VAR_4);
 VAR_3->write(VAR_3, 0x02, VAR_5);
 VAR_3->write(VAR_3, 0x04, VAR_6);
 VAR_3->write(VAR_3, 0x06, VAR_7);
 VAR_3->write(VAR_3, 0x09, VAR_8);
 VAR_3->write(VAR_3, 0x0a, VAR_9);
 VAR_3->write(VAR_3, 0x0f, VAR_10);

 VAR_3->write(VAR_3, 0x0e, VAR_11);

 FUNC_3(&VAR_3->lock, VAR_12);

 return 0;
}
