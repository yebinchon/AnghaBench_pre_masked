
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i2c_client {int dev; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (struct i2c_client*,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static s32 FUNC_5(struct i2c_client *VAR_3, u8 VAR_4,
      u8 VAR_5, u8 *VAR_6)
{
 u8 VAR_7[VAR_2];
 s32 VAR_8;
 int VAR_9 = 0;

 FUNC_0(&VAR_3->dev, "ds1307_read_block_data (length=%d)\n", VAR_5);
 VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8 < 0)
  return VAR_8;
 do {
  if (++VAR_9 > VAR_0) {
   FUNC_1(&VAR_3->dev,
    "ds1307_read_block_data failed\n");
   return -VAR_1;
  }
  FUNC_4(VAR_7, VAR_6, VAR_5);
  VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5,
        VAR_6);
  if (VAR_8 < 0)
   return VAR_8;
 } while (FUNC_3(VAR_7, VAR_6, VAR_5));
 return VAR_5;
}
