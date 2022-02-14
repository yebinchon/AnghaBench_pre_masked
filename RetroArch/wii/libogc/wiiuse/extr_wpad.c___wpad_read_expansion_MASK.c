
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_51__ TYPE_9__ ;
typedef struct TYPE_50__ TYPE_8__ ;
typedef struct TYPE_49__ TYPE_7__ ;
typedef struct TYPE_48__ TYPE_6__ ;
typedef struct TYPE_47__ TYPE_5__ ;
typedef struct TYPE_46__ TYPE_4__ ;
typedef struct TYPE_45__ TYPE_3__ ;
typedef struct TYPE_44__ TYPE_2__ ;
typedef struct TYPE_43__ TYPE_25__ ;
typedef struct TYPE_42__ TYPE_24__ ;
typedef struct TYPE_41__ TYPE_23__ ;
typedef struct TYPE_40__ TYPE_22__ ;
typedef struct TYPE_39__ TYPE_21__ ;
typedef struct TYPE_38__ TYPE_20__ ;
typedef struct TYPE_37__ TYPE_1__ ;
typedef struct TYPE_36__ TYPE_19__ ;
typedef struct TYPE_35__ TYPE_18__ ;
typedef struct TYPE_34__ TYPE_17__ ;
typedef struct TYPE_33__ TYPE_16__ ;
typedef struct TYPE_32__ TYPE_15__ ;
typedef struct TYPE_31__ TYPE_14__ ;
typedef struct TYPE_30__ TYPE_13__ ;
typedef struct TYPE_29__ TYPE_12__ ;
typedef struct TYPE_28__ TYPE_11__ ;
typedef struct TYPE_27__ TYPE_10__ ;


typedef int u32 ;
struct TYPE_40__ {int rz; int ry; int rx; } ;
struct TYPE_33__ {int y; int x; } ;
struct TYPE_34__ {TYPE_16__ pos; } ;
struct TYPE_28__ {int y; int x; } ;
struct TYPE_29__ {TYPE_11__ pos; } ;
struct TYPE_35__ {TYPE_17__ rjs; TYPE_12__ ljs; int ls_raw; int rs_raw; int btns; } ;
struct TYPE_48__ {int y; int x; } ;
struct TYPE_49__ {TYPE_6__ pos; } ;
struct TYPE_44__ {int z; int y; int x; } ;
struct TYPE_50__ {TYPE_7__ js; TYPE_2__ accel; int btns; } ;
struct TYPE_41__ {TYPE_22__ mp; TYPE_18__ classic; TYPE_8__ nunchuk; } ;
struct TYPE_42__ {TYPE_23__ exp; } ;
struct TYPE_38__ {int rz; int ry; int rx; } ;
struct TYPE_30__ {int y; int x; } ;
struct TYPE_31__ {TYPE_13__ pos; } ;
struct TYPE_51__ {int y; int x; } ;
struct TYPE_27__ {TYPE_9__ pos; } ;
struct TYPE_32__ {TYPE_14__ rjs; TYPE_10__ ljs; int ls_raw; int rs_raw; int btns; } ;
struct TYPE_45__ {int y; int x; } ;
struct TYPE_46__ {TYPE_3__ pos; } ;
struct TYPE_37__ {int z; int y; int x; } ;
struct TYPE_47__ {TYPE_4__ js; TYPE_1__ accel; int btns; } ;
struct TYPE_39__ {TYPE_20__ mp; TYPE_15__ classic; TYPE_5__ nunchuk; } ;
struct wiimote_t {TYPE_24__ lstate; TYPE_21__ exp; } ;
struct _wpad_thresh {int mp; int js; int btns; int acc; } ;
struct TYPE_36__ {int type; TYPE_20__ mp; TYPE_15__ classic; TYPE_5__ nunchuk; } ;
struct TYPE_43__ {TYPE_19__ exp; } ;
typedef TYPE_25__ WPADData ;





 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static u32 FUNC_2(struct wiimote_t *VAR_0,WPADData *VAR_1, struct _wpad_thresh *VAR_2)
{
 int VAR_3 = 0;
 switch(VAR_1->exp.type) {
  case 128:
   VAR_1->exp.nunchuk = VAR_0->exp.nunchuk;
   FUNC_1(VAR_2->btns, VAR_0->exp.nunchuk.btns, VAR_0->lstate.exp.nunchuk.btns);
   FUNC_0(VAR_2->acc, VAR_0->exp.nunchuk.accel.x, VAR_0->lstate.exp.nunchuk.accel.x);
   FUNC_0(VAR_2->acc, VAR_0->exp.nunchuk.accel.y, VAR_0->lstate.exp.nunchuk.accel.y);
   FUNC_0(VAR_2->acc, VAR_0->exp.nunchuk.accel.z, VAR_0->lstate.exp.nunchuk.accel.z);
   FUNC_0(VAR_2->js, VAR_0->exp.nunchuk.js.pos.x, VAR_0->lstate.exp.nunchuk.js.pos.x);
   FUNC_0(VAR_2->js, VAR_0->exp.nunchuk.js.pos.y, VAR_0->lstate.exp.nunchuk.js.pos.y);
   break;
  case 130:
   VAR_1->exp.classic = VAR_0->exp.classic;
   FUNC_1(VAR_2->btns, VAR_0->exp.classic.btns, VAR_0->lstate.exp.classic.btns);
   FUNC_0(VAR_2->js, VAR_0->exp.classic.rs_raw, VAR_0->lstate.exp.classic.rs_raw);
   FUNC_0(VAR_2->js, VAR_0->exp.classic.ls_raw, VAR_0->lstate.exp.classic.ls_raw);
   FUNC_0(VAR_2->js, VAR_0->exp.classic.ljs.pos.x, VAR_0->lstate.exp.classic.ljs.pos.x);
   FUNC_0(VAR_2->js, VAR_0->exp.classic.ljs.pos.y, VAR_0->lstate.exp.classic.ljs.pos.y);
   FUNC_0(VAR_2->js, VAR_0->exp.classic.rjs.pos.x, VAR_0->lstate.exp.classic.rjs.pos.x);
   FUNC_0(VAR_2->js, VAR_0->exp.classic.rjs.pos.y, VAR_0->lstate.exp.classic.rjs.pos.y);
   break;
  case 129:
   VAR_1->exp.mp = VAR_0->exp.mp;
   FUNC_0(VAR_2->mp,VAR_0->exp.mp.rx,VAR_0->lstate.exp.mp.rx);
   FUNC_0(VAR_2->mp,VAR_0->exp.mp.ry,VAR_0->lstate.exp.mp.ry);
   FUNC_0(VAR_2->mp,VAR_0->exp.mp.rz,VAR_0->lstate.exp.mp.rz);
   break;
 }
 return VAR_3;
}
