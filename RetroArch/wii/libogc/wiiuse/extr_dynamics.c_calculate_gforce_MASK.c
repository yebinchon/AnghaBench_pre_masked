
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vec3w_t {scalar_t__ z; scalar_t__ y; scalar_t__ x; } ;
struct gforce_t {float x; float y; float z; } ;
struct TYPE_4__ {scalar_t__ z; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_3__ {scalar_t__ z; scalar_t__ y; scalar_t__ x; } ;
struct accel_t {TYPE_2__ cal_zero; TYPE_1__ cal_g; } ;



void FUNC_0(struct accel_t* VAR_0, struct vec3w_t* VAR_1, struct gforce_t* VAR_2) {
 float VAR_3, VAR_4, VAR_5;


 VAR_3 = (float)VAR_0->cal_g.x;
 VAR_4 = (float)VAR_0->cal_g.y;
 VAR_5 = (float)VAR_0->cal_g.z;


 VAR_2->x = ((float)VAR_1->x - (float)VAR_0->cal_zero.x) / VAR_3;
 VAR_2->y = ((float)VAR_1->y - (float)VAR_0->cal_zero.y) / VAR_4;
 VAR_2->z = ((float)VAR_1->z - (float)VAR_0->cal_zero.z) / VAR_5;
}
