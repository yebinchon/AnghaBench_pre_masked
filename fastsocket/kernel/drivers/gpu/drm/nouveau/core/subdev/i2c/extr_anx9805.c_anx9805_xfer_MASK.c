
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nouveau_i2c_port {int dummy; } ;
struct i2c_msg {int flags; int addr; int len; int* buf; } ;
struct i2c_adapter {struct anx9805_i2c_port* algo_data; } ;
struct anx9805_i2c_port {int addr; int ctrl; } ;
struct TYPE_2__ {scalar_t__ parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct anx9805_i2c_port*) ;
 int FUNC_2 (struct nouveau_i2c_port*,int ,int) ;
 int FUNC_3 (struct nouveau_i2c_port*,int ,int,int) ;

__attribute__((used)) static int
FUNC_4(struct i2c_adapter *VAR_2, struct i2c_msg *VAR_3, int VAR_4)
{
 struct anx9805_i2c_port *VAR_5 = VAR_2->algo_data;
 struct nouveau_i2c_port *VAR_6 = (void *)FUNC_1(VAR_5)->parent;
 struct i2c_msg *VAR_7 = VAR_3;
 int VAR_8 = -VAR_0;
 int VAR_9, VAR_10, VAR_11 = VAR_4;
 u8 VAR_12 = 0x00, VAR_13 = 0x00, VAR_14;

 VAR_14 = FUNC_2(VAR_6, VAR_5->ctrl, 0x07) & ~0x10;
 FUNC_3(VAR_6, VAR_5->ctrl, 0x07, VAR_14 | 0x10);
 FUNC_3(VAR_6, VAR_5->ctrl, 0x07, VAR_14);
 FUNC_3(VAR_6, VAR_5->addr, 0x43, 0x05);
 FUNC_0(5);

 while (VAR_11--) {
  if ( (VAR_7->flags & VAR_1) && VAR_7->addr == 0x50) {
   FUNC_3(VAR_6, VAR_5->addr, 0x40, VAR_7->addr << 1);
   FUNC_3(VAR_6, VAR_5->addr, 0x41, VAR_12);
   FUNC_3(VAR_6, VAR_5->addr, 0x42, VAR_13);
   FUNC_3(VAR_6, VAR_5->addr, 0x44, VAR_7->len);
   FUNC_3(VAR_6, VAR_5->addr, 0x45, 0x00);
   FUNC_3(VAR_6, VAR_5->addr, 0x43, 0x01);
   for (VAR_9 = 0; VAR_9 < VAR_7->len; VAR_9++) {
    VAR_10 = 0;
    while (FUNC_2(VAR_6, VAR_5->addr, 0x46) & 0x10) {
     FUNC_0(5);
     if (VAR_10++ == 32)
      goto done;
    }
    VAR_7->buf[VAR_9] = FUNC_2(VAR_6, VAR_5->addr, 0x47);
   }
  } else
  if (!(VAR_7->flags & VAR_1)) {
   if (VAR_7->addr == 0x50 && VAR_7->len == 0x01) {
    VAR_13 = VAR_7->buf[0];
   } else
   if (VAR_7->addr == 0x30 && VAR_7->len == 0x01) {
    VAR_12 = VAR_7->buf[0];
   } else
    goto done;
  } else {
   goto done;
  }
  VAR_7++;
 }

 VAR_8 = VAR_4;
done:
 FUNC_3(VAR_6, VAR_5->addr, 0x43, 0x00);
 return VAR_8;
}
