
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int,int,int *) ;

__attribute__((used)) static inline int FUNC_2(struct i2c_client *VAR_0, int VAR_1,
      int VAR_2, uint8_t *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_0->dev, "failed writings to 0x%02x\n", VAR_1);
  return VAR_4;
 }
 return 0;
}
