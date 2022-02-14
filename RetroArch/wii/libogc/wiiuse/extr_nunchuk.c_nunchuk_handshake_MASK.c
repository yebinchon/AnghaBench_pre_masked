
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uword ;
typedef int ubyte ;
struct TYPE_9__ {int type; } ;
struct TYPE_15__ {int x; int y; int z; } ;
struct TYPE_14__ {int x; int y; int z; } ;
struct TYPE_16__ {TYPE_7__ cal_g; TYPE_6__ cal_zero; } ;
struct wiimote_t {TYPE_1__ exp; int event; TYPE_8__ accel_calib; int flags; } ;
struct TYPE_12__ {int x; int y; } ;
struct TYPE_11__ {int x; int y; } ;
struct TYPE_10__ {int x; int y; } ;
struct TYPE_13__ {TYPE_4__ center; TYPE_3__ min; TYPE_2__ max; } ;
struct nunchuk_t {TYPE_5__ js; TYPE_8__ accel_calib; int * flags; scalar_t__ btns_released; scalar_t__ btns_held; scalar_t__ btns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wiimote_t*,int*,int ,int ,int ) ;

int FUNC_1(struct wiimote_t *VAR_5,struct nunchuk_t *VAR_6,ubyte *VAR_7,uword VAR_8)
{

 int VAR_9 = 0;

 VAR_6->btns = 0;
 VAR_6->btns_held = 0;
 VAR_6->btns_released = 0;
 VAR_6->flags = &VAR_5->flags;
 VAR_6->accel_calib = VAR_5->accel_calib;


 if(VAR_7[VAR_9]==0xff) {
  if(VAR_7[VAR_9+16]==0xff) {

   FUNC_0(VAR_5,VAR_7,VAR_3,VAR_0,VAR_4);
  } else
   VAR_9 += 16;
 }

 VAR_6->accel_calib.cal_zero.x = (VAR_7[VAR_9 + 0]<<2)|((VAR_7[VAR_9 + 3]>>4)&3);
 VAR_6->accel_calib.cal_zero.y = (VAR_7[VAR_9 + 1]<<2)|((VAR_7[VAR_9 + 3]>>2)&3);
 VAR_6->accel_calib.cal_zero.z = (VAR_7[VAR_9 + 2]<<2)|(VAR_7[VAR_9 + 3]&3);
 VAR_6->accel_calib.cal_g.x = (VAR_7[VAR_9 + 4]<<2)|((VAR_7[VAR_9 + 7]>>4)&3);
 VAR_6->accel_calib.cal_g.y = (VAR_7[VAR_9 + 5]<<2)|((VAR_7[VAR_9 + 7]>>2)&3);
 VAR_6->accel_calib.cal_g.z = (VAR_7[VAR_9 + 6]<<2)|(VAR_7[VAR_9 + 7]&3);
 VAR_6->js.max.x = VAR_7[VAR_9 + 8];
 VAR_6->js.min.x = VAR_7[VAR_9 + 9];
 VAR_6->js.center.x = VAR_7[VAR_9 + 10];
 VAR_6->js.max.y = VAR_7[VAR_9 + 11];
 VAR_6->js.min.y = VAR_7[VAR_9 + 12];
 VAR_6->js.center.y = VAR_7[VAR_9 + 13];


 if(VAR_6->accel_calib.cal_zero.x == 0)
  VAR_6->accel_calib.cal_zero.x = 499;
 if(VAR_6->accel_calib.cal_zero.y == 0)
  VAR_6->accel_calib.cal_zero.y = 509;
 if(VAR_6->accel_calib.cal_zero.z == 0)
  VAR_6->accel_calib.cal_zero.z = 507;
 if(VAR_6->accel_calib.cal_g.x == 0)
  VAR_6->accel_calib.cal_g.x = 703;
 if(VAR_6->accel_calib.cal_g.y == 0)
  VAR_6->accel_calib.cal_g.y = 709;
 if(VAR_6->accel_calib.cal_g.z == 0)
  VAR_6->accel_calib.cal_g.z = 709;
 if(VAR_6->js.max.x == 0)
  VAR_6->js.max.x = 223;
 if(VAR_6->js.min.x == 0)
  VAR_6->js.min.x = 27;
 if(VAR_6->js.center.x == 0)
  VAR_6->js.center.x = 126;
 if(VAR_6->js.max.y == 0)
  VAR_6->js.max.y = 222;
 if(VAR_6->js.min.y == 0)
  VAR_6->js.min.y = 30;
 if(VAR_6->js.center.y == 0)
  VAR_6->js.center.y = 131;

 VAR_5->event = VAR_2;
 VAR_5->exp.type = VAR_1;

 return 1;
}
