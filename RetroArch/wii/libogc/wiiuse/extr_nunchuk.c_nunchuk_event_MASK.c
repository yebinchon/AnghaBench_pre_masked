
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ubyte ;
struct TYPE_12__ {int x; int y; int z; } ;
struct TYPE_11__ {int x; int y; } ;
struct TYPE_10__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_9__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_8__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_13__ {TYPE_4__ pos; TYPE_3__ max; TYPE_2__ min; TYPE_1__ center; } ;
struct nunchuk_t {int gforce; TYPE_5__ accel; int accel_calib; int orient; TYPE_7__ js; } ;


 int FUNC_0 (struct nunchuk_t*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_7__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,TYPE_5__*,int *) ;
 int FUNC_3 (int *,TYPE_5__*,int *,int ) ;
 int FUNC_4 (struct nunchuk_t*,int) ;

void FUNC_5(struct nunchuk_t* VAR_1, ubyte* VAR_2) {
 FUNC_4(VAR_1, VAR_2[5]);

 VAR_1->js.pos.x = VAR_2[0];
 VAR_1->js.pos.y = VAR_2[1];


 if (VAR_1->js.center.x) {
  if (VAR_1->js.min.x > VAR_1->js.pos.x) VAR_1->js.min.x = VAR_1->js.pos.x;
  if (VAR_1->js.max.x < VAR_1->js.pos.x) VAR_1->js.max.x = VAR_1->js.pos.x;
 }
 if (VAR_1->js.center.y) {
  if (VAR_1->js.min.y > VAR_1->js.pos.y) VAR_1->js.min.y = VAR_1->js.pos.y;
  if (VAR_1->js.max.y < VAR_1->js.pos.y) VAR_1->js.max.y = VAR_1->js.pos.y;
 }



 FUNC_1(&VAR_1->js, VAR_1->js.pos.x, VAR_1->js.pos.y);


 VAR_1->accel.x = (VAR_2[2]<<2) + ((VAR_2[5]>>2)&3);
 VAR_1->accel.y = (VAR_2[3]<<2) + ((VAR_2[5]>>4)&3);
 VAR_1->accel.z = (VAR_2[4]<<2) + ((VAR_2[5]>>6)&3);

 FUNC_3(&VAR_1->accel_calib, &VAR_1->accel, &VAR_1->orient, FUNC_0(VAR_1, VAR_0));
 FUNC_2(&VAR_1->accel_calib, &VAR_1->accel, &VAR_1->gforce);

}
