
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct efx_nic {int dummy; } ;
struct TYPE_2__ {struct i2c_client* hwmon_client; struct i2c_client* ioexp_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct efx_nic *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_0(VAR_4)->ioexp_client;
 struct i2c_client *VAR_6 = FUNC_0(VAR_4)->hwmon_client;


 FUNC_2(VAR_5, VAR_2, 0xff);
 FUNC_2(VAR_5, VAR_3, 0xff);
 FUNC_2(VAR_5, VAR_1, 0xff);


 FUNC_1(VAR_6, VAR_0);
}
