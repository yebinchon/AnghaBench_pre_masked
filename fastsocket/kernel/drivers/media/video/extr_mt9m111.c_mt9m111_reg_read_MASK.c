
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,int const,int) ;
 int FUNC_1 (struct i2c_client*,int const) ;
 int FUNC_2 (struct i2c_client*,int const) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0, const u16 VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_2)
  VAR_2 = FUNC_3(FUNC_1(VAR_0, VAR_1 & 0xff));

 FUNC_0(&VAR_0->dev, "read  reg.%03x -> %04x\n", VAR_1, VAR_2);
 return VAR_2;
}
