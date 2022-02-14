
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvbios_init {scalar_t__ offset; struct nouveau_bios* bios; } ;
struct nouveau_i2c_port {int adapter; } ;
struct nouveau_bios {int dummy; } ;
struct i2c_msg {int addr; int len; int* buf; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (struct nvbios_init*,int) ;
 struct nouveau_i2c_port* FUNC_2 (struct nvbios_init*,int) ;
 int FUNC_3 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_4 (char*,int,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_5(struct nvbios_init *VAR_1)
{
 struct nouveau_bios *VAR_2 = VAR_1->bios;
 u8 VAR_3 = FUNC_3(VAR_2, VAR_1->offset + 1);
 u8 VAR_4 = FUNC_3(VAR_2, VAR_1->offset + 2) >> 1;
 u8 VAR_5 = FUNC_3(VAR_2, VAR_1->offset + 3);
 u8 VAR_6 = FUNC_3(VAR_2, VAR_1->offset + 4);
 u8 VAR_7 = FUNC_3(VAR_2, VAR_1->offset + 5);
 u8 VAR_8 = FUNC_3(VAR_2, VAR_1->offset + 6);
 struct nouveau_i2c_port *VAR_9;

 FUNC_4("I2C_LONG_IF\t"
       "I2C[0x%02x][0x%02x][0x%02x%02x] & 0x%02x == 0x%02x\n",
       VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 VAR_1->offset += 7;

 VAR_9 = FUNC_2(VAR_1, VAR_3);
 if (VAR_9) {
  u8 VAR_10[2] = { VAR_6, VAR_5 };
  u8 VAR_11[1] = {};
  struct i2c_msg VAR_12[] = {
   { .addr = VAR_4, .flags = 0, .len = 2, .buf = VAR_10 },
   { .addr = VAR_4, .flags = VAR_0, .len = 1, .buf = VAR_11 }
  };
  int VAR_13;

  VAR_13 = FUNC_0(&VAR_9->adapter, VAR_12, 2);
  if (VAR_13 == 2 && ((VAR_11[0] & VAR_7) == VAR_8))
   return;
 }

 FUNC_1(VAR_1, 0);
}
