
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_8__ {float forwardmove; float rightmove; scalar_t__ upmove; } ;
struct TYPE_7__ {TYPE_1__* ps; TYPE_4__ cmd; } ;
struct TYPE_6__ {float frametime; float* forward; float* right; } ;
struct TYPE_5__ {float* velocity; int origin; int viewheight; } ;


 int VAR_0 ;
 int FUNC_0 (float*,float,int ) ;
 float FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (float*,float*) ;
 float FUNC_3 (float*) ;
 int FUNC_4 (int ,float,float*,int ) ;
 float FUNC_5 (float*) ;
 int FUNC_6 (float*,float,float*) ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 double VAR_3 ;
 float VAR_4 ;
 TYPE_2__ VAR_5 ;
 float* VAR_6 ;

__attribute__((used)) static void FUNC_7( void ) {
 float VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;
 vec3_t VAR_13;
 float VAR_14, VAR_15;
 vec3_t VAR_16;
 float VAR_17;
 float VAR_18;

 VAR_1->ps->viewheight = VAR_0;



 VAR_7 = FUNC_3 (VAR_1->ps->velocity);
 if (VAR_7 < 1)
 {
  FUNC_2 (VAR_6, VAR_1->ps->velocity);
 }
 else
 {
  VAR_8 = 0;

  VAR_9 = VAR_3*1.5;
  VAR_10 = VAR_7 < VAR_4 ? VAR_4 : VAR_7;
  VAR_8 += VAR_10*VAR_9*VAR_5.frametime;


  VAR_11 = VAR_7 - VAR_8;
  if (VAR_11 < 0)
   VAR_11 = 0;
  VAR_11 /= VAR_7;

  FUNC_6 (VAR_1->ps->velocity, VAR_11, VAR_1->ps->velocity);
 }


 VAR_18 = FUNC_1( &VAR_1->cmd );

 VAR_14 = VAR_1->cmd.forwardmove;
 VAR_15 = VAR_1->cmd.rightmove;

 for (VAR_12=0 ; VAR_12<3 ; VAR_12++)
  VAR_13[VAR_12] = VAR_5.forward[VAR_12]*VAR_14 + VAR_5.right[VAR_12]*VAR_15;
 VAR_13[2] += VAR_1->cmd.upmove;

 FUNC_2 (VAR_13, VAR_16);
 VAR_17 = FUNC_5(VAR_16);
 VAR_17 *= VAR_18;

 FUNC_0( VAR_16, VAR_17, VAR_2 );


 FUNC_4 (VAR_1->ps->origin, VAR_5.frametime, VAR_1->ps->velocity, VAR_1->ps->origin);
}
