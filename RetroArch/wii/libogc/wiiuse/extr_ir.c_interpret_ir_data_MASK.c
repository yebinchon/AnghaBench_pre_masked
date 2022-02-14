
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct orient_t {int yaw; } ;
struct TYPE_2__ {int angle; } ;
struct ir_t {int z; int distance; scalar_t__ error_cnt; float sx; float ax; float sy; float ay; scalar_t__ glitch_cnt; int smooth_valid; float x; float y; int valid; int * vres; int aspect; int * offset; TYPE_1__ sensorbar; int angle; scalar_t__ raw_valid; } ;


 scalar_t__ VAR_0 ;
 float VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 float FUNC_0 (float) ;
 int FUNC_1 (struct ir_t*) ;
 int FUNC_2 (struct ir_t*) ;
 int FUNC_3 (struct ir_t*,struct orient_t*) ;
 int FUNC_4 (float*,float*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (float*,float*,int ,int ,int ) ;

void FUNC_6(struct ir_t* VAR_4, struct orient_t *VAR_5) {

 float VAR_6,VAR_7;
 float VAR_8;

 FUNC_3(VAR_4, VAR_5);

 if(VAR_4->raw_valid) {
  VAR_4->angle = VAR_4->sensorbar.angle;
  VAR_4->z = VAR_3 / VAR_4->distance;
  VAR_5->yaw = FUNC_2(VAR_4);
  if(VAR_4->error_cnt >= VAR_0) {
   VAR_4->sx = VAR_4->ax;
   VAR_4->sy = VAR_4->ay;
   VAR_4->glitch_cnt = 0;
  } else {
   VAR_8 = FUNC_0(VAR_4->ax - VAR_4->sx) + FUNC_0(VAR_4->ay - VAR_4->sy);
   if(VAR_8 > VAR_1) {
    if(VAR_4->glitch_cnt > VAR_2) {
     FUNC_1(VAR_4);
     VAR_4->glitch_cnt = 0;
    } else {
     VAR_4->glitch_cnt++;
    }
   } else {
    VAR_4->glitch_cnt = 0;
    FUNC_1(VAR_4);
   }
  }
  VAR_4->smooth_valid = 1;
  VAR_4->error_cnt = 0;
 } else {
  if(VAR_4->error_cnt >= VAR_0) {
   VAR_4->smooth_valid = 0;
  } else {
   VAR_4->smooth_valid = 1;
   VAR_4->error_cnt++;
  }
 }
 if(VAR_4->smooth_valid) {
  VAR_6 = VAR_4->sx;
  VAR_7 = VAR_4->sy;
  if (FUNC_5(&VAR_6, &VAR_7, VAR_4->aspect, VAR_4->offset[0], VAR_4->offset[1])) {
   FUNC_4(&VAR_6, &VAR_7, VAR_4->aspect, VAR_4->vres[0], VAR_4->vres[1]);
   VAR_4->x = VAR_6;
   VAR_4->y = VAR_7;
   VAR_4->valid = 1;
  } else {
   VAR_4->valid = 0;
  }
 } else {
  VAR_4->valid = 0;
 }
}
