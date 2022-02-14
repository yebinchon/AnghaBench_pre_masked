
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct v4l2_subdev_io_pin_config {scalar_t__ strength; int pin; int flags; int value; int function; } ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int,scalar_t__) ;
 int FUNC_3 (struct i2c_client*,int,int) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_11, size_t VAR_12,
          struct v4l2_subdev_io_pin_config *VAR_13)
{
 struct i2c_client *VAR_14 = FUNC_4(VAR_11);
 int VAR_15;
 u32 VAR_16;
 u8 VAR_17, VAR_18, VAR_19;

 VAR_16 = FUNC_1(VAR_14, 0x120);
 VAR_17 = FUNC_0(VAR_14, 0x160);
 VAR_18 = FUNC_0(VAR_14, 0x164);

 for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
  VAR_19 = VAR_13[VAR_15].strength;
  if (VAR_19 > VAR_6)
   VAR_19 = VAR_6;

  switch (VAR_13[VAR_15].pin) {
  case 130:
   if (VAR_13[VAR_15].function != VAR_5) {

    VAR_16 &= ~(0x1 << 25);
   } else {

    if (VAR_13[VAR_15].flags &
     (VAR_8 |
      VAR_9)) {
     VAR_16 &= ~(0x1 << 25);
    } else {
     VAR_16 |= (0x1 << 25);
    }
    if (VAR_13[VAR_15].flags &
     VAR_7) {
     VAR_16 &= ~(0x1 << 24);
    } else {
     VAR_16 |= (0x1 << 24);
    }
   }
   break;
  case 129:
   if (VAR_13[VAR_15].function != VAR_0) {

    VAR_17 |= (0x1 << 0);
    VAR_16 &= ~(0x3 << 18);
    VAR_16 |= (VAR_19 << 18);
   } else {

    VAR_17 &= ~(0x1 << 0);
    if (VAR_13[VAR_15].flags & VAR_10) {
     VAR_18 &= ~(0x1 << 0);
     VAR_18 |= ((VAR_13[VAR_15].value & 0x1) << 0);
    }
    VAR_16 &= ~(0x3 << 12);
    VAR_16 |= (VAR_19 << 12);
   }
   break;
  case 128:
   if (VAR_13[VAR_15].function != VAR_1) {

    VAR_17 |= (0x1 << 1);
    if (VAR_13[VAR_15].flags & VAR_8)
     VAR_16 &= ~(0x1 << 10);
    else
     VAR_16 |= (0x1 << 10);
    VAR_16 &= ~(0x3 << 18);
    VAR_16 |= (VAR_19 << 18);
   } else {

    VAR_17 &= ~(0x1 << 1);
    if (VAR_13[VAR_15].flags & VAR_10) {
     VAR_18 &= ~(0x1 << 1);
     VAR_18 |= ((VAR_13[VAR_15].value & 0x1) << 1);
    }
    VAR_16 &= ~(0x3 << 12);
    VAR_16 |= (VAR_19 << 12);
   }
   break;
  case 132:
   if (VAR_13[VAR_15].function != VAR_2) {


    VAR_17 |= (0x1 << 2);
    VAR_16 &= ~(0x3 << 22);
    VAR_16 |= (VAR_19 << 22);
   } else {

    VAR_17 &= ~(0x1 << 2);
    if (VAR_13[VAR_15].flags & VAR_10) {
     VAR_18 &= ~(0x1 << 2);
     VAR_18 |= ((VAR_13[VAR_15].value & 0x1) << 2);
    }
    VAR_16 &= ~(0x3 << 12);
    VAR_16 |= (VAR_19 << 12);
   }
   break;
  case 131:
   if (VAR_13[VAR_15].function != VAR_3) {


    VAR_17 |= (0x1 << 3);
    VAR_16 &= ~(0x3 << 22);
    VAR_16 |= (VAR_19 << 22);
   } else {

    VAR_17 &= ~(0x1 << 3);
    if (VAR_13[VAR_15].flags & VAR_10) {
     VAR_18 &= ~(0x1 << 3);
     VAR_18 |= ((VAR_13[VAR_15].value & 0x1) << 3);
    }
    VAR_16 &= ~(0x3 << 12);
    VAR_16 |= (VAR_19 << 12);
   }
   break;
  case 133:
   if (VAR_13[VAR_15].function != VAR_4) {


    VAR_17 |= (0x1 << 4);
    VAR_16 &= ~(0x3 << 22);
    VAR_16 |= (VAR_19 << 22);
   } else {

    VAR_17 &= ~(0x1 << 4);
    if (VAR_13[VAR_15].flags & VAR_10) {
     VAR_18 &= ~(0x1 << 4);
     VAR_18 |= ((VAR_13[VAR_15].value & 0x1) << 4);
    }
    VAR_16 &= ~(0x3 << 12);
    VAR_16 |= (VAR_19 << 12);
   }
   break;
  }
 }

 FUNC_2(VAR_14, 0x164, VAR_18);
 FUNC_2(VAR_14, 0x160, VAR_17);
 FUNC_3(VAR_14, 0x120, VAR_16);
 return 0;
}
