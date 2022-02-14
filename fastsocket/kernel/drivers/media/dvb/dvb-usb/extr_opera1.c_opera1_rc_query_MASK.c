
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct opera1_state {scalar_t__ last_key_pressed; } ;
struct i2c_msg {int len; int flags; scalar_t__* buf; int addr; } ;
struct dvb_usb_device {int i2c_adap; struct opera1_state* priv; } ;
struct TYPE_4__ {int event; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,struct i2c_msg*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_device *VAR_6, u32 * VAR_7, int *VAR_8)
{
 struct opera1_state *VAR_9 = VAR_6->priv;
 u8 VAR_10[32];
 const u16 VAR_11 = 0x10ed;
 const u16 VAR_12 = 0x11ec;
 struct i2c_msg VAR_13[] = {
  {.addr = VAR_0,.buf = VAR_10,.flags = VAR_1,.len = 32},
 };
 int VAR_14 = 0;
 u32 VAR_15 = 0;

 if (FUNC_1(&VAR_6->i2c_adap, VAR_13, 1) == 1) {
  for (VAR_14 = 0; VAR_14 < 32; VAR_14++) {
   if (VAR_10[VAR_14])
    VAR_15 |= 1;
   if (VAR_14 < 31)
    VAR_15 = VAR_15 << 1;
  }
  if (VAR_15 & 0x8000)
   VAR_15 = (VAR_15 << 1) | (VAR_15 >> 15 & 0x01);

  if (VAR_15 == 0xffff && VAR_9->last_key_pressed != 0) {
   *VAR_8 = VAR_3;
   *VAR_7 = VAR_9->last_key_pressed;
   return 0;
  }
  for (; VAR_15 != 0;) {
   if (VAR_15 >> 16 == VAR_12) {
    break;
   } else if (VAR_15 >> 16 == VAR_11) {
    VAR_15 =
     (VAR_15 & 0xfffeffff) | (VAR_11 << 16);
    break;
   } else
    VAR_15 >>= 1;
  }

  if (VAR_15 == 0)
   return 0;

  VAR_15 = (VAR_15 & 0xffff) | 0x0100;

  for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_5); VAR_14++) {
   if (FUNC_2(&VAR_5[VAR_14]) == (VAR_15 & 0xffff)) {
    *VAR_8 = VAR_2;
    *VAR_7 = VAR_5[VAR_14].event;
    VAR_9->last_key_pressed =
     VAR_5[VAR_14].event;
    break;
   }
   VAR_9->last_key_pressed = 0;
  }
 } else
  *VAR_8 = VAR_4;
 return 0;
}
