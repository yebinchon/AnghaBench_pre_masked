
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct i2c_client*,char*,int,int,int) ;
 int FUNC_1 (struct i2c_client*,char*,int,int,int) ;
 int FUNC_2 (struct i2c_client*,int ) ;

__attribute__((used)) static int
FUNC_3(struct i2c_client *VAR_6, const struct i2c_device_id *VAR_7)
{
 int VAR_8 = FUNC_2(VAR_6, VAR_4) << 8 |
  FUNC_2(VAR_6, VAR_5);
 int VAR_9 = FUNC_2(VAR_6, VAR_1) << 8 |
  FUNC_2(VAR_6, VAR_2);
 int VAR_10 = FUNC_2(VAR_6, VAR_3);

 if (VAR_8 != 0x1 || VAR_9 != 0x6) {
  FUNC_0(VAR_6, "Unknown device %x:%x.%x\n",
      VAR_8, VAR_9, VAR_10);
  return -VAR_0;
 }

 FUNC_1(VAR_6, "Detected device %x:%x.%x\n",
      VAR_8, VAR_9, VAR_10);

 return 0;
}
