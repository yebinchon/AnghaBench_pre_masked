
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int* vec3_t ;
typedef int usercmd_t ;
typedef int cmd ;
struct TYPE_4__ {int* viewangles; } ;
struct TYPE_3__ {int integer; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int) ;
 size_t VAR_0 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int*,int*) ;
 size_t VAR_1 ;
 int FUNC_9 (int) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;

usercmd_t FUNC_10( void ) {
 usercmd_t VAR_4;
 vec3_t VAR_5;

 FUNC_8( VAR_2.viewangles, VAR_5 );


 FUNC_0 ();

 FUNC_6( &VAR_4, 0, sizeof( VAR_4 ) );

 FUNC_1( &VAR_4 );


 FUNC_4( &VAR_4 );


 FUNC_5( &VAR_4 );


 FUNC_3( &VAR_4 );


 if ( VAR_2.viewangles[VAR_0] - VAR_5[VAR_0] > 90 ) {
  VAR_2.viewangles[VAR_0] = VAR_5[VAR_0] + 90;
 } else if ( VAR_5[VAR_0] - VAR_2.viewangles[VAR_0] > 90 ) {
  VAR_2.viewangles[VAR_0] = VAR_5[VAR_0] - 90;
 }


 FUNC_2( &VAR_4 );


 if ( VAR_3->integer ) {
  if ( VAR_3->integer == 1 ) {
   FUNC_7( FUNC_9(VAR_2.viewangles[VAR_1] - VAR_5[VAR_1]), 0 );
  }
  if ( VAR_3->integer == 2 ) {
   FUNC_7( FUNC_9(VAR_2.viewangles[VAR_0] - VAR_5[VAR_0]), 0 );
  }
 }

 return VAR_4;
}
