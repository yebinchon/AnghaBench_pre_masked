
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct saa5246a_device {int sd; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,char*,int) ;
 int FUNC_1 (char*,int *,int) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct saa5246a_device *VAR_0, int VAR_1, int VAR_2, u8 *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_2(&VAR_0->sd);
 char VAR_5[64];

 VAR_5[0] = VAR_1;
 FUNC_1(VAR_5+1, VAR_3, VAR_2);

 if (FUNC_0(VAR_4, VAR_5, VAR_2 + 1) == VAR_2 + 1)
  return 0;
 return -1;
}
