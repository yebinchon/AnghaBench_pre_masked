
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ qhandle_t ;
typedef scalar_t__ qboolean ;
struct TYPE_9__ {float alpha; int height; int width; int* vel; int* accel; int * org; int type; scalar_t__ pshader; scalar_t__ startfade; scalar_t__ endtime; int end; int start; scalar_t__ alphavel; scalar_t__ color; scalar_t__ time; struct TYPE_9__* next; } ;
typedef TYPE_2__ cparticle_t ;
struct TYPE_8__ {int* angles; int origin; scalar_t__ time2; scalar_t__ time; int * origin2; } ;
struct TYPE_10__ {TYPE_1__ currentState; } ;
typedef TYPE_3__ centity_t ;
struct TYPE_11__ {scalar_t__ time; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 TYPE_2__* VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_2 () ;
 TYPE_2__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 () ;

void FUNC_4 (qhandle_t VAR_5, centity_t *VAR_6)
{
 cparticle_t *VAR_7;
 qboolean VAR_8 = VAR_4;

 if (!VAR_5)
  FUNC_0 ("CG_ParticleSnowFlurry pshader == ZERO!\n");

 if (!VAR_3)
  return;
 VAR_7 = VAR_3;
 VAR_3 = VAR_7->next;
 VAR_7->next = VAR_1;
 VAR_1 = VAR_7;
 VAR_7->time = VAR_2.time;
 VAR_7->color = 0;
 VAR_7->alpha = 0.90f;
 VAR_7->alphavel = 0;

 VAR_7->start = VAR_6->currentState.origin2[0];
 VAR_7->end = VAR_6->currentState.origin2[1];

 VAR_7->endtime = VAR_2.time + VAR_6->currentState.time;
 VAR_7->startfade = VAR_2.time + VAR_6->currentState.time2;

 VAR_7->pshader = VAR_5;

 if (FUNC_3()%100 > 90)
 {
  VAR_7->height = 32;
  VAR_7->width = 32;
  VAR_7->alpha = 0.10f;
 }
 else
 {
  VAR_7->height = 1;
  VAR_7->width = 1;
 }

 VAR_7->vel[2] = -20;

 VAR_7->type = VAR_0;

 if (VAR_8)
  VAR_7->vel[2] = -10;

 FUNC_1(VAR_6->currentState.origin, VAR_7->org);

 VAR_7->org[0] = VAR_7->org[0];
 VAR_7->org[1] = VAR_7->org[1];
 VAR_7->org[2] = VAR_7->org[2];

 VAR_7->vel[0] = VAR_7->vel[1] = 0;

 VAR_7->accel[0] = VAR_7->accel[1] = VAR_7->accel[2] = 0;

 VAR_7->vel[0] += VAR_6->currentState.angles[0] * 32 + (FUNC_2() * 16);
 VAR_7->vel[1] += VAR_6->currentState.angles[1] * 32 + (FUNC_2() * 16);
 VAR_7->vel[2] += VAR_6->currentState.angles[2];

 if (VAR_8)
 {
  VAR_7->accel[0] = FUNC_2 () * 16;
  VAR_7->accel[1] = FUNC_2 () * 16;
 }

}
