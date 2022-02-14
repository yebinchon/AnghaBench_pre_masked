
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ qhandle_t ;
struct TYPE_9__ {int time; int endtime; int startfade; double alpha; int roll; int width; int height; int endheight; int endwidth; double snum; double* org; int rotate; int accel; scalar_t__* vel; int type; scalar_t__ pshader; scalar_t__ alphavel; struct TYPE_9__* next; } ;
typedef TYPE_2__ cparticle_t ;
struct TYPE_8__ {int* angles2; int origin; } ;
struct TYPE_10__ {TYPE_1__ currentState; } ;
typedef TYPE_3__ centity_t ;
struct TYPE_11__ {int time; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,double*) ;
 TYPE_2__* VAR_1 ;
 TYPE_5__ VAR_2 ;
 double FUNC_3 () ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;

void FUNC_5 (qhandle_t VAR_5, centity_t *VAR_6)
{
 cparticle_t *VAR_7;

   if (!VAR_5)
  FUNC_0 ("CG_Particle_OilSlick == ZERO!\n");

 if (!VAR_3)
  return;
 VAR_7 = VAR_3;
 VAR_3 = VAR_7->next;
 VAR_7->next = VAR_1;
 VAR_1 = VAR_7;
 VAR_7->time = VAR_2.time;

 if (VAR_6->currentState.angles2[2])
  VAR_7->endtime = VAR_2.time + VAR_6->currentState.angles2[2];
 else
  VAR_7->endtime = VAR_2.time + 60000;

 VAR_7->startfade = VAR_7->endtime;

 VAR_7->alpha = 1.0;
 VAR_7->alphavel = 0;
 VAR_7->roll = 0;

 VAR_7->pshader = VAR_5;

 if (VAR_6->currentState.angles2[0] || VAR_6->currentState.angles2[1])
 {
  VAR_7->width = VAR_6->currentState.angles2[0];
  VAR_7->height = VAR_6->currentState.angles2[0];

  VAR_7->endheight = VAR_6->currentState.angles2[1];
  VAR_7->endwidth = VAR_6->currentState.angles2[1];
 }
 else
 {
  VAR_7->width = 8;
  VAR_7->height = 8;

  VAR_7->endheight = 16;
  VAR_7->endwidth = 16;
 }

 VAR_7->type = VAR_0;

 VAR_7->snum = 1.0;

 FUNC_2(VAR_6->currentState.origin, VAR_7->org );

 VAR_7->org[2]+= 0.55 + (FUNC_3() * 0.5);

 VAR_7->vel[0] = 0;
 VAR_7->vel[1] = 0;
 VAR_7->vel[2] = 0;
 FUNC_1( VAR_7->accel );

 VAR_7->rotate = VAR_4;

 VAR_7->roll = FUNC_4()%179;

 VAR_7->alpha = 0.75;

}
