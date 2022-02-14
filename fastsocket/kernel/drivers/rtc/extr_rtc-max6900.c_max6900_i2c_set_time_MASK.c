
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_wday; int tm_year; } ;
struct i2c_client {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int *) ;

__attribute__((used)) static int
FUNC_3(struct i2c_client *VAR_11, struct rtc_time const *VAR_12)
{
 u8 VAR_13[VAR_6];
 int VAR_14;

 VAR_14 = FUNC_1(VAR_11);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_13[VAR_9] = FUNC_0(VAR_12->tm_sec);
 VAR_13[VAR_7] = FUNC_0(VAR_12->tm_min);
 VAR_13[VAR_5] = FUNC_0(VAR_12->tm_hour);
 VAR_13[VAR_3] = FUNC_0(VAR_12->tm_mday);
 VAR_13[VAR_8] = FUNC_0(VAR_12->tm_mon + 1);
 VAR_13[VAR_4] = FUNC_0(VAR_12->tm_wday);
 VAR_13[VAR_10] = FUNC_0(VAR_12->tm_year % 100);
 VAR_13[VAR_0] = FUNC_0((VAR_12->tm_year + 1900) / 100);

 VAR_13[VAR_1] = VAR_2;

 VAR_14 = FUNC_2(VAR_11, VAR_13);
 if (VAR_14 < 0)
  return VAR_14;

 return 0;
}
