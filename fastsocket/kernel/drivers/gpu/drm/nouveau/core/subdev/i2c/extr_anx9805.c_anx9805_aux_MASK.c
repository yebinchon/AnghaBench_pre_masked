
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nouveau_i2c_port {int dummy; } ;
struct anx9805_i2c_port {int ctrl; int addr; } ;
struct TYPE_2__ {scalar_t__ parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct anx9805_i2c_port*) ;
 int FUNC_2 (struct nouveau_i2c_port*,int ,int) ;
 int FUNC_3 (struct nouveau_i2c_port*,int ,int,int) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_i2c_port *VAR_2, u8 VAR_3, u32 VAR_4, u8 *VAR_5, u8 VAR_6)
{
 struct anx9805_i2c_port *VAR_7 = (void *)VAR_2;
 struct nouveau_i2c_port *VAR_8 = (void *)FUNC_1(VAR_7)->parent;
 int VAR_9, VAR_10 = -VAR_1;
 u8 VAR_11;

 VAR_11 = FUNC_2(VAR_8, VAR_7->ctrl, 0x07) & ~0x04;
 FUNC_3(VAR_8, VAR_7->ctrl, 0x07, VAR_11 | 0x04);
 FUNC_3(VAR_8, VAR_7->ctrl, 0x07, VAR_11);
 FUNC_3(VAR_8, VAR_7->ctrl, 0xf7, 0x01);

 FUNC_3(VAR_8, VAR_7->addr, 0xe4, 0x80);
 for (VAR_9 = 0; !(VAR_3 & 1) && VAR_9 < VAR_6; VAR_9++)
  FUNC_3(VAR_8, VAR_7->addr, 0xf0 + VAR_9, VAR_5[VAR_9]);
 FUNC_3(VAR_8, VAR_7->addr, 0xe5, ((VAR_6 - 1) << 4) | VAR_3);
 FUNC_3(VAR_8, VAR_7->addr, 0xe6, (VAR_4 & 0x000ff) >> 0);
 FUNC_3(VAR_8, VAR_7->addr, 0xe7, (VAR_4 & 0x0ff00) >> 8);
 FUNC_3(VAR_8, VAR_7->addr, 0xe8, (VAR_4 & 0xf0000) >> 16);
 FUNC_3(VAR_8, VAR_7->addr, 0xe9, 0x01);

 VAR_9 = 0;
 while ((VAR_11 = FUNC_2(VAR_8, VAR_7->addr, 0xe9)) & 0x01) {
  FUNC_0(5);
  if (VAR_9++ == 32)
   goto done;
 }

 if ((VAR_11 = FUNC_2(VAR_8, VAR_7->ctrl, 0xf7)) & 0x01) {
  VAR_10 = -VAR_0;
  goto done;
 }

 for (VAR_9 = 0; (VAR_3 & 1) && VAR_9 < VAR_6; VAR_9++)
  VAR_5[VAR_9] = FUNC_2(VAR_8, VAR_7->addr, 0xf0 + VAR_9);
 VAR_10 = 0;
done:
 FUNC_3(VAR_8, VAR_7->ctrl, 0xf7, 0x01);
 return VAR_10;
}
