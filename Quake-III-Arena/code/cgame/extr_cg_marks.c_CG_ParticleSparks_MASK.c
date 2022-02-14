
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void** vec3_t ;
struct TYPE_8__ {float alpha; double height; double width; double endheight; double endwidth; float* org; int* vel; int* accel; int type; int pshader; scalar_t__ alphavel; int color; scalar_t__ startfade; scalar_t__ endtime; scalar_t__ time; struct TYPE_8__* next; } ;
typedef TYPE_2__ cparticle_t ;
struct TYPE_10__ {scalar_t__ time; } ;
struct TYPE_7__ {int tracerShader; } ;
struct TYPE_9__ {TYPE_1__ media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**,float*) ;
 TYPE_2__* VAR_2 ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_1 () ;
 TYPE_2__* VAR_5 ;

void FUNC_2 (vec3_t VAR_6, vec3_t VAR_7, int VAR_8, float VAR_9, float VAR_10, float VAR_11)
{
 cparticle_t *VAR_12;

 if (!VAR_5)
  return;
 VAR_12 = VAR_5;
 VAR_5 = VAR_12->next;
 VAR_12->next = VAR_2;
 VAR_2 = VAR_12;
 VAR_12->time = VAR_3.time;

 VAR_12->endtime = VAR_3.time + VAR_8;
 VAR_12->startfade = VAR_3.time + VAR_8/2;

 VAR_12->color = VAR_0;
 VAR_12->alpha = 0.4f;
 VAR_12->alphavel = 0;

 VAR_12->height = 0.5;
 VAR_12->width = 0.5;
 VAR_12->endheight = 0.5;
 VAR_12->endwidth = 0.5;

 VAR_12->pshader = VAR_4.media.tracerShader;

 VAR_12->type = VAR_1;

 FUNC_0(VAR_6, VAR_12->org);

 VAR_12->org[0] += (FUNC_1() * VAR_9);
 VAR_12->org[1] += (FUNC_1() * VAR_10);

 VAR_12->vel[0] = VAR_7[0];
 VAR_12->vel[1] = VAR_7[1];
 VAR_12->vel[2] = VAR_7[2];

 VAR_12->accel[0] = VAR_12->accel[1] = VAR_12->accel[2] = 0;

 VAR_12->vel[0] += (FUNC_1() * 4);
 VAR_12->vel[1] += (FUNC_1() * 4);
 VAR_12->vel[2] += (20 + (FUNC_1() * 10)) * VAR_11;

 VAR_12->accel[0] = FUNC_1 () * 4;
 VAR_12->accel[1] = FUNC_1 () * 4;

}
