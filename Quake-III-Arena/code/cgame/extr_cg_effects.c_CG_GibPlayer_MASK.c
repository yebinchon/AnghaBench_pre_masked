
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_8__ {int integer; } ;
struct TYPE_7__ {int integer; } ;
struct TYPE_5__ {int gibLeg; int gibIntestine; int gibForearm; int gibFoot; int gibFist; int gibChest; int gibArm; int gibAbdomen; int gibBrain; int gibSkull; } ;
struct TYPE_6__ {TYPE_1__ media; } ;


 int FUNC_0 (int*,int*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*,int*) ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4( vec3_t VAR_5 ) {
 vec3_t VAR_6, VAR_7;

 if ( !VAR_2.integer ) {
  return;
 }

 FUNC_1( VAR_5, VAR_6 );
 VAR_7[0] = FUNC_2()*VAR_1;
 VAR_7[1] = FUNC_2()*VAR_1;
 VAR_7[2] = VAR_0 + FUNC_2()*VAR_1;
 if ( FUNC_3() & 1 ) {
  FUNC_0( VAR_6, VAR_7, VAR_4.media.gibSkull );
 } else {
  FUNC_0( VAR_6, VAR_7, VAR_4.media.gibBrain );
 }


 if ( !VAR_3.integer ) {
  return;
 }

 FUNC_1( VAR_5, VAR_6 );
 VAR_7[0] = FUNC_2()*VAR_1;
 VAR_7[1] = FUNC_2()*VAR_1;
 VAR_7[2] = VAR_0 + FUNC_2()*VAR_1;
 FUNC_0( VAR_6, VAR_7, VAR_4.media.gibAbdomen );

 FUNC_1( VAR_5, VAR_6 );
 VAR_7[0] = FUNC_2()*VAR_1;
 VAR_7[1] = FUNC_2()*VAR_1;
 VAR_7[2] = VAR_0 + FUNC_2()*VAR_1;
 FUNC_0( VAR_6, VAR_7, VAR_4.media.gibArm );

 FUNC_1( VAR_5, VAR_6 );
 VAR_7[0] = FUNC_2()*VAR_1;
 VAR_7[1] = FUNC_2()*VAR_1;
 VAR_7[2] = VAR_0 + FUNC_2()*VAR_1;
 FUNC_0( VAR_6, VAR_7, VAR_4.media.gibChest );

 FUNC_1( VAR_5, VAR_6 );
 VAR_7[0] = FUNC_2()*VAR_1;
 VAR_7[1] = FUNC_2()*VAR_1;
 VAR_7[2] = VAR_0 + FUNC_2()*VAR_1;
 FUNC_0( VAR_6, VAR_7, VAR_4.media.gibFist );

 FUNC_1( VAR_5, VAR_6 );
 VAR_7[0] = FUNC_2()*VAR_1;
 VAR_7[1] = FUNC_2()*VAR_1;
 VAR_7[2] = VAR_0 + FUNC_2()*VAR_1;
 FUNC_0( VAR_6, VAR_7, VAR_4.media.gibFoot );

 FUNC_1( VAR_5, VAR_6 );
 VAR_7[0] = FUNC_2()*VAR_1;
 VAR_7[1] = FUNC_2()*VAR_1;
 VAR_7[2] = VAR_0 + FUNC_2()*VAR_1;
 FUNC_0( VAR_6, VAR_7, VAR_4.media.gibForearm );

 FUNC_1( VAR_5, VAR_6 );
 VAR_7[0] = FUNC_2()*VAR_1;
 VAR_7[1] = FUNC_2()*VAR_1;
 VAR_7[2] = VAR_0 + FUNC_2()*VAR_1;
 FUNC_0( VAR_6, VAR_7, VAR_4.media.gibIntestine );

 FUNC_1( VAR_5, VAR_6 );
 VAR_7[0] = FUNC_2()*VAR_1;
 VAR_7[1] = FUNC_2()*VAR_1;
 VAR_7[2] = VAR_0 + FUNC_2()*VAR_1;
 FUNC_0( VAR_6, VAR_7, VAR_4.media.gibLeg );

 FUNC_1( VAR_5, VAR_6 );
 VAR_7[0] = FUNC_2()*VAR_1;
 VAR_7[1] = FUNC_2()*VAR_1;
 VAR_7[2] = VAR_0 + FUNC_2()*VAR_1;
 FUNC_0( VAR_6, VAR_7, VAR_4.media.gibLeg );
}
