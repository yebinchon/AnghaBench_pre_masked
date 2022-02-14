
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_5__ {double alpha; int roll; int shaderAnim; int width; int height; int endheight; int endwidth; int accel; int vel; int org; int type; scalar_t__ endtime; scalar_t__ alphavel; scalar_t__ time; struct TYPE_5__* next; } ;
typedef TYPE_1__ cparticle_t ;
struct TYPE_6__ {scalar_t__ time; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__* VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_4 () ;
 TYPE_1__* VAR_3 ;
 scalar_t__* VAR_4 ;
 int* VAR_5 ;

void FUNC_5 (char *VAR_6, vec3_t VAR_7, vec3_t VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 cparticle_t *VAR_12;
 int VAR_13;

 if (VAR_6 < (char *)10)
  FUNC_0( "CG_ParticleExplosion: animStr is probably an index rather than a string" );


 for (VAR_13=0; VAR_4[VAR_13]; VAR_13++) {
  if (!FUNC_1( VAR_6, VAR_4[VAR_13] ))
   break;
 }
 if (!VAR_4[VAR_13]) {
  FUNC_0("CG_ParticleExplosion: unknown animation string: %s\n", VAR_6);
  return;
 }

 if (!VAR_3)
  return;
 VAR_12 = VAR_3;
 VAR_3 = VAR_12->next;
 VAR_12->next = VAR_1;
 VAR_1 = VAR_12;
 VAR_12->time = VAR_2.time;
 VAR_12->alpha = 0.5;
 VAR_12->alphavel = 0;

 if (VAR_9 < 0) {
  VAR_9 *= -1;
  VAR_12->roll = 0;
 } else {
  VAR_12->roll = FUNC_4()*179;
 }

 VAR_12->shaderAnim = VAR_13;

 VAR_12->width = VAR_10;
 VAR_12->height = VAR_10*VAR_5[VAR_13];

 VAR_12->endheight = VAR_11;
 VAR_12->endwidth = VAR_11*VAR_5[VAR_13];

 VAR_12->endtime = VAR_2.time + VAR_9;

 VAR_12->type = VAR_0;

 FUNC_3( VAR_7, VAR_12->org );
 FUNC_3( VAR_8, VAR_12->vel );
 FUNC_2( VAR_12->accel );

}
