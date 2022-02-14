
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl2550_data {int operating_mode; } ;
struct i2c_client {int dummy; } ;


 int * VAR_0 ;
 struct tsl2550_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1, int VAR_2)
{
 struct tsl2550_data *VAR_3 = FUNC_0(VAR_1);

 int VAR_4 = FUNC_1(VAR_1, VAR_0[VAR_2]);

 VAR_3->operating_mode = VAR_2;

 return VAR_4;
}
