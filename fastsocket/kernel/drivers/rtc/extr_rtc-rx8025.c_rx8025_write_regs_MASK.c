
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,int,scalar_t__) ;
 int FUNC_1 (struct i2c_client*,int,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0,
        int VAR_1, u8 VAR_2, u8 *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_0, (VAR_1 << 4) | 0x08,
       VAR_2, VAR_3);

 if (VAR_4)
  FUNC_0(&VAR_0->dev, "Unable to write registers #%d..#%d\n",
   VAR_1, VAR_1 + VAR_2 - 1);

 return VAR_4;
}
