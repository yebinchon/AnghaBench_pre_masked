
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int driver_data; } ;
struct i2c_client {struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*) ;

 int FUNC_2 (struct i2c_adapter*,int) ;

__attribute__((used)) static int
FUNC_3(struct i2c_client *VAR_2, const struct i2c_device_id *VAR_3)
{
 struct i2c_adapter *VAR_4 = VAR_2->adapter;

 if( !FUNC_2(VAR_4, VAR_0
         | VAR_1) )
  return 0;

 switch (VAR_3->driver_data) {
 case 129:
  return FUNC_0( VAR_2 );
 case 128:
  return FUNC_1(VAR_2);
 }
 return 0;
}
