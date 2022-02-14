
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nv50_i2c_port {int addr; } ;
struct nouveau_i2c_port {int dummy; } ;
struct nouveau_i2c {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct nouveau_i2c*,int) ;
 int FUNC_3 (struct nouveau_i2c*,int) ;
 int FUNC_4 (int*,int*,int) ;
 struct nouveau_i2c* FUNC_5 (struct nouveau_i2c_port*) ;
 int FUNC_6 (struct nouveau_i2c*,int,int ,int ) ;
 int FUNC_7 (struct nouveau_i2c*,int) ;
 int FUNC_8 (struct nouveau_i2c*,int,int) ;
 int FUNC_9 (int) ;

int
FUNC_10(struct nouveau_i2c_port *VAR_2, u8 VAR_3, u32 VAR_4, u8 *VAR_5, u8 VAR_6)
{
 struct nouveau_i2c *VAR_7 = FUNC_5(VAR_2);
 struct nv50_i2c_port *VAR_8 = (void *)VAR_2;
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 u32 VAR_13[4] = {};
 int VAR_14 = VAR_8->addr;
 int VAR_15, VAR_16;

 FUNC_0("%d: 0x%08x %d\n", VAR_3, VAR_4, VAR_6);

 VAR_15 = FUNC_3(VAR_7, VAR_14);
 if (VAR_15)
  goto out;

 VAR_10 = FUNC_7(VAR_7, 0x00e4e8 + (VAR_14 * 0x50));
 if (!(VAR_10 & 0x10000000)) {
  FUNC_0("sink not detected\n");
  VAR_15 = -VAR_0;
  goto out;
 }

 if (!(VAR_3 & 1)) {
  FUNC_4(VAR_13, VAR_5, VAR_6);
  for (VAR_16 = 0; VAR_16 < 16; VAR_16 += 4) {
   FUNC_0("wr 0x%08x\n", VAR_13[VAR_16 / 4]);
   FUNC_8(VAR_7, 0x00e4c0 + (VAR_14 * 0x50) + VAR_16, VAR_13[VAR_16 / 4]);
  }
 }

 VAR_9 = FUNC_7(VAR_7, 0x00e4e4 + (VAR_14 * 0x50));
 VAR_9 &= ~0x0001f0ff;
 VAR_9 |= VAR_3 << 12;
 VAR_9 |= VAR_6 - 1;
 FUNC_8(VAR_7, 0x00e4e0 + (VAR_14 * 0x50), VAR_4);


 VAR_15 = -VAR_1;
 for (VAR_12 = 0; VAR_12 < 32; VAR_12++) {

  FUNC_8(VAR_7, 0x00e4e4 + (VAR_14 * 0x50), 0x80000000 | VAR_9);
  FUNC_8(VAR_7, 0x00e4e4 + (VAR_14 * 0x50), 0x00000000 | VAR_9);
  if (VAR_12)
   FUNC_9(400);


  FUNC_8(VAR_7, 0x00e4e4 + (VAR_14 * 0x50), 0x00010000 | VAR_9);

  VAR_11 = 1000;
  do {
   VAR_9 = FUNC_7(VAR_7, 0x00e4e4 + (VAR_14 * 0x50));
   FUNC_9(1);
   if (!VAR_11--) {
    FUNC_1("tx req timeout 0x%08x\n", VAR_9);
    goto out;
   }
  } while (VAR_9 & 0x00010000);


  VAR_10 = FUNC_6(VAR_7, 0x00e4e8 + (VAR_14 * 0x50), 0, 0);
  if (!(VAR_10 & 0x000f0f00)) {
   VAR_15 = 0;
   break;
  }

  FUNC_0("%02d 0x%08x 0x%08x\n", VAR_12, VAR_9, VAR_10);
 }

 if (VAR_3 & 1) {
  for (VAR_16 = 0; VAR_16 < 16; VAR_16 += 4) {
   VAR_13[VAR_16 / 4] = FUNC_7(VAR_7, 0x00e4d0 + (VAR_14 * 0x50) + VAR_16);
   FUNC_0("rd 0x%08x\n", VAR_13[VAR_16 / 4]);
  }
  FUNC_4(VAR_5, VAR_13, VAR_6);
 }

out:
 FUNC_2(VAR_7, VAR_14);
 return VAR_15;
}
