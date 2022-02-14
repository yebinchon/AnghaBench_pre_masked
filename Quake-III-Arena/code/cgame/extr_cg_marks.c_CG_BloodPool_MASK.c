
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_7__ {int endpos; } ;
typedef TYPE_1__ trace_t ;
typedef scalar_t__ qhandle_t ;
typedef int qboolean ;
typedef int localEntity_t ;
struct TYPE_8__ {double alpha; int roll; int width; int height; int endheight; int endwidth; int color; int rotate; int accel; scalar_t__* vel; int org; int type; scalar_t__ pshader; scalar_t__ alphavel; scalar_t__ endtime; scalar_t__ startfade; scalar_t__ time; struct TYPE_8__* next; } ;
typedef TYPE_2__ cparticle_t ;
struct TYPE_9__ {scalar_t__ time; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__* VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 double FUNC_5 () ;

void FUNC_6 (localEntity_t *VAR_6, qhandle_t VAR_7, trace_t *VAR_8)
{
 cparticle_t *VAR_9;
 qboolean VAR_10;
 vec3_t VAR_11;
 float VAR_12;

 if (!VAR_7)
  FUNC_0 ("CG_BloodPool pshader == ZERO!\n");

 if (!VAR_4)
  return;

 FUNC_3 (VAR_8->endpos, VAR_11);
 VAR_10 = FUNC_1 (VAR_11);

 if (!VAR_10)
  return;

 VAR_9 = VAR_4;
 VAR_4 = VAR_9->next;
 VAR_9->next = VAR_2;
 VAR_2 = VAR_9;
 VAR_9->time = VAR_3.time;

 VAR_9->endtime = VAR_3.time + 3000;
 VAR_9->startfade = VAR_9->endtime;

 VAR_9->alpha = 1.0;
 VAR_9->alphavel = 0;
 VAR_9->roll = 0;

 VAR_9->pshader = VAR_7;

 VAR_12 = 0.4 + FUNC_5()*0.6;

 VAR_9->width = 8*VAR_12;
 VAR_9->height = 8*VAR_12;

 VAR_9->endheight = 16*VAR_12;
 VAR_9->endwidth = 16*VAR_12;

 VAR_9->type = VAR_1;

 FUNC_3(VAR_11, VAR_9->org );

 VAR_9->vel[0] = 0;
 VAR_9->vel[1] = 0;
 VAR_9->vel[2] = 0;
 FUNC_2( VAR_9->accel );

 VAR_9->rotate = VAR_5;

 VAR_9->roll = FUNC_4()%179;

 VAR_9->alpha = 0.75;

 VAR_9->color = VAR_0;
}
