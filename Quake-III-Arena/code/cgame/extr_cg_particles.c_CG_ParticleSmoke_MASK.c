
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ qhandle_t ;
struct TYPE_9__ {double alpha; int height; int width; int endheight; int endwidth; int* vel; int roll; scalar_t__* accel; int org; int type; int rotate; scalar_t__ pshader; int end; int start; scalar_t__ alphavel; scalar_t__ color; scalar_t__ startfade; scalar_t__ endtime; scalar_t__ time; struct TYPE_9__* next; } ;
typedef TYPE_2__ cparticle_t ;
struct TYPE_8__ {int frame; int * origin; int * origin2; scalar_t__ time2; scalar_t__ time; } ;
struct TYPE_10__ {TYPE_1__ currentState; } ;
typedef TYPE_3__ centity_t ;
struct TYPE_11__ {scalar_t__ time; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 TYPE_2__* VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_2 () ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;

void FUNC_3 (qhandle_t VAR_5, centity_t *VAR_6)
{



 cparticle_t *VAR_7;

 if (!VAR_5)
  FUNC_0 ("CG_ParticleSmoke == ZERO!\n");

 if (!VAR_3)
  return;
 VAR_7 = VAR_3;
 VAR_3 = VAR_7->next;
 VAR_7->next = VAR_1;
 VAR_1 = VAR_7;
 VAR_7->time = VAR_2.time;

 VAR_7->endtime = VAR_2.time + VAR_6->currentState.time;
 VAR_7->startfade = VAR_2.time + VAR_6->currentState.time2;

 VAR_7->color = 0;
 VAR_7->alpha = 1.0;
 VAR_7->alphavel = 0;
 VAR_7->start = VAR_6->currentState.origin[2];
 VAR_7->end = VAR_6->currentState.origin2[2];
 VAR_7->pshader = VAR_5;
 VAR_7->rotate = VAR_4;
 VAR_7->height = 8;
 VAR_7->width = 8;
 VAR_7->endheight = 32;
 VAR_7->endwidth = 32;
 VAR_7->type = VAR_0;

 FUNC_1(VAR_6->currentState.origin, VAR_7->org);

 VAR_7->vel[0] = VAR_7->vel[1] = 0;
 VAR_7->accel[0] = VAR_7->accel[1] = VAR_7->accel[2] = 0;

 VAR_7->vel[2] = 5;

 if (VAR_6->currentState.frame == 1)
  VAR_7->vel[2] *= -1;

 VAR_7->roll = 8 + (FUNC_2() * 4);
}
