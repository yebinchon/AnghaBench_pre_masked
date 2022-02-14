
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {float x; float y; } ;
struct TYPE_5__ {float x; float y; } ;
struct TYPE_4__ {float x; float y; } ;
struct joystick_t {int mag; int ang; TYPE_3__ min; TYPE_2__ center; TYPE_1__ max; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (float,float) ;
 int FUNC_2 (float,float) ;

void FUNC_3(struct joystick_t* VAR_0, float VAR_1, float VAR_2) {
 float VAR_3, VAR_4;
 if (VAR_1 == VAR_0->center.x)
  VAR_3 = 0;
 else if (VAR_1 >= VAR_0->center.x)
  VAR_3 = ((float)(VAR_1 - VAR_0->center.x) / (float)(VAR_0->max.x - VAR_0->center.x));
 else
  VAR_3 = ((float)(VAR_1 - VAR_0->min.x) / (float)(VAR_0->center.x - VAR_0->min.x)) - 1.0f;

 if (VAR_2 == VAR_0->center.y)
  VAR_4 = 0;
 else if (VAR_2 >= VAR_0->center.y)
  VAR_4 = ((float)(VAR_2 - VAR_0->center.y) / (float)(VAR_0->max.y - VAR_0->center.y));
 else
  VAR_4 = ((float)(VAR_2 - VAR_0->min.y) / (float)(VAR_0->center.y - VAR_0->min.y)) - 1.0f;


 VAR_0->ang = FUNC_0(FUNC_1(VAR_3, VAR_4));
 VAR_0->mag = FUNC_2(VAR_3, VAR_4);
}
