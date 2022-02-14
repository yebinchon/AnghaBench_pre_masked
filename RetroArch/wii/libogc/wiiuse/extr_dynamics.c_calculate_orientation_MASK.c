
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vec3w_t {scalar_t__ y; scalar_t__ x; scalar_t__ z; } ;
struct orient_t {float yaw; float roll; float a_roll; float pitch; float a_pitch; } ;
struct TYPE_4__ {int x; int y; scalar_t__ z; } ;
struct TYPE_3__ {scalar_t__ y; scalar_t__ x; scalar_t__ z; } ;
struct accel_t {TYPE_2__ cal_g; TYPE_1__ cal_zero; } ;


 float FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct accel_t*,struct orient_t*,int ) ;
 int FUNC_3 (float,float) ;
 scalar_t__ FUNC_4 (float) ;

void FUNC_5(struct accel_t* VAR_2, struct vec3w_t* VAR_3, struct orient_t* VAR_4, int VAR_5) {
 float VAR_6, VAR_7, VAR_8;
 float VAR_9, VAR_10, VAR_11;
 VAR_4->yaw = 0.0f;


 VAR_6 = (float)VAR_2->cal_g.x;
 VAR_7 = (float)VAR_2->cal_g.y;
 VAR_8 = (float)VAR_2->cal_g.z;


 VAR_9 = ((float)VAR_3->x - (float)VAR_2->cal_zero.x) / VAR_6;
 VAR_10 = ((float)VAR_3->y - (float)VAR_2->cal_zero.y) / VAR_7;
 VAR_11 = ((float)VAR_3->z - (float)VAR_2->cal_zero.z) / VAR_8;


 if (VAR_9 < -1.0f) VAR_9 = -1.0f;
 else if (VAR_9 > 1.0f) VAR_9 = 1.0f;
 if (VAR_10 < -1.0f) VAR_10 = -1.0f;
 else if (VAR_10 > 1.0f) VAR_10 = 1.0f;
 if (VAR_11 < -1.0f) VAR_11 = -1.0f;
 else if (VAR_11 > 1.0f) VAR_11 = 1.0f;


 if (FUNC_1(VAR_3->x - VAR_2->cal_zero.x) <= (VAR_2->cal_g.x+10)) {

  VAR_9 = FUNC_0(FUNC_3(VAR_9, VAR_11));
  if(FUNC_4(VAR_9)) {
   VAR_4->roll = VAR_9;
   VAR_4->a_roll = VAR_9;
  }
 }

 if (FUNC_1(VAR_3->y - VAR_2->cal_zero.y) <= (VAR_2->cal_g.y+10)) {

  VAR_10 = FUNC_0(FUNC_3(VAR_10, VAR_11));
  if(FUNC_4(VAR_10)) {
   VAR_4->pitch = VAR_10;
   VAR_4->a_pitch = VAR_10;
  }
 }


 if (VAR_5) {
  FUNC_2(VAR_2, VAR_4, VAR_1);
  FUNC_2(VAR_2, VAR_4, VAR_0);
 }
}
