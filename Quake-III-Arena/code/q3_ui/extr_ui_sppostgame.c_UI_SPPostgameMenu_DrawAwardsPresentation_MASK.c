
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef float* vec4_t ;
struct TYPE_2__ {size_t* awardsEarned; scalar_t__* playedSound; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int ,int ,float*) ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int * VAR_6 ;
 int * VAR_7 ;

__attribute__((used)) static void FUNC_4( int VAR_8 ) {
 int VAR_9;
 int VAR_10;
 vec4_t VAR_11;

 VAR_9 = VAR_8 / VAR_0;
 VAR_10 = VAR_8 % VAR_0;

 VAR_11[0] = VAR_11[1] = VAR_11[2] = 1.0f;
 VAR_11[3] = (float)( VAR_0 - VAR_10 ) / (float)VAR_0;
 FUNC_0( 320, 64, VAR_6[VAR_3.awardsEarned[VAR_9]], VAR_2, VAR_11 );

 FUNC_1( VAR_9 + 1 );

 if( !VAR_3.playedSound[VAR_9] ) {
  VAR_3.playedSound[VAR_9] = VAR_5;
  FUNC_3( FUNC_2( VAR_7[VAR_3.awardsEarned[VAR_9]], VAR_4 ), VAR_1 );
 }
}
