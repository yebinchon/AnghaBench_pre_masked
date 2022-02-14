
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_2, const u16 VAR_3)
{
 int VAR_4;
 u16 VAR_5;
 static int VAR_6 = -1;

 VAR_5 = (VAR_3 >> 8);
 if (VAR_5 == VAR_6)
  return 0;
 if (VAR_5 > 2)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2, VAR_1, FUNC_1(VAR_5));
 if (!VAR_4)
  VAR_6 = VAR_5;
 return VAR_4;
}
