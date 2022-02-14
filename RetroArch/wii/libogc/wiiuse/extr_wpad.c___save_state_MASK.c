
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type; int mp; int classic; int nunchuk; } ;
struct TYPE_4__ {int mp; int classic; int nunchuk; } ;
struct TYPE_6__ {TYPE_1__ exp; int ir; int accel; int btns; } ;
struct wiimote_t {TYPE_2__ exp; TYPE_3__ lstate; int ir; int accel; int btns; } ;






__attribute__((used)) static void FUNC_0(struct wiimote_t* VAR_0) {

 VAR_0->lstate.btns = VAR_0->btns;
 VAR_0->lstate.accel = VAR_0->accel;


 VAR_0->lstate.ir = VAR_0->ir;


 switch (VAR_0->exp.type) {
  case 128:
   VAR_0->lstate.exp.nunchuk = VAR_0->exp.nunchuk;
   break;
  case 130:
   VAR_0->lstate.exp.classic = VAR_0->exp.classic;
   break;
  case 129:
   VAR_0->lstate.exp.mp = VAR_0->exp.mp;
   break;
 }
}
