
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct i2c_msg {int len; unsigned char* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
struct bq27x00_device_info {struct i2c_client* client; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(u8 VAR_2, int *VAR_3, int VAR_4,
   struct bq27x00_device_info *VAR_5)
{
 struct i2c_client *VAR_6 = VAR_5->client;
 struct i2c_msg VAR_7[1];
 unsigned char VAR_8[2];
 int VAR_9;

 if (!VAR_6->adapter)
  return -VAR_0;

 VAR_7->addr = VAR_6->addr;
 VAR_7->flags = 0;
 VAR_7->len = 1;
 VAR_7->buf = VAR_8;

 VAR_8[0] = VAR_2;
 VAR_9 = FUNC_1(VAR_6->adapter, VAR_7, 1);

 if (VAR_9 >= 0) {
  if (!VAR_4)
   VAR_7->len = 2;
  else
   VAR_7->len = 1;

  VAR_7->flags = VAR_1;
  VAR_9 = FUNC_1(VAR_6->adapter, VAR_7, 1);
  if (VAR_9 >= 0) {
   if (!VAR_4)
    *VAR_3 = FUNC_0(VAR_8);
   else
    *VAR_3 = VAR_8[0];

   return 0;
  }
 }
 return VAR_9;
}
