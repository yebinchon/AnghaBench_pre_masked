
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
struct TYPE_13__ {TYPE_3__* ps; TYPE_4__ cmd; } ;
struct TYPE_8__ {int normal; } ;
struct TYPE_9__ {TYPE_1__ plane; } ;
struct TYPE_12__ {float* forward; float* right; TYPE_2__ groundTrace; scalar_t__ groundPlane; } ;
struct TYPE_10__ {int pm_flags; int velocity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float*,float,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 float FUNC_2 (TYPE_4__*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (float*,float*) ;
 float FUNC_8 (float*) ;
 TYPE_6__* VAR_2 ;
 int VAR_3 ;
 TYPE_5__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_9( void ) {
 int VAR_6;
 vec3_t VAR_7;
 float VAR_8, VAR_9;
 vec3_t VAR_10;
 float VAR_11;
 float VAR_12;
 usercmd_t VAR_13;

 FUNC_3();

 VAR_8 = VAR_2->cmd.forwardmove;
 VAR_9 = VAR_2->cmd.rightmove;

 VAR_13 = VAR_2->cmd;
 VAR_12 = FUNC_2( &VAR_13 );


 FUNC_4();


 VAR_4.forward[2] = 0;
 VAR_4.right[2] = 0;
 FUNC_8 (VAR_4.forward);
 FUNC_8 (VAR_4.right);

 for ( VAR_6 = 0 ; VAR_6 < 2 ; VAR_6++ ) {
  VAR_7[VAR_6] = VAR_4.forward[VAR_6]*VAR_8 + VAR_4.right[VAR_6]*VAR_9;
 }
 VAR_7[2] = 0;

 FUNC_7 (VAR_7, VAR_10);
 VAR_11 = FUNC_8(VAR_10);
 VAR_11 *= VAR_12;


 FUNC_0 (VAR_10, VAR_11, VAR_3);




 if ( VAR_4.groundPlane ) {
  FUNC_1 (VAR_2->ps->velocity, VAR_4.groundTrace.plane.normal,
   VAR_2->ps->velocity, VAR_0 );
 }
 FUNC_6 ( VAR_5 );
}
