
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_oclass {int handle; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_3__ {struct i2c_algo_bit_data* algo_data; int * algo; } ;
struct nouveau_i2c_port {TYPE_1__ adapter; } ;
struct i2c_algo_bit_data {int udelay; } ;
struct TYPE_4__ {int * func; } ;
struct anx9805_i2c_port {int addr; int ctrl; TYPE_2__ base; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,int *,struct anx9805_i2c_port**) ;
 struct nouveau_object* FUNC_3 (struct anx9805_i2c_port*) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_object *VAR_3,
        struct nouveau_object *VAR_4,
        struct nouveau_oclass *VAR_5, void *VAR_6, u32 VAR_7,
        struct nouveau_object **VAR_8)
{
 struct nouveau_i2c_port *VAR_9 = (void *)VAR_3;
 struct anx9805_i2c_port *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_7,
         &VAR_0, &VAR_10);
 *VAR_8 = FUNC_3(VAR_10);
 if (VAR_11)
  return VAR_11;

 switch ((VAR_5->handle & 0xff00) >> 8) {
 case 0x0d:
  VAR_10->addr = 0x3d;
  VAR_10->ctrl = 0x39;
  break;
 case 0x0e:
  VAR_10->addr = 0x3f;
  VAR_10->ctrl = 0x3b;
  break;
 default:
  FUNC_0(1);
 }

 if (VAR_9->adapter.algo == &VAR_2) {
  struct i2c_algo_bit_data *VAR_12 = VAR_9->adapter.algo_data;
  VAR_12->udelay = FUNC_1(VAR_12->udelay, 40);
 }

 VAR_10->base.func = &VAR_1;
 return 0;
}
