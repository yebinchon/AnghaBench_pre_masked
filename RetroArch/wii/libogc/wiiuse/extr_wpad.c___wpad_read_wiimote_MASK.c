
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_21__ {TYPE_7__* dot; } ;
struct TYPE_17__ {int z; int y; int x; } ;
struct TYPE_22__ {TYPE_8__ ir; TYPE_4__ accel; int btns; } ;
struct TYPE_19__ {TYPE_5__* dot; } ;
struct TYPE_16__ {int z; int y; int x; } ;
struct TYPE_15__ {int type; } ;
struct wiimote_t {int* event_buf; int btns; TYPE_9__ lstate; TYPE_6__ ir; TYPE_3__ accel; TYPE_2__ exp; int battery_level; } ;
struct _wpad_thresh {int ir; int acc; int btns; } ;
typedef scalar_t__ s32 ;
struct TYPE_14__ {int type; } ;
struct TYPE_13__ {int btns_h; int err; scalar_t__ data_present; TYPE_6__ ir; TYPE_3__ accel; TYPE_1__ exp; int battery_level; } ;
typedef TYPE_10__ WPADData ;
struct TYPE_20__ {int ry; int rx; int visible; } ;
struct TYPE_18__ {int visible; int ry; int rx; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (struct wiimote_t*,int ) ;
 int VAR_0 ;
 int VAR_1 ;







 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct wiimote_t*) ;
 int FUNC_4 (struct wiimote_t*,TYPE_10__*,struct _wpad_thresh*) ;

__attribute__((used)) static void FUNC_5(struct wiimote_t *VAR_11, WPADData *VAR_12, s32 *VAR_13, struct _wpad_thresh *VAR_14)
{
 int VAR_15;
 int VAR_16 = 0;
 VAR_12->err = VAR_9;
 VAR_12->data_present = 0;
 VAR_12->battery_level = VAR_11->battery_level;
 VAR_12->exp.type = VAR_11->exp.type;
 if(VAR_11 && FUNC_2(VAR_11,VAR_0)) {
  if(FUNC_2(VAR_11,VAR_1)) {
   switch(VAR_11->event_buf[0]) {
    case 134:
    case 133:
    case 131:
    case 129:
    case 132:
    case 128:
    case 130:
     VAR_12->btns_h = (VAR_11->btns&0xffff);
     VAR_12->data_present |= VAR_3;
     FUNC_1(VAR_14->btns, VAR_11->btns, VAR_11->lstate.btns);
   }
   switch(VAR_11->event_buf[0]) {
    case 133:
    case 131:
    case 132:
    case 130:
     VAR_12->accel = VAR_11->accel;
     VAR_12->data_present |= VAR_2;
     FUNC_0(VAR_14->acc, VAR_11->accel.x, VAR_11->lstate.accel.x);
     FUNC_0(VAR_14->acc, VAR_11->accel.y, VAR_11->lstate.accel.y);
     FUNC_0(VAR_14->acc, VAR_11->accel.z, VAR_11->lstate.accel.z);
   }
   switch(VAR_11->event_buf[0]) {


    case 131:
    case 130:
     VAR_12->ir = VAR_11->ir;
     VAR_12->data_present |= VAR_5;
     for(VAR_15=0; VAR_15<VAR_10; VAR_15++) {
      FUNC_1(VAR_14->ir, VAR_11->ir.dot[VAR_15].visible, VAR_11->lstate.ir.dot[VAR_15].visible);
      FUNC_0(VAR_14->ir, VAR_11->ir.dot[VAR_15].rx, VAR_11->lstate.ir.dot[VAR_15].rx);
      FUNC_0(VAR_14->ir, VAR_11->ir.dot[VAR_15].ry, VAR_11->lstate.ir.dot[VAR_15].ry);
     }
   }
   switch(VAR_11->event_buf[0]) {
    case 129:
    case 132:
    case 128:
    case 130:
     VAR_16 |= FUNC_4(VAR_11,VAR_12,VAR_14);
     VAR_12->data_present |= VAR_4;
   }
   VAR_12->err = VAR_6;
   if(VAR_16) {
    *VAR_13 = 0;
    FUNC_3(VAR_11);
   }
  } else
   VAR_12->err = VAR_7;
 } else
  VAR_12->err = VAR_8;
}
