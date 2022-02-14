
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvbios_therm_sensor {int offset_constant; } ;
struct nouveau_therm_priv {struct i2c_client* ic; struct nvbios_therm_sensor bios_sensor; } ;
struct nouveau_i2c_port {int adapter; } ;
struct i2c_client {TYPE_1__* driver; } ;
struct i2c_board_info {int addr; int type; } ;
struct TYPE_2__ {scalar_t__ (* detect ) (struct i2c_client*,int,struct i2c_board_info*) ;} ;


 int VAR_0 ;
 struct i2c_client* FUNC_0 (int *,struct i2c_board_info*) ;
 int FUNC_1 (struct i2c_client*) ;
 scalar_t__ FUNC_2 (struct nouveau_i2c_port*) ;
 int FUNC_3 (struct nouveau_therm_priv*,char*,int ,int ,int ) ;
 int FUNC_4 (char*,int ,int ) ;
 scalar_t__ FUNC_5 (struct i2c_client*,int,struct i2c_board_info*) ;

__attribute__((used)) static bool
FUNC_6(struct nouveau_i2c_port *VAR_1,
   struct i2c_board_info *VAR_2)
{
 struct nouveau_therm_priv *VAR_3 = (void *)FUNC_2(VAR_1);
 struct nvbios_therm_sensor *VAR_4 = &VAR_3->bios_sensor;
 struct i2c_client *VAR_5;

 FUNC_4("%s%s", VAR_0, VAR_2->type);

 VAR_5 = FUNC_0(&VAR_1->adapter, VAR_2);
 if (!VAR_5)
  return 0;

 if (!VAR_5->driver || VAR_5->driver->detect(VAR_5, -1, VAR_2)) {
  FUNC_1(VAR_5);
  return 0;
 }

 FUNC_3(VAR_3,
  "Found an %s at address 0x%x (controlled by lm_sensors, "
  "temp offset %+i C)\n",
  VAR_2->type, VAR_2->addr, VAR_4->offset_constant);
 VAR_3->ic = VAR_5;

 return 1;
}
