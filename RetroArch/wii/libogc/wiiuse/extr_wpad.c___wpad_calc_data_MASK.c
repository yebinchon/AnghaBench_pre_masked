
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct accel_t {int dummy; } ;
struct TYPE_8__ {int y; int x; } ;
struct TYPE_12__ {TYPE_1__ pos; } ;
struct nunchuk_t {int btns; int gforce; int accel; struct accel_t accel_calib; int orient; TYPE_5__ js; } ;
struct classic_ctrl_t {int r_shoulder; int l_shoulder; int btns; TYPE_5__ rjs; TYPE_5__ ljs; int ls_raw; int rs_raw; } ;
typedef int f32 ;
struct TYPE_9__ {int type; struct classic_ctrl_t classic; struct nunchuk_t nunchuk; } ;
struct TYPE_11__ {int glitch_cnt; int error_cnt; int angle; int z; int distance; int ay; int ax; int sy; int sx; int y; int x; int sensorbar; int state; } ;
struct TYPE_10__ {scalar_t__ err; int data_present; int btns_h; TYPE_2__ exp; int orient; TYPE_4__ ir; int gforce; int accel; } ;
typedef TYPE_3__ WPADData ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_5__*,int ,int ) ;
 int FUNC_1 (struct accel_t*,int *,int *) ;
 int FUNC_2 (struct accel_t*,int *,int *,int ) ;
 int FUNC_3 (TYPE_4__*,int *) ;

__attribute__((used)) static void FUNC_4(WPADData *VAR_4,WPADData *VAR_5,struct accel_t *VAR_6,u32 VAR_7)
{
 if(VAR_4->err!=VAR_3) return;

 VAR_4->orient = VAR_5->orient;

 VAR_4->ir.state = VAR_5->ir.state;
 VAR_4->ir.sensorbar = VAR_5->ir.sensorbar;
 VAR_4->ir.x = VAR_5->ir.x;
 VAR_4->ir.y = VAR_5->ir.y;
 VAR_4->ir.sx = VAR_5->ir.sx;
 VAR_4->ir.sy = VAR_5->ir.sy;
 VAR_4->ir.ax = VAR_5->ir.ax;
 VAR_4->ir.ay = VAR_5->ir.ay;
 VAR_4->ir.distance = VAR_5->ir.distance;
 VAR_4->ir.z = VAR_5->ir.z;
 VAR_4->ir.angle = VAR_5->ir.angle;
 VAR_4->ir.error_cnt = VAR_5->ir.error_cnt;
 VAR_4->ir.glitch_cnt = VAR_5->ir.glitch_cnt;

 if(VAR_4->data_present & VAR_0) {
  FUNC_2(VAR_6, &VAR_4->accel, &VAR_4->orient, VAR_7);
  FUNC_1(VAR_6, &VAR_4->accel, &VAR_4->gforce);
 }
 if(VAR_4->data_present & VAR_2) {
  FUNC_3(&VAR_4->ir,&VAR_4->orient);
 }
 if(VAR_4->data_present & VAR_1) {
  switch(VAR_4->exp.type) {
   case 128:
   {
    struct nunchuk_t *VAR_8 = &VAR_4->exp.nunchuk;

    VAR_8->orient = VAR_5->exp.nunchuk.orient;
    FUNC_0(&VAR_8->js,VAR_8->js.pos.x,VAR_8->js.pos.y);
    FUNC_2(&VAR_8->accel_calib,&VAR_8->accel,&VAR_8->orient,VAR_7);
    FUNC_1(&VAR_8->accel_calib,&VAR_8->accel,&VAR_8->gforce);
    VAR_4->btns_h |= (VAR_4->exp.nunchuk.btns<<16);
   }
   break;

   case 129:
   {
    struct classic_ctrl_t *VAR_9 = &VAR_4->exp.classic;

    VAR_9->r_shoulder = ((f32)VAR_9->rs_raw/0x1F);
    VAR_9->l_shoulder = ((f32)VAR_9->ls_raw/0x1F);
    FUNC_0(&VAR_9->ljs, VAR_9->ljs.pos.x, VAR_9->ljs.pos.y);
    FUNC_0(&VAR_9->rjs, VAR_9->rjs.pos.x, VAR_9->rjs.pos.y);
    VAR_4->btns_h |= (VAR_4->exp.classic.btns<<16);
   }
   break;
   default:
    break;
  }
 }
 *VAR_5 = *VAR_4;
}
