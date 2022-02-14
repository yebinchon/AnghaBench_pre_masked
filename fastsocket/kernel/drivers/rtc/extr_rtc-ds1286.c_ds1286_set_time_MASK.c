
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; int tm_mon; unsigned char tm_mday; unsigned char tm_hour; unsigned char tm_min; unsigned char tm_sec; } ;
struct ds1286_priv {int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (unsigned int) ;
 struct ds1286_priv* FUNC_1 (struct device*) ;
 unsigned char FUNC_2 (struct ds1286_priv*,int ) ;
 int FUNC_3 (struct ds1286_priv*,unsigned char,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_10, struct rtc_time *VAR_11)
{
 struct ds1286_priv *VAR_12 = FUNC_1(VAR_10);
 unsigned char VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 unsigned char VAR_18;
 unsigned int VAR_19;
 unsigned long VAR_20;

 VAR_19 = VAR_11->tm_year + 1900;
 VAR_13 = VAR_11->tm_mon + 1;
 VAR_14 = VAR_11->tm_mday;
 VAR_15 = VAR_11->tm_hour;
 VAR_16 = VAR_11->tm_min;
 VAR_17 = VAR_11->tm_sec;

 if (VAR_19 < 1970)
  return -VAR_0;

 VAR_19 -= 1940;
 if (VAR_19 > 255)
  return -VAR_0;

 if (VAR_19 >= 100)
  VAR_19 -= 100;

 VAR_17 = FUNC_0(VAR_17);
 VAR_16 = FUNC_0(VAR_16);
 VAR_15 = FUNC_0(VAR_15);
 VAR_14 = FUNC_0(VAR_14);
 VAR_13 = FUNC_0(VAR_13);
 VAR_19 = FUNC_0(VAR_19);

 FUNC_4(&VAR_12->lock, VAR_20);
 VAR_18 = FUNC_2(VAR_12, VAR_1);
 FUNC_3(VAR_12, (VAR_18|VAR_8), VAR_1);

 FUNC_3(VAR_12, VAR_19, VAR_9);
 FUNC_3(VAR_12, VAR_13, VAR_6);
 FUNC_3(VAR_12, VAR_14, VAR_2);
 FUNC_3(VAR_12, VAR_15, VAR_3);
 FUNC_3(VAR_12, VAR_16, VAR_5);
 FUNC_3(VAR_12, VAR_17, VAR_7);
 FUNC_3(VAR_12, 0, VAR_4);

 FUNC_3(VAR_12, VAR_18, VAR_1);
 FUNC_5(&VAR_12->lock, VAR_20);
 return 0;
}
