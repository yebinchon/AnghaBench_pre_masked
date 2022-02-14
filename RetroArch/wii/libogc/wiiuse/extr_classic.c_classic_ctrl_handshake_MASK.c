
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uword ;
typedef int ubyte ;
struct TYPE_10__ {int type; } ;
struct wiimote_t {int timeout; TYPE_5__ exp; int event; } ;
struct TYPE_8__ {int x; int y; } ;
struct TYPE_7__ {int x; int y; } ;
struct TYPE_6__ {int x; int y; } ;
struct TYPE_9__ {TYPE_3__ center; TYPE_2__ min; TYPE_1__ max; } ;
struct classic_ctrl_t {int type; TYPE_4__ rjs; TYPE_4__ ljs; scalar_t__ btns_released; scalar_t__ btns_held; scalar_t__ btns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct wiimote_t*,int*,int ,int ,int ) ;

int FUNC_2(struct wiimote_t* VAR_6, struct classic_ctrl_t* VAR_7, ubyte* VAR_8, uword VAR_9) {

 int VAR_10 = 0;

 VAR_7->btns = 0;
 VAR_7->btns_held = 0;
 VAR_7->btns_released = 0;
 if (VAR_9 > 223 && VAR_8[223] == 0x20) {
  VAR_7->ljs.max.x = VAR_7->ljs.max.y = 0xFF;
  VAR_7->ljs.min.x = VAR_7->ljs.min.y = 0;
  VAR_7->ljs.center.x = VAR_7->ljs.center.y = 0x80;

  VAR_7->rjs = VAR_7->ljs;

  VAR_7->type = 2;
 }
 else {
  if (VAR_8[VAR_10] == 0xFF) {
   if (VAR_8[VAR_10 + 16] == 0xFF) {

    FUNC_0("Classic controller handshake appears invalid, trying again.");
    FUNC_1(VAR_6, VAR_8, VAR_4, VAR_1, VAR_5);
   } else
    VAR_10 += 16;
  }

  if (VAR_9 > 218 && VAR_8[218])
   VAR_7->type = 1;
  else
   VAR_7->type = 0;


  VAR_7->ljs.max.x = VAR_8[0 + VAR_10] / 4 == 0 ? 64 : VAR_8[0 + VAR_10] / 4;
  VAR_7->ljs.min.x = VAR_8[1 + VAR_10] / 4;
  VAR_7->ljs.center.x = VAR_8[2 + VAR_10] / 4 == 0 ? 32 : VAR_8[2 + VAR_10] / 4;
  VAR_7->ljs.max.y = VAR_8[3 + VAR_10] / 4 == 0 ? 64 : VAR_8[3 + VAR_10] / 4;
  VAR_7->ljs.min.y = VAR_8[4 + VAR_10] / 4;
  VAR_7->ljs.center.y = VAR_8[5 + VAR_10] / 4 == 0 ? 32 : VAR_8[5 + VAR_10] / 4;

  VAR_7->rjs.max.x = VAR_8[6 + VAR_10] / 8 == 0 ? 32 : VAR_8[6 + VAR_10] / 8;
  VAR_7->rjs.min.x = VAR_8[7 + VAR_10] / 8;
  VAR_7->rjs.center.x = VAR_8[8 + VAR_10] / 8 == 0 ? 16 : VAR_8[8 + VAR_10] / 8;
  VAR_7->rjs.max.y = VAR_8[9 + VAR_10] / 8 == 0 ? 32 : VAR_8[9 + VAR_10] / 8;
  VAR_7->rjs.min.y = VAR_8[10 + VAR_10] / 8;
  VAR_7->rjs.center.y = VAR_8[11 + VAR_10] / 8 == 0 ? 16 : VAR_8[11 + VAR_10] / 8;
 }

 VAR_6->event = VAR_3;
 VAR_6->exp.type = VAR_0;





 return 1;
}
