
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* plane; int signbits; } ;


 int FUNC_0 (float*,float*,float*,float*) ;
 int FUNC_1 (float*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (float*,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 float VAR_2 ;
 int FUNC_4 (float*,scalar_t__*) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_5( float *VAR_5, float *VAR_6, float *VAR_7 ) {
 float VAR_8[4];
 int VAR_9;
 float VAR_10;

 if ( !FUNC_0( VAR_8, VAR_5, VAR_6, VAR_7 ) ) {
  return -1;
 }


 for ( VAR_9 = 0 ; VAR_9 < VAR_3 ; VAR_9++ ) {
  if ( FUNC_3( VAR_8, VAR_4[VAR_9].plane ) < 0 ) {
   continue;
  }

  VAR_10 = FUNC_3( VAR_5, VAR_4[VAR_9].plane ) - VAR_4[VAR_9].plane[3];
  if ( VAR_10 < -VAR_2 || VAR_10 > VAR_2 ) {
   continue;
  }

  VAR_10 = FUNC_3( VAR_6, VAR_4[VAR_9].plane ) - VAR_4[VAR_9].plane[3];
  if ( VAR_10 < -VAR_2 || VAR_10 > VAR_2 ) {
   continue;
  }

  VAR_10 = FUNC_3( VAR_7, VAR_4[VAR_9].plane ) - VAR_4[VAR_9].plane[3];
  if ( VAR_10 < -VAR_2 || VAR_10 > VAR_2 ) {
   continue;
  }


  return VAR_9;
 }


 if ( VAR_3 == VAR_1 ) {
  FUNC_2( VAR_0, "MAX_PATCH_PLANES" );
 }

 FUNC_4( VAR_8, VAR_4[VAR_3].plane );
 VAR_4[VAR_3].signbits = FUNC_1( VAR_8 );

 VAR_3++;

 return VAR_3-1;
}
