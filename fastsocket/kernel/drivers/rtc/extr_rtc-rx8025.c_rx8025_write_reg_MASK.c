
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0, int VAR_1, u8 VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0, VAR_1 << 4, VAR_2);

 if (VAR_3)
  FUNC_0(&VAR_0->dev, "Unable to write register #%d\n",
   VAR_1);

 return VAR_3;
}
