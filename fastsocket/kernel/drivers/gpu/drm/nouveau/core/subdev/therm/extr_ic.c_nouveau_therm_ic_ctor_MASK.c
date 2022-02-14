
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvbios_extdev_func {int addr; } ;
struct nouveau_therm_priv {scalar_t__ ic; } ;
struct nouveau_therm {int dummy; } ;
struct nouveau_i2c {int (* identify ) (struct nouveau_i2c*,int ,char*,struct i2c_board_info*,int ) ;} ;
struct nouveau_bios {int dummy; } ;
struct i2c_board_info {int member_0; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct nouveau_bios* FUNC_2 (struct nouveau_therm*) ;
 struct nouveau_i2c* FUNC_3 (struct nouveau_therm*) ;
 struct i2c_board_info* VAR_2 ;
 int FUNC_4 (struct nouveau_bios*,int ,struct nvbios_extdev_func*) ;
 int VAR_3 ;
 int FUNC_5 (struct nouveau_i2c*,int ,char*,struct i2c_board_info*,int ) ;
 int FUNC_6 (struct nouveau_i2c*,int ,char*,struct i2c_board_info*,int ) ;
 int FUNC_7 (struct nouveau_i2c*,int ,char*,struct i2c_board_info*,int ) ;

void
FUNC_8(struct nouveau_therm *VAR_4)
{
 struct nouveau_therm_priv *VAR_5 = (void *)VAR_4;
 struct nouveau_bios *VAR_6 = FUNC_2(VAR_4);
 struct nouveau_i2c *VAR_7 = FUNC_3(VAR_4);
 struct nvbios_extdev_func VAR_8;

 if (!FUNC_4(VAR_6, VAR_1, &VAR_8)) {
  struct i2c_board_info VAR_9[] = {
   { FUNC_0("lm90", VAR_8.addr >> 1) },
   { }
  };

  VAR_7->identify(VAR_7, FUNC_1(0), "monitoring device",
      VAR_9, VAR_3);
  if (VAR_5->ic)
   return;
 }

 if (!FUNC_4(VAR_6, VAR_0, &VAR_8)) {
  struct i2c_board_info VAR_10[] = {
   { FUNC_0("adt7473", VAR_8.addr >> 1) },
   { }
  };

  VAR_7->identify(VAR_7, FUNC_1(0), "monitoring device",
      VAR_10, VAR_3);
  if (VAR_5->ic)
   return;
 }




 VAR_7->identify(VAR_7, FUNC_1(0), "monitoring device",
        VAR_2, VAR_3);
}
