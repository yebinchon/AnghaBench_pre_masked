
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct i2c_client*,int,int,int*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1,
       int VAR_2, u8 VAR_3, u8 *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_1, (VAR_2 << 4) | 0x08,
      VAR_3, VAR_4);

 if (VAR_5 != VAR_3) {
  FUNC_0(&VAR_1->dev, "Unable to read registers #%d..#%d\n",
   VAR_2, VAR_2 + VAR_3 - 1);
  return VAR_5 < 0 ? VAR_5 : -VAR_0;
 }

 return 0;
}
