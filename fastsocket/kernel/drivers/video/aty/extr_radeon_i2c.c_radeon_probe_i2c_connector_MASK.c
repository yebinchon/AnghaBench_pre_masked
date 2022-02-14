
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct radeonfb_info {scalar_t__ is_mobility; TYPE_1__* i2c; } ;
struct TYPE_2__ {int adapter; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;

int FUNC_3(struct radeonfb_info *VAR_6, int VAR_7,
          u8 **VAR_8)
{
 u8 *VAR_9;

 VAR_9 = FUNC_1(&VAR_6->i2c[VAR_7-1].adapter);

 if (VAR_8)
  *VAR_8 = VAR_9;
 if (!VAR_9) {
  FUNC_2("radeonfb: I2C (port %d) ... not found\n", VAR_7);
  return VAR_5;
 }
 if (VAR_9[0x14] & 0x80) {

  if (VAR_6->is_mobility &&
      (FUNC_0(VAR_0) & VAR_1)) {
   FUNC_2("radeonfb: I2C (port %d) ... found LVDS panel\n", VAR_7);
   return VAR_4;
  } else {
   FUNC_2("radeonfb: I2C (port %d) ... found TMDS panel\n", VAR_7);
   return VAR_3;
  }
 }
 FUNC_2("radeonfb: I2C (port %d) ... found CRT display\n", VAR_7);
 return VAR_2;
}
