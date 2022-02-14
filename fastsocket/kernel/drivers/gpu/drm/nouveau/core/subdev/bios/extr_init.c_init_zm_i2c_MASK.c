
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct nvbios_init {scalar_t__ offset; struct nouveau_bios* bios; } ;
struct nouveau_i2c_port {int adapter; } ;
struct nouveau_bios {int dummy; } ;
struct i2c_msg {size_t addr; size_t len; size_t* buf; int flags; } ;


 int FUNC_0 (int *,struct i2c_msg*,int) ;
 scalar_t__ FUNC_1 (struct nvbios_init*) ;
 struct nouveau_i2c_port* FUNC_2 (struct nvbios_init*,size_t) ;
 int FUNC_3 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_4 (char*,size_t,...) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void
FUNC_6(struct nvbios_init *VAR_0)
{
 struct nouveau_bios *VAR_1 = VAR_0->bios;
 u8 VAR_2 = FUNC_3(VAR_1, VAR_0->offset + 1);
 u8 VAR_3 = FUNC_3(VAR_1, VAR_0->offset + 2) >> 1;
 u8 VAR_4 = FUNC_3(VAR_1, VAR_0->offset + 3);
 u8 VAR_5[256], VAR_6;

 FUNC_4("ZM_I2C\tI2C[0x%02x][0x%02x]\n", VAR_2, VAR_3);
 VAR_0->offset += 4;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5[VAR_6] = FUNC_3(VAR_1, VAR_0->offset);
  FUNC_4("\t0x%02x\n", VAR_5[VAR_6]);
  VAR_0->offset++;
 }

 if (FUNC_1(VAR_0)) {
  struct nouveau_i2c_port *VAR_7 = FUNC_2(VAR_0, VAR_2);
  struct i2c_msg VAR_8 = {
   .addr = VAR_3, .flags = 0, .len = VAR_4, .buf = VAR_5,
  };
  int VAR_9;

  if (VAR_7 && (VAR_9 = FUNC_0(&VAR_7->adapter, &VAR_8, 1)) != 1)
   FUNC_5("i2c wr failed, %d\n", VAR_9);
 }
}
