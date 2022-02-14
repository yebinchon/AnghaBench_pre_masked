
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_i2c_port {TYPE_1__* func; } ;
struct i2c_algo_bit_data {struct nouveau_i2c_port* data; } ;
struct i2c_adapter {struct i2c_algo_bit_data* algo_data; } ;
struct TYPE_2__ {int (* acquire ) (struct nouveau_i2c_port*) ;} ;


 int FUNC_0 (struct nouveau_i2c_port*) ;

__attribute__((used)) static int
FUNC_1(struct i2c_adapter *VAR_0)
{
 struct i2c_algo_bit_data *VAR_1 = VAR_0->algo_data;
 struct nouveau_i2c_port *VAR_2 = VAR_1->data;
 if (VAR_2->func->acquire)
  VAR_2->func->acquire(VAR_2);
 return 0;
}
