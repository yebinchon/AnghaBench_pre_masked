
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mday; int tm_mon; int tm_year; } ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_11, struct rtc_time *VAR_12)
{
 u8 VAR_13[1 + VAR_2];
 u8 *VAR_14 = &VAR_13[1];
 u8 VAR_15[1] = { VAR_7 };
 struct i2c_msg VAR_16[] = {
  {
   .addr = VAR_11->addr,
   .flags = 0,
   .len = 1,
   .buf = VAR_15,
  },
  {
   .addr = VAR_11->addr,
   .flags = VAR_1,
   .len = VAR_2 - VAR_7,
   .buf = VAR_14 + VAR_7,
  },
 };
 struct i2c_msg VAR_17[] = {
  {
   .addr = VAR_11->addr,
   .flags = 0,
   .len = 1 + VAR_2,
   .buf = VAR_13,
   },
 };


 if (FUNC_2(VAR_11->adapter, VAR_16, 2) < 0) {
  FUNC_1(&VAR_11->dev, "read error\n");
  return -VAR_0;
 }

 VAR_13[0] = 0;

 VAR_14[VAR_8] = 0;
 VAR_14[VAR_7] =
  FUNC_0(VAR_12->tm_sec) | (VAR_14[VAR_7] & ~0x7f);
 VAR_14[VAR_5] =
  FUNC_0(VAR_12->tm_min) | (VAR_14[VAR_5] & ~0x7f);
 VAR_14[VAR_4] =
  FUNC_0(VAR_12->tm_hour) | (VAR_14[VAR_4] & ~0x3f) ;
 VAR_14[VAR_9] =
  (VAR_12->tm_wday & 0x07) | (VAR_14[VAR_9] & ~0x07);
 VAR_14[VAR_3] =
  FUNC_0(VAR_12->tm_mday) | (VAR_14[VAR_3] & ~0x3f);
 VAR_14[VAR_6] =
  FUNC_0(VAR_12->tm_mon + 1) | (VAR_14[VAR_6] & ~0x1f);

 VAR_14[VAR_10] = FUNC_0(VAR_12->tm_year % 100);

 if (FUNC_2(VAR_11->adapter, VAR_17, 1) != 1) {
  FUNC_1(&VAR_11->dev, "write error\n");
  return -VAR_0;
 }
 return 0;
}
