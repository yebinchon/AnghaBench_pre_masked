
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_wday; void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
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
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_10,
          struct rtc_time *VAR_11)
{
 u8 VAR_12[VAR_2], VAR_13[1] = { VAR_7 };
 struct i2c_msg VAR_14[] = {
  {
   .addr = VAR_10->addr,
   .flags = 0,
   .len = 1,
   .buf = VAR_13,
  },
  {
   .addr = VAR_10->addr,
   .flags = VAR_1,
   .len = VAR_2 - VAR_7,
   .buf = VAR_12 + VAR_7,
  },
 };

 if (FUNC_2(VAR_10->adapter, VAR_14, 2) < 0) {
  FUNC_1(&VAR_10->dev, "read error\n");
  return -VAR_0;
 }

 VAR_11->tm_sec = FUNC_0(VAR_12[VAR_7] & 0x7f);
 VAR_11->tm_min = FUNC_0(VAR_12[VAR_5] & 0x7f);
 VAR_11->tm_hour = FUNC_0(VAR_12[VAR_4] & 0x3f);
 VAR_11->tm_mday = FUNC_0(VAR_12[VAR_3] & 0x3f);
 VAR_11->tm_wday = VAR_12[VAR_8] & 0x07;
 VAR_11->tm_mon = FUNC_0(VAR_12[VAR_6] & 0x1f) - 1;


 VAR_11->tm_year = FUNC_0(VAR_12[VAR_9]) + 100;
 return 0;
}
