
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_6__ {float forwardmove; float rightmove; float upmove; } ;
struct TYPE_5__ {TYPE_3__ cmd; } ;
struct TYPE_4__ {float* forward; float* right; } ;


 int FUNC_0 (float*,float,int ) ;
 float FUNC_1 (TYPE_3__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (float*,float*) ;
 float FUNC_5 (float*) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6( void ) {
 int VAR_4;
 vec3_t VAR_5;
 float VAR_6;
 vec3_t VAR_7;
 float VAR_8;


 FUNC_2 ();

 VAR_8 = FUNC_1( &VAR_0->cmd );



 if ( !VAR_8 ) {
  VAR_5[0] = 0;
  VAR_5[1] = 0;
  VAR_5[2] = 0;
 } else {
  for (VAR_4=0 ; VAR_4<3 ; VAR_4++) {
   VAR_5[VAR_4] = VAR_8 * VAR_2.forward[VAR_4]*VAR_0->cmd.forwardmove + VAR_8 * VAR_2.right[VAR_4]*VAR_0->cmd.rightmove;
  }

  VAR_5[2] += VAR_8 * VAR_0->cmd.upmove;
 }

 FUNC_4 (VAR_5, VAR_7);
 VAR_6 = FUNC_5(VAR_7);

 FUNC_0 (VAR_7, VAR_6, VAR_1);

 FUNC_3( VAR_3 );
}
