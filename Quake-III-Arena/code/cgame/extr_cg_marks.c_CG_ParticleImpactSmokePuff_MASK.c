
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
typedef scalar_t__ qhandle_t ;
struct TYPE_5__ {double alpha; int roll; int width; int height; int endheight; int endwidth; int rotate; int accel; int vel; int org; int type; scalar_t__ endtime; scalar_t__ startfade; scalar_t__ pshader; scalar_t__ alphavel; scalar_t__ time; struct TYPE_5__* next; } ;
typedef TYPE_1__ cparticle_t ;
struct TYPE_6__ {scalar_t__ time; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 TYPE_1__* VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_3 () ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;

void FUNC_5 (qhandle_t VAR_5, vec3_t VAR_6)
{
 cparticle_t *VAR_7;

 if (!VAR_5)
  FUNC_0 ("CG_ParticleImpactSmokePuff pshader == ZERO!\n");

 if (!VAR_3)
  return;
 VAR_7 = VAR_3;
 VAR_3 = VAR_7->next;
 VAR_7->next = VAR_1;
 VAR_1 = VAR_7;
 VAR_7->time = VAR_2.time;
 VAR_7->alpha = 0.25;
 VAR_7->alphavel = 0;
 VAR_7->roll = FUNC_3()*179;

 VAR_7->pshader = VAR_5;

 VAR_7->endtime = VAR_2.time + 1000;
 VAR_7->startfade = VAR_2.time + 100;

 VAR_7->width = FUNC_4()%4 + 8;
 VAR_7->height = FUNC_4()%4 + 8;

 VAR_7->endheight = VAR_7->height *2;
 VAR_7->endwidth = VAR_7->width * 2;

 VAR_7->endtime = VAR_2.time + 500;

 VAR_7->type = VAR_0;

 FUNC_1( VAR_6, VAR_7->org );
 FUNC_2(VAR_7->vel, 0, 0, 20);
 FUNC_2(VAR_7->accel, 0, 0, 20);

 VAR_7->rotate = VAR_4;
}
