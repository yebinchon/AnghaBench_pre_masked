
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void** vec3_t ;
typedef scalar_t__ qhandle_t ;
struct TYPE_5__ {float alpha; int start; int end; float height; float width; int* vel; int snum; int link; scalar_t__* accel; scalar_t__* org; int type; scalar_t__ pshader; scalar_t__ alphavel; scalar_t__ color; int time; struct TYPE_5__* next; } ;
typedef TYPE_1__ cparticle_t ;
struct TYPE_6__ {int time; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void**,scalar_t__*) ;
 TYPE_1__* VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_2 () ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

void FUNC_3 (qhandle_t VAR_6, vec3_t VAR_7, vec3_t VAR_8, int VAR_9, float VAR_10, int VAR_11)
{
 cparticle_t *VAR_12;
 float VAR_13;

 if (!VAR_6)
  FUNC_0 ("CG_ParticleSnow pshader == ZERO!\n");

 if (!VAR_4)
  return;
 VAR_12 = VAR_4;
 VAR_4 = VAR_12->next;
 VAR_12->next = VAR_2;
 VAR_2 = VAR_12;
 VAR_12->time = VAR_3.time;
 VAR_12->color = 0;
 VAR_12->alpha = 0.40f;
 VAR_12->alphavel = 0;
 VAR_12->start = VAR_7[2];
 VAR_12->end = VAR_8[2];
 VAR_12->pshader = VAR_6;

 VAR_13 = 1 + (FUNC_2() * 0.5);

 VAR_12->height = VAR_13;
 VAR_12->width = VAR_13;

 VAR_12->vel[2] = 50 + ( FUNC_2() * 10 );

 if (VAR_9)
 {
  VAR_12->type = VAR_1;
  VAR_12->vel[2] = 50 * 1.3;
 }
 else
 {
  VAR_12->type = VAR_0;
 }

 FUNC_1(VAR_7, VAR_12->org);

 VAR_12->org[0] = VAR_12->org[0] + ( FUNC_2() * VAR_10);
 VAR_12->org[1] = VAR_12->org[1] + ( FUNC_2() * VAR_10);
 VAR_12->org[2] = VAR_12->org[2] + ( FUNC_2() * (VAR_12->start - VAR_12->end));

 VAR_12->vel[0] = VAR_12->vel[1] = 0;

 VAR_12->accel[0] = VAR_12->accel[1] = VAR_12->accel[2] = 0;

 if (VAR_9)
 {
  VAR_12->vel[0] = FUNC_2() * 4;
  VAR_12->vel[1] = FUNC_2() * 4;
 }


 VAR_12->snum = VAR_11;
 VAR_12->link = VAR_5;

}
