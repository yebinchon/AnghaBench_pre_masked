
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nouveau_i2c_port {int dummy; } ;
struct anx9805_i2c_port {int addr; } ;
struct TYPE_2__ {scalar_t__ parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nouveau_i2c_port*,char*,...) ;
 TYPE_1__* FUNC_2 (struct anx9805_i2c_port*) ;
 int FUNC_3 (struct nouveau_i2c_port*,int ,int) ;
 int FUNC_4 (struct nouveau_i2c_port*,int ,int,int) ;

__attribute__((used)) static int
FUNC_5(struct nouveau_i2c_port *VAR_2, int VAR_3, int VAR_4, bool VAR_5)
{
 struct anx9805_i2c_port *VAR_6 = (void *)VAR_2;
 struct nouveau_i2c_port *VAR_7 = (void *)FUNC_2(VAR_6)->parent;
 u8 VAR_8, VAR_9;

 FUNC_4(VAR_7, VAR_6->addr, 0xa0, VAR_4);
 FUNC_4(VAR_7, VAR_6->addr, 0xa1, VAR_3 | (VAR_5 ? 0x80 : 0x00));
 FUNC_4(VAR_7, VAR_6->addr, 0xa2, 0x01);
 FUNC_4(VAR_7, VAR_6->addr, 0xa8, 0x01);

 VAR_9 = 0;
 while ((VAR_8 = FUNC_3(VAR_7, VAR_6->addr, 0xa8)) & 0x01) {
  FUNC_0(5);
  if (VAR_9++ == 100) {
   FUNC_1(VAR_2, "link training timed out\n");
   return -VAR_1;
  }
 }

 if (VAR_8 & 0x70) {
  FUNC_1(VAR_2, "link training failed: 0x%02x\n", VAR_8);
  return -VAR_0;
 }

 return 1;
}
