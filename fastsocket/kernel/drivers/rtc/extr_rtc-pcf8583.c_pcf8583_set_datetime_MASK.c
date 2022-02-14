
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; int tm_wday; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1, struct rtc_time *VAR_2, int VAR_3)
{
 unsigned char VAR_4[8];
 int VAR_5, VAR_6 = 6;

 VAR_4[0] = 0;
 VAR_4[1] = FUNC_1(VAR_1) | 0x80;
 VAR_4[2] = 0;
 VAR_4[3] = FUNC_0(VAR_2->tm_sec);
 VAR_4[4] = FUNC_0(VAR_2->tm_min);
 VAR_4[5] = FUNC_0(VAR_2->tm_hour);

 if (VAR_3) {
  VAR_6 = 8;
  VAR_4[6] = FUNC_0(VAR_2->tm_mday) | (VAR_2->tm_year << 6);
  VAR_4[7] = FUNC_0(VAR_2->tm_mon + 1) | (VAR_2->tm_wday << 5);
 }

 VAR_5 = FUNC_2(VAR_1, (char *)VAR_4, VAR_6);
 if (VAR_5 != VAR_6)
  return -VAR_0;

 VAR_4[1] = FUNC_1(VAR_1);
 VAR_5 = FUNC_2(VAR_1, (char *)VAR_4, 2);

 return VAR_5 == 2 ? 0 : -VAR_0;
}
