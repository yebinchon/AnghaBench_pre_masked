
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct i2c_client {int dev; } ;
typedef size_t s32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,char*) ;
 size_t FUNC_2 (struct i2c_client*,size_t,size_t,size_t*) ;
 size_t FUNC_3 (struct i2c_client*,size_t,size_t const) ;
 scalar_t__ FUNC_4 (size_t*,size_t const*,size_t) ;

__attribute__((used)) static s32 FUNC_5(struct i2c_client *VAR_3, u8 VAR_4,
       u8 VAR_5, const u8 *VAR_6)
{
 u8 VAR_7[VAR_2];
 int VAR_8 = 0;

 FUNC_0(&VAR_3->dev, "ds1307_write_block_data (length=%d)\n", VAR_5);
 do {
  s32 VAR_9, VAR_10;

  if (++VAR_8 > VAR_0) {
   FUNC_1(&VAR_3->dev,
    "ds1307_write_block_data failed\n");
   return -VAR_1;
  }
  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
   VAR_10 = FUNC_3(VAR_3, VAR_4 + VAR_9,
       VAR_6[VAR_9]);
   if (VAR_10 < 0)
    return VAR_10;
  }
  VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_5,
        VAR_7);
  if (VAR_10 < 0)
   return VAR_10;
 } while (FUNC_4(VAR_7, VAR_6, VAR_5));
 return VAR_5;
}
