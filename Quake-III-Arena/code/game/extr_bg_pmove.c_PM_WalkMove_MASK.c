
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_11__ {float forwardmove; float rightmove; } ;
typedef TYPE_4__ usercmd_t ;
struct TYPE_13__ {int waterlevel; TYPE_3__* ps; TYPE_4__ cmd; } ;
struct TYPE_8__ {int normal; } ;
struct TYPE_9__ {int surfaceFlags; TYPE_1__ plane; } ;
struct TYPE_12__ {float* forward; float* right; int frametime; TYPE_2__ groundTrace; } ;
struct TYPE_10__ {int pm_flags; float speed; float* velocity; int gravity; } ;


 scalar_t__ FUNC_0 (float*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (float*,float,float) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (float*,int ,float*,int ) ;
 float FUNC_5 (TYPE_4__*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int VAR_3 ;
 int FUNC_10 (float*,float*) ;
 float FUNC_11 (float*) ;
 float FUNC_12 (float*) ;
 int FUNC_13 (float*,float,float*) ;
 TYPE_6__* VAR_4 ;
 float VAR_5 ;
 float VAR_6 ;
 float VAR_7 ;
 double VAR_8 ;
 TYPE_5__ VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_14( void ) {
 int VAR_11;
 vec3_t VAR_12;
 float VAR_13, VAR_14;
 vec3_t VAR_15;
 float VAR_16;
 float VAR_17;
 usercmd_t VAR_18;
 float VAR_19;
 float VAR_20;

 if ( VAR_4->waterlevel > 2 && FUNC_0( VAR_9.forward, VAR_9.groundTrace.plane.normal ) > 0 ) {

  FUNC_9();
  return;
 }


 if ( FUNC_3 () ) {

  if ( VAR_4->waterlevel > 1 ) {
   FUNC_9();
  } else {
   FUNC_2();
  }
  return;
 }

 FUNC_6 ();

 VAR_13 = VAR_4->cmd.forwardmove;
 VAR_14 = VAR_4->cmd.rightmove;

 VAR_18 = VAR_4->cmd;
 VAR_17 = FUNC_5( &VAR_18 );


 FUNC_7();


 VAR_9.forward[2] = 0;
 VAR_9.right[2] = 0;


 FUNC_4 (VAR_9.forward, VAR_9.groundTrace.plane.normal, VAR_9.forward, VAR_0 );
 FUNC_4 (VAR_9.right, VAR_9.groundTrace.plane.normal, VAR_9.right, VAR_0 );

 FUNC_12 (VAR_9.forward);
 FUNC_12 (VAR_9.right);

 for ( VAR_11 = 0 ; VAR_11 < 3 ; VAR_11++ ) {
  VAR_12[VAR_11] = VAR_9.forward[VAR_11]*VAR_13 + VAR_9.right[VAR_11]*VAR_14;
 }



 FUNC_10 (VAR_12, VAR_15);
 VAR_16 = FUNC_12(VAR_15);
 VAR_16 *= VAR_17;


 if ( VAR_4->ps->pm_flags & VAR_1 ) {
  if ( VAR_16 > VAR_4->ps->speed * VAR_7 ) {
   VAR_16 = VAR_4->ps->speed * VAR_7;
  }
 }


 if ( VAR_4->waterlevel ) {
  float VAR_21;

  VAR_21 = VAR_4->waterlevel / 3.0;
  VAR_21 = 1.0 - ( 1.0 - VAR_8 ) * VAR_21;
  if ( VAR_16 > VAR_4->ps->speed * VAR_21 ) {
   VAR_16 = VAR_4->ps->speed * VAR_21;
  }
 }



 if ( ( VAR_9.groundTrace.surfaceFlags & VAR_3 ) || VAR_4->ps->pm_flags & VAR_2 ) {
  VAR_19 = VAR_6;
 } else {
  VAR_19 = VAR_5;
 }

 FUNC_1 (VAR_15, VAR_16, VAR_19);




 if ( ( VAR_9.groundTrace.surfaceFlags & VAR_3 ) || VAR_4->ps->pm_flags & VAR_2 ) {
  VAR_4->ps->velocity[2] -= VAR_4->ps->gravity * VAR_9.frametime;
 } else {


 }

 VAR_20 = FUNC_11(VAR_4->ps->velocity);


 FUNC_4 (VAR_4->ps->velocity, VAR_9.groundTrace.plane.normal,
  VAR_4->ps->velocity, VAR_0 );


 FUNC_12(VAR_4->ps->velocity);
 FUNC_13(VAR_4->ps->velocity, VAR_20, VAR_4->ps->velocity);


 if (!VAR_4->ps->velocity[0] && !VAR_4->ps->velocity[1]) {
  return;
 }

 FUNC_8( VAR_10 );



}
